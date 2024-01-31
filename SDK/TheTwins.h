
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AkAudio
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DBDBots
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StatSystem
/// dependency: SystemUtilities

/// Enum /Script/TheTwins.EPerkInteractionObjectType
/// Size: 0x04
enum class EPerkInteractionObjectType : uint8_t
{
	EPerkInteractionObjectType__Item                                                 = 0,
	EPerkInteractionObjectType__ChestClosed                                          = 1,
	EPerkInteractionObjectType__ChestOpen                                            = 2,
	EPerkInteractionObjectType__EPerkInteractionObjectType_MAX                       = 3
};

/// Enum /Script/TheTwins.EPossessionState
/// Size: 0x04
enum class EPossessionState : uint8_t
{
	EPossessionState__NotPossessed                                                   = 0,
	EPossessionState__BeingPossessed                                                 = 1,
	EPossessionState__Possessed                                                      = 2,
	EPossessionState__EPossessionState_MAX                                           = 3
};

/// Class /Script/TheTwins.Addon_K22Power
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UAddon_K22Power : public UOnEventBaseAddon
{ 
public:
	class UClass*                                      _hemorrhageStatusEffectClass;                               // 0x02C8   (0x0008)  
};

/// Class /Script/TheTwins.AISkill_FindInteractable_CrushTwin
/// Size: 0x0068 (0x000198 - 0x000200)
class UAISkill_FindInteractable_CrushTwin : public UAISkill_FindInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0198   (0x000C)  MISSED
	FAITunableParameter                                _crushVictorGoalWeight;                                     // 0x01A4   (0x0010)  
	FAITunableParameter                                _recoveringTimeEstimationErrorMin;                          // 0x01B4   (0x0010)  
	FAITunableParameter                                _recoveringTimeEstimationErrorMax;                          // 0x01C4   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FDBDTunableRowHandle                               _destroyTwinMaxCharge;                                      // 0x01D8   (0x0028)  
};

/// Class /Script/TheTwins.AISkill_Interaction_RemoveTwin
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UAISkill_Interaction_RemoveTwin : public UAISkill_Interaction
{ 
public:
	FDBDTunableRowHandle                               _removeTwinMaxCharge;                                       // 0x0190   (0x0028)  
};

/// Class /Script/TheTwins.Appraisal
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UAppraisal : public UPerk
{ 
public:
	float                                              _chestSearchSpeedMultiplier;                                // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _fastChestSearchEffectClass;                                // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03E0   (0x0008)  MISSED
};

/// Class /Script/TheTwins.PossessPlayer
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UPossessPlayer : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _possessThePlayerMaxCharge;                                 // 0x0790   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x07B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheTwins.PossessPlayer.Cosmetic_OnPossessStart
	// void Cosmetic_OnPossessStart(class ADBDPlayer* Player);                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled
	// void Cosmetic_OnPossessCancelled(class ADBDPlayer* Player);                                                           // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheTwins.PossessTheConjoinedTwin
/// Size: 0x0070 (0x0007C0 - 0x000830)
class UPossessTheConjoinedTwin : public UPossessPlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x07C0   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheTwins.PossessTheConjoinedTwin.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x5e57560] Final|Native|Private 
	// Function /Script/TheTwins.PossessTheConjoinedTwin.OnPowerCollected
	// void OnPowerCollected(class ADBDPlayer* collector);                                                                   // [0x5e571d0] Final|Native|Private 
};

/// Class /Script/TheTwins.AutoPossessTheConjoinedTwin
/// Size: 0x0000 (0x000830 - 0x000830)
class UAutoPossessTheConjoinedTwin : public UPossessTheConjoinedTwin
{ 
public:
};

/// Class /Script/TheTwins.BaseTwinInspectLocker
/// Size: 0x0030 (0x000680 - 0x0006B0)
class UBaseTwinInspectLocker : public UBaseLockerInteraction
{ 
public:
	FDBDTunableRowHandle                               _inspectInteractionTime;                                    // 0x0678   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x06A0   (0x0010)  MISSED
};

/// Class /Script/TheTwins.BeingPossessedInteraction
/// Size: 0x0090 (0x000790 - 0x000820)
class UBeingPossessedInteraction : public UChargeableInteractionDefinition
{ 
public:
	FTunableStat                                       _beingPossessedMaxCharge;                                   // 0x0790   (0x0080)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0810   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5e51720] Final|Native|Private 
};

/// Class /Script/TheTwins.BrotherBlindFlashlightableLightingStrategy
/// Size: 0x0018 (0x000050 - 0x000068)
class UBrotherBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/TheTwins.ChargeTwinJumpInteraction
/// Size: 0x0150 (0x000790 - 0x0008E0)
class UChargeTwinJumpInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0790   (0x0048)  MISSED
	FDBDTunableRowHandle                               _chargeJumpMaxCharge;                                       // 0x07D8   (0x0028)  
	FDBDTunableRowHandle                               _interactionViewPitchMax;                                   // 0x0800   (0x0028)  
	FDBDTunableRowHandle                               _interactionViewPitchMin;                                   // 0x0828   (0x0028)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0850   (0x0030)  MISSED
	FDBDTunableRowHandle                               _cancelCooldownTime;                                        // 0x0880   (0x0028)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x08A8   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged
	// void Cosmetic_OnJumpReadyChanged(class ADBDPlayer* twin, bool Ready);                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheTwins.ConjoinedTwin
/// Size: 0x0200 (0x0011B0 - 0x0013B0)
class AConjoinedTwin : public ADBDPlayer
{ 
public:
	class URangeToActorsTrackerComponent*              _restrictedPossessionAreaTracker;                           // 0x11A8   (0x0008)  
	class UTwinOutlineUpdateStrategy*                  _twinOutlineUpdateStrategy;                                 // 0x11B0   (0x0008)  
	class UAkComponent*                                _twinLullabyAudioComponent;                                 // 0x11B8   (0x0008)  
	class UKillerBlindingFXComponent*                  _twinBlindingFX;                                            // 0x11C0   (0x0008)  
	float                                              TwinNoiseRange;                                             // 0x11C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x11CC   (0x0004)  MISSED
	class UCustomizedAudioComponent*                   _customizedAudio;                                           // 0x11D0   (0x0008)  
	class UDBDAttackerComponent*                       _attackerComponent;                                         // 0x11D8   (0x0008)  
	FDBDTunableRowHandle                               _maxWalkSpeed;                                              // 0x11E0   (0x0028)  
	class UHitValidatorComponent*                      _hitValidator;                                              // 0x1208   (0x0008)  
	class UHitValidatorConfigurator*                   _hitValidationConfigurator;                                 // 0x1210   (0x0008)  
	FDBDTunableRowHandle                               _gravityScale;                                              // 0x1218   (0x0028)  
	class UAnimationMontageSlave*                      _animationFollower;                                         // 0x1240   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x1248   (0x0020)  MISSED
	FDBDTunableRowHandle                               _revealDurationOnAttached;                                  // 0x1268   (0x0028)  
	class UTwinFirstPersonViewComponent*               _firstPersonViewComponent;                                  // 0x1290   (0x0008)  
	class UFlashlightableComponent*                    _eyesFlashlightable;                                        // 0x1298   (0x0008)  
	class UBlindFlashlightTargetFXComponent*           _blindFlashlightTargetFXComponent;                          // 0x12A0   (0x0008)  
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                         // 0x12A8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x12B0   (0x0008)  MISSED
	FFastTimer                                         _flashlightBlindEvasionScoreTimer;                          // 0x12B8   (0x0030)  
	FDBDTunableRowHandle                               _flashlightEvasionScoreCooldown;                            // 0x12E8   (0x0028)  
	class UClass*                                      _hideFootstepsEffect;                                       // 0x1310   (0x0008)  
	class UClass*                                      _twinsBloodhoundEffect;                                     // 0x1318   (0x0008)  
	class UClass*                                      _twinsRevealKillerAuraEffect;                               // 0x1320   (0x0008)  
	class UClass*                                      _twinsDormantKillerInstinctEffect;                          // 0x1328   (0x0008)  
	class UClass*                                      _twinsRevealAuraOnAttachedToSurvivorEffect;                 // 0x1330   (0x0008)  
	class UClass*                                      _twinsRevealAuraOnRecallReadyEffect;                        // 0x1338   (0x0008)  
	class UClass*                                      _timeDeafenedOnTriggerEffect;                               // 0x1340   (0x0008)  
	class UTwinPossessNegationEffectComponent*         _twinPossessNegationEffectComponent;                        // 0x1348   (0x0008)  
	unsigned char                                      UnknownData03_6[0x60];                                      // 0x1350   (0x0060)  MISSED


	/// Functions
	// Function /Script/TheTwins.ConjoinedTwin.Server_SendAttackInput
	// void Server_SendAttackInput(bool Pressed);                                                                            // [0x5e518e0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/TheTwins.ConjoinedTwin.OnFinishedPlayingEvent
	// void OnFinishedPlayingEvent(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x5e51410] Final|Native|Private|HasOutParms 
	// Function /Script/TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged
	// void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin
	// void Authority_OnFirecrackerInRangeBegin(FFirecrackerEffectData& effectData);                                         // [0x5e510e0] Final|Native|Protected|HasOutParms 
};

/// Class /Script/TheTwins.ConjoinedTwinAnimInstance
/// Size: 0x00C0 (0x000540 - 0x000600)
class UConjoinedTwinAnimInstance : public UPlayerAnimInstance
{ 
public:
	class AConjoinedTwin*                              _owningConjoinedTwin;                                       // 0x0540   (0x0008)  
	bool                                               _firstPersonView;                                           // 0x0548   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0549   (0x0003)  MISSED
	float                                              _forwardVelocity;                                           // 0x054C   (0x0004)  
	float                                              _lateralVelocity;                                           // 0x0550   (0x0004)  
	EInteractionAnimation                              _interactionType;                                           // 0x0554   (0x0001)  
	bool                                               _isInAir;                                                   // 0x0555   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0556   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0557   (0x0001)  MISSED
	float                                              _idleTime;                                                  // 0x0558   (0x0004)  
	bool                                               _isAttacking;                                               // 0x055C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x055D   (0x0003)  MISSED
	class UDBDAttackerComponent*                       _attackerComponent;                                         // 0x0560   (0x0008)  
	class UTwinAttachmentComponent*                    _twinAttachmentComponent;                                   // 0x0568   (0x0008)  
	class UTwinLockerBlockerComponent*                 _twinLockerBlockerComponent;                                // 0x0570   (0x0008)  
	float                                              _animYaw;                                                   // 0x0578   (0x0004)  
	float                                              _animPitch;                                                 // 0x057C   (0x0004)  
	bool                                               _isSpectator;                                               // 0x0580   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0581   (0x0003)  MISSED
	float                                              _animDirection;                                             // 0x0584   (0x0004)  
	float                                              _animSpeed;                                                 // 0x0588   (0x0004)  
	bool                                               _isAttachedToSister;                                        // 0x058C   (0x0001)  
	bool                                               _isAttachedToSurvivor;                                      // 0x058D   (0x0001)  
	bool                                               _isAttachedToFemaleSurvivor;                                // 0x058E   (0x0001)  
	bool                                               _isChargingTwinJump;                                        // 0x058F   (0x0001)  
	bool                                               _isPossessing;                                              // 0x0590   (0x0001)  
	bool                                               _isWakingUpFromPossess;                                     // 0x0591   (0x0001)  
	bool                                               _isDormant;                                                 // 0x0592   (0x0001)  
	bool                                               _isBeingAutoPossessedAfterRelease;                          // 0x0593   (0x0001)  
	bool                                               _isAttachedToLocker;                                        // 0x0594   (0x0001)  
	EAttackSubstate                                    _attackState;                                               // 0x0595   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6A];                                      // 0x0596   (0x006A)  MISSED


	/// Functions
	// Function /Script/TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin
	// class AConjoinedTwin* GetOwningConjoinedTwin();                                                                       // [0x5e513b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheTwins.ConjoinedTwinInteractable
/// Size: 0x0028 (0x000370 - 0x000398)
class AConjoinedTwinInteractable : public APlayerInteractable
{ 
public:
	class UChargeableComponent*                        _possessKillerChargeable;                                   // 0x0370   (0x0008)  
	class UChargeableComponent*                        _twinBeingPossessedChargeable;                              // 0x0378   (0x0008)  
	class UChargeableComponent*                        _chargeTwinJumpChargeable;                                  // 0x0380   (0x0008)  
	class UChargeableComponent*                        _removeTwinChargeable;                                      // 0x0388   (0x0008)  
	class UChargeableComponent*                        _destroyTwinChargeable;                                     // 0x0390   (0x0008)  
};

/// Class /Script/TheTwins.ConjoinedTwinStateMachine
/// Size: 0x0000 (0x000130 - 0x000130)
class UConjoinedTwinStateMachine : public UPlayerStateMachine
{ 
public:
};

/// Class /Script/TheTwins.CoupDeGrace
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UCoupDeGrace : public UPerk
{ 
public:
	char                                               _tokenGainOnRepair;                                         // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03C9   (0x0003)  MISSED
	float                                              _lungeAttackAddDurationMultiplier;                          // 0x03CC   (0x000C)  
	TArray<class AGenerator*>                          _completedGenerators;                                       // 0x03D8   (0x0010)  
};

/// Class /Script/TheTwins.Deception
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UDeception : public UPerk
{ 
public:
	float                                              _noScratchMarksDuration;                                    // 0x03C8   (0x000C)  
	float                                              _perkCooldownDuration;                                      // 0x03D4   (0x000C)  
	class UClass*                                      _deceptionStatusEffectClass;                                // 0x03E0   (0x0008)  
	class UStatusEffect*                               _statusEffect;                                              // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x03F0   (0x0008)  MISSED
	class UManualIconStrategy*                         _iconStrategy;                                              // 0x03F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0400   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic
	// void OnOwningPlayerFakedEnteringLockerCosmetic();                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheTwins.DestroyTwin
/// Size: 0x0080 (0x000790 - 0x000810)
class UDestroyTwin : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0790   (0x0050)  MISSED
	FDBDTunableRowHandle                               _destroyTwinMaxCharge;                                      // 0x07E0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0808   (0x0008)  MISSED
};

/// Class /Script/TheTwins.Hoarder
/// Size: 0x0050 (0x0003C8 - 0x000418)
class UHoarder : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	TArray<class ASearchable*>                         _chests;                                                    // 0x03D0   (0x0010)  
	float                                              _camperInteractItemPickupRevealRange;                       // 0x03E0   (0x000C)  
	int32_t                                            _extraChestsSpawned;                                        // 0x03EC   (0x000C)  
	float                                              _bubbleIndicatorLifetime;                                   // 0x03F8   (0x000C)  
	bool                                               _showUniqueChestVisualPerState;                             // 0x0404   (0x0001)  
	unsigned char                                      UnknownData01_6[0x13];                                      // 0x0405   (0x0013)  MISSED


	/// Functions
	// Function /Script/TheTwins.Hoarder.OnItemRemovedFromPlayer
	// void OnItemRemovedFromPlayer(class ACollectable* Item, EInventoryType inventoryType);                                 // [0x5e51650] Final|Native|Private 
	// Function /Script/TheTwins.Hoarder.OnItemAddedToPlayer
	// void OnItemAddedToPlayer(class ACollectable* Item, EInventoryType inventoryType, class ACamperPlayer* Player);        // [0x5e51540] Final|Native|Private 
	// Function /Script/TheTwins.Hoarder.Local_ThrowBubbleIndicator
	// void Local_ThrowBubbleIndicator(EPerkInteractionObjectType camperInteractionType, class AActor* objectActor, class ACamperPlayer* interactingCamperPlayer); // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.Hoarder.GetBubbleIndicatorLifetime
	// float GetBubbleIndicatorLifetime();                                                                                   // [0x5e51320] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheTwins.IsTwinRecallReady
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UIsTwinRecallReady : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheTwins.IsTwinRecallReady.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5e51740] Final|Native|Private 
};

/// Class /Script/TheTwins.K22AchievementTagTeam
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UK22AchievementTagTeam : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheTwins.K22Power
/// Size: 0x0178 (0x0004C8 - 0x000640)
class AK22Power : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x04C8   (0x0018)  MISSED
	class UChargeableComponent*                        _releaseConjoinedTwinChargeable;                            // 0x04E0   (0x0008)  
	class UChargeableComponent*                        _possessConjoinedTwinChargeable;                            // 0x04E8   (0x0008)  
	class UClass*                                      _killerDormantStealthStatusEffectClass;                     // 0x04F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x04F8   (0x0018)  MISSED
	class AConjoinedTwin*                              _conjoinedTwin;                                             // 0x0510   (0x0008)  
	class AConjoinedTwin*                              _conjoinedTwinParadise;                                     // 0x0518   (0x0008)  
	class UPowerChargeComponent*                       _powerCharge;                                               // 0x0520   (0x0008)  
	class UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;                  // 0x0528   (0x0008)  
	FDBDTunableRowHandle                               _powerMaxCharge;                                            // 0x0530   (0x0028)  
	class UClass*                                      _conjoinedTwinClass;                                        // 0x0558   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0560   (0x0018)  MISSED
	FDBDTunableRowHandle                               _powerRechargeRate;                                         // 0x0578   (0x0028)  
	FDBDTunableRowHandle                               _timeBeforeAutoDestroy;                                     // 0x05A0   (0x0028)  
	FDBDTunableRowHandle                               _timeBeforeRecallAvailable;                                 // 0x05C8   (0x0028)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x05F0   (0x0050)  MISSED


	/// Functions
	// Function /Script/TheTwins.K22Power.OnRep_ConjoinedTwin
	// void OnRep_ConjoinedTwin();                                                                                           // [0x5e51780] Final|Native|Private 
	// Function /Script/TheTwins.K22Power.OnPowerChargeEmpty
	// void OnPowerChargeEmpty();                                                                                            // [0x5e51760] Final|Native|Private 
	// Function /Script/TheTwins.K22Power.OnFirstAttachmentToSister
	// void OnFirstAttachmentToSister();                                                                                     // [0x5e51520] Final|Native|Private 
	// Function /Script/TheTwins.K22Power.GetConjoinedTwin
	// class AConjoinedTwin* GetConjoinedTwin();                                                                             // [0x5e51350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged
	// void Authority_OnPossessTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5e51180] Final|Native|Private 
	// Function /Script/TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged
	// void Authority_OnDestroyTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5e50fd0] Final|Native|Private 
};

/// Class /Script/TheTwins.K22PowerChargePresentationItemProgressComponent
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UK22PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                      // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x5e517c0] Final|Native|Private 
};

/// Class /Script/TheTwins.K22ScoreComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UK22ScoreComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheTwins.KillerBeingPossessedInteraction
/// Size: 0x0000 (0x000820 - 0x000820)
class UKillerBeingPossessedInteraction : public UBeingPossessedInteraction
{ 
public:
};

/// Class /Script/TheTwins.PossessionComponent
/// Size: 0x0090 (0x0000B8 - 0x000148)
class UPossessionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x61];                                      // 0x00B8   (0x0061)  MISSED
	bool                                               _startPossessed;                                            // 0x0119   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x011A   (0x0006)  MISSED
	class AAIController*                               _emptyController;                                           // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0128   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheTwins.PossessionComponent.Server_StartPossessionOf
	// void Server_StartPossessionOf(class ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction);          // [0x5e57840] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheTwins.PossessionComponent.Server_NotifyPossessionDone
	// void Server_NotifyPossessionDone();                                                                                   // [0x5e577a0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheTwins.PossessionComponent.Server_NotifyBeingPossessedInteractionStarted
	// void Server_NotifyBeingPossessedInteractionStarted();                                                                 // [0x4dd4860] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheTwins.PossessionComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5e57040] Final|Native|Private 
	// Function /Script/TheTwins.PossessionComponent.Multicast_StartPossessionOf
	// void Multicast_StartPossessionOf(class ADBDPlayer* playerToPossess);                                                  // [0x59c2dd0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheTwins.PossessionComponent.Multicast_NotifyPossessionDone
	// void Multicast_NotifyPossessionDone();                                                                                // [0x4dd4880] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheTwins.PossessionComponent.IsPossessed
	// bool IsPossessed();                                                                                                   // [0x5e567c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTwins.PossessionComponent.IsDormant
	// bool IsDormant();                                                                                                     // [0x5e56790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled
	// void CosmeticLocal_OnUncontrolled(class ADBDPlayer* Player);                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.PossessionComponent.CosmeticLocal_OnControlled
	// void CosmeticLocal_OnControlled(class ADBDPlayer* Player);                                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.PossessionComponent.Cosmetic_OnControlledChanged
	// void Cosmetic_OnControlledChanged(class ADBDPlayer* Player, bool IsControlled);                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.PossessionComponent.Client_WaitForBeingPossessedInteractionToStart
	// void Client_WaitForBeingPossessedInteractionToStart();                                                                // [0x4d82970] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess
	// void Client_StartStateMachineDriverChangeProcess();                                                                   // [0x5882360] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/TheTwins.KillerPossessionComponent
/// Size: 0x0060 (0x000148 - 0x0001A8)
class UKillerPossessionComponent : public UPossessionComponent
{ 
public:
	bool                                               _shouldDeactivateCollisionsWithSurvivors;                   // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_5[0x37];                                      // 0x0149   (0x0037)  MISSED
	FDBDTunableRowHandle                               _timeBeforeCollisionsDeactivation;                          // 0x0180   (0x0028)  


	/// Functions
	// Function /Script/TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors
	// void OnRep_ShouldDeactivateCollisionsWithSurvivors();                                                                 // [0x5e517a0] Final|Native|Private 
};

/// Class /Script/TheTwins.PossessNegationEffectComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UPossessNegationEffectComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5594) /* FMulticastInlineDelegate */ __um(PlayCantPossessSound);                              // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature
	// void PlayCantPossessSound__DelegateSignature();                                                                       // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4dd4860] Native|Protected     
};

/// Class /Script/TheTwins.KillerPossessNegationEffectComponent
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class UKillerPossessNegationEffectComponent : public UPossessNegationEffectComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00D0   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheTwins.KillerPossessNegationEffectComponent.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x5e51850] Final|Native|Private 
};

/// Class /Script/TheTwins.Oppression
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UOppression : public UPerk
{ 
public:
	int32_t                                            _nbGeneratorsAffectedByPerk;                                // 0x03C8   (0x000C)  
	int32_t                                            _perkCooldown;                                              // 0x03D4   (0x000C)  


	/// Functions
	// Function /Script/TheTwins.Oppression.GetPerkCooldownAtLevel
	// float GetPerkCooldownAtLevel();                                                                                       // [0x5e513e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTwins.Oppression.GetNumberGensAffectedByPerkAtLevel
	// float GetNumberGensAffectedByPerkAtLevel();                                                                           // [0x5e51380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheTwins.PossessTheKiller
/// Size: 0x0040 (0x0007C0 - 0x000800)
class UPossessTheKiller : public UPossessPlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x07C0   (0x0040)  MISSED
};

/// Class /Script/TheTwins.PowerStruggle
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UPowerStruggle : public UPerk
{ 
public:
	float                                              _wigglePercentToActivatePerk;                               // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _revealPalletWhenKOEffectClass;                             // 0x03D8   (0x0008)  
};

/// Class /Script/TheTwins.PushTwinOnLockerInteraction
/// Size: 0x0060 (0x000790 - 0x0007F0)
class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition
{ 
public:
	class UChargeableComponent*                        _pushTwinOnLockerChargeable;                                // 0x0790   (0x0008)  
	FDBDTunableRowHandle                               _pushTwinOnLockerMaxCharge;                                 // 0x0798   (0x0028)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x07C0   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheTwins.PushTwinOnLockerInteraction.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x5e575f0] Final|Native|Private 
	// Function /Script/TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable
	// void OnRep_PushTwinOnLockerChargeable();                                                                              // [0x5e57500] Final|Native|Private 
	// Function /Script/TheTwins.PushTwinOnLockerInteraction.Authority_OnPlayerInLockerChanged
	// void Authority_OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker); // [0x5e56410] Final|Native|Private 
};

/// Class /Script/TheTwins.RecallTwin
/// Size: 0x0030 (0x000650 - 0x000680)
class URecallTwin : public UInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0650   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheTwins.RecallTwin.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x5dc8850] Final|Native|Private 
};

/// Class /Script/TheTwins.ReleaseConjoinedTwin
/// Size: 0x0170 (0x000790 - 0x000900)
class UReleaseConjoinedTwin : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _releaseMaxCharge;                                          // 0x0790   (0x0028)  
	FTunableStat                                       _releaseExitTime;                                           // 0x07B8   (0x0080)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x0838   (0x003C)  MISSED
	bool                                               _releaseAnimationWentToTheEnd;                              // 0x0874   (0x0001)  
	unsigned char                                      UnknownData01_6[0x8B];                                      // 0x0875   (0x008B)  MISSED


	/// Functions
	// Function /Script/TheTwins.ReleaseConjoinedTwin.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x5e57680] Final|Native|Private 
	// Function /Script/TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd
	// void OnRep_ReleaseAnimationWentToTheEnd();                                                                            // [0x5e57520] Final|Native|Private 
	// Function /Script/TheTwins.ReleaseConjoinedTwin.OnPowerCollected
	// void OnPowerCollected(class ADBDPlayer* collector);                                                                   // [0x5e57260] Final|Native|Private 
	// Function /Script/TheTwins.ReleaseConjoinedTwin.OnKillerStunned
	// void OnKillerStunned(FGameplayTag gameEventType, FGameEventData& GameEventData);                                      // [0x5e56f30] Final|Native|Private|HasOutParms 
	// Function /Script/TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart
	// void Cosmetic_OnReleaseTwinInteractionUpdateStart(class ADBDPlayer* sister, class AConjoinedTwin* brother);           // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate
	// void Cosmetic_OnReleaseTwinInteractionUpdate(class ADBDPlayer* sister, class AConjoinedTwin* brother, float DeltaTime); // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete
	// void Cosmetic_OnReleaseChargeComplete(class ADBDPlayer* sister, class AConjoinedTwin* brother);                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled
	// void Cosmetic_OnReleaseCancelled(class ADBDPlayer* sister, class AConjoinedTwin* brother);                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheTwins.RemoveTwin
/// Size: 0x00A0 (0x000790 - 0x000830)
class URemoveTwin : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0790   (0x0040)  MISSED
	FDBDTunableRowHandle                               _removeTwinMaxCharge;                                       // 0x07D0   (0x0028)  
	FDBDTunableRowHandle                               _removeTwinExitTime;                                        // 0x07F8   (0x0028)  
	float                                              _brotherRemoveDistanceFromSurvivor;                         // 0x0820   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0824   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheTwins.RemoveTwin.OnRemoveMontageEnd
	// void OnRemoveMontageEnd(FAnimationMontageDescriptor Montage, bool interrupted, class ADBDPlayer* destroyingPlayer);   // [0x5e572f0] Final|Native|Private 
};

/// Class /Script/TheTwins.SisterBlindFlashlightableLightingStrategy
/// Size: 0x0038 (0x000050 - 0x000088)
class USisterBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x5e57710] Final|Native|Private 
};

/// Class /Script/TheTwins.TheTwinsCheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UTheTwinsCheatComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller
	// void Multicast_TrySendThePlayerBackInKiller(class UTwinPossessionComponent* TwinPossessionComponent);                 // [0x58cbe00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin
	// void DBD_TwinDestroyTheTwin();                                                                                        // [0x4592da0] Final|Exec|Native|Public 
};

/// Class /Script/TheTwins.TwinAOELingeringStatusEffect
/// Size: 0x00A0 (0x0003B8 - 0x000458)
class UTwinAOELingeringStatusEffect : public UBaseLingeringStatusEffect
{ 
public:
	FTunableStat                                       _shriekingRange;                                            // 0x03B8   (0x0080)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0438   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5daa8c0] Final|Native|Private 
};

/// Class /Script/TheTwins.TwinAttachmentComponent
/// Size: 0x0190 (0x0000B8 - 0x000248)
class UTwinAttachmentComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	class ADBDPlayer*                                  _attachedPlayer;                                            // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_5[0x60];                                      // 0x0108   (0x0060)  MISSED
	class UClass*                                      _gateBlockerEffectClass;                                    // 0x0168   (0x0008)  
	class UClass*                                      _graspBrokenEffectClass;                                    // 0x0170   (0x0008)  
	class UClass*                                      _graspIncapacitatedEffectClass;                             // 0x0178   (0x0008)  
	class UClass*                                      _graspObliviousEffectClass;                                 // 0x0180   (0x0008)  
	class UClass*                                      _graspKillerInstinctEffectClass;                            // 0x0188   (0x0008)  
	class UStatusEffect*                               _gateBlockerStatusEffect;                                   // 0x0190   (0x0008)  
	unsigned char                                      UnknownData02_5[0x12];                                      // 0x0198   (0x0012)  MISSED
	bool                                               _hasBeenDetachedBySurvivorDamageChanged;                    // 0x01AA   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x01AB   (0x0005)  MISSED
	FDBDTunableRowHandle                               _cantEscapeByGateLingerDuration;                            // 0x01B0   (0x0028)  
	SDK_UNDEFINED(80,5595) /* TMap<ADBDPlayer*, FFastTimer> */ __um(_escapeBlockerLingerTimers);                   // 0x01D8   (0x0050)  
	FGameplayTagContainer                              _notCancelableInteractionTags;                              // 0x0228   (0x0020)  


	/// Functions
	// Function /Script/TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer
	// void OnRep_AttachedPlayer(class ADBDPlayer* oldAttachedPlayer);                                                       // [0x5e57470] Final|Native|Private 
	// Function /Script/TheTwins.TwinAttachmentComponent.OnMoriMontageEnd
	// void OnMoriMontageEnd(FAnimationMontageDescriptor Montage, bool interrupted);                                         // [0x5e57080] Final|Native|Private 
	// Function /Script/TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5e57060] Final|Native|Private 
	// Function /Script/TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged
	// void OnAttachedSurvivorDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState);                  // [0x5e56d10] Final|Native|Private 
	// Function /Script/TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin
	// void Multicast_QuickDestroyTwin();                                                                                    // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor
	// bool IsAttachedToSurvivor();                                                                                          // [0x5e56760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTwins.TwinAttachmentComponent.IsAttachedToSister
	// bool IsAttachedToSister();                                                                                            // [0x5e56730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor
	// void Cosmetic_OnTwinDetachedFromSurvivor(class ADBDPlayer* Survivor, class ADBDPlayer* brother);                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister
	// void Cosmetic_OnTwinDetachedFromSister(class ADBDPlayer* sister, class ADBDPlayer* brother);                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor
	// void Cosmetic_OnTwinAttachedToSurvivor(class ADBDPlayer* Survivor, class ADBDPlayer* brother);                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister
	// void Cosmetic_OnTwinAttachedToSister(class ADBDPlayer* sister, class ADBDPlayer* brother, bool isFirstAttachment);    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged
	// void Authority_OnRemoveTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5e564e0] Final|Native|Private 
};

/// Class /Script/TheTwins.TwinBaseAddon
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UTwinBaseAddon : public UItemAddon
{ 
public:
	class UClass*                                      _statusEffectClass;                                         // 0x02B8   (0x0008)  
	float                                              _customParam;                                               // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinBaseAddon.Authority_OnTwinSet
	// void Authority_OnTwinSet(class AConjoinedTwin* twin);                                                                 // [0x5e56610] Final|Native|Private 
};

/// Class /Script/TheTwins.TwinBaseKillerInstinctEffect
/// Size: 0x0148 (0x000350 - 0x000498)
class UTwinBaseKillerInstinctEffect : public UStatusEffect
{ 
public:
	FTunableStat                                       _lullabyRange;                                              // 0x0350   (0x0080)  
	FDBDTunableRowHandle                               _lingerDuration;                                            // 0x03D0   (0x0028)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x03F8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5e56380] Final|Native|Private 
};

/// Class /Script/TheTwins.TwinBeingPossessedInteraction
/// Size: 0x0000 (0x000820 - 0x000820)
class UTwinBeingPossessedInteraction : public UBeingPossessedInteraction
{ 
public:
};

/// Class /Script/TheTwins.TwinCharacterMovementComponent
/// Size: 0x0020 (0x000E10 - 0x000E30)
class UTwinCharacterMovementComponent : public UDBDCharacterMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0E10   (0x0020)  MISSED
};

/// Class /Script/TheTwins.TwinDestructionComponent
/// Size: 0x0108 (0x0000B8 - 0x0001C0)
class UTwinDestructionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	class UClass*                                      _huskClass;                                                 // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0108   (0x0008)  MISSED
	FTransform                                         _dyingTransform;                                            // 0x0110   (0x0030)  
	unsigned char                                      UnknownData02_5[0x78];                                      // 0x0140   (0x0078)  MISSED
	float                                              _dyingFromSurvivorTranslation;                              // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinDestructionComponent.OnTwinQuickDestroy
	// void OnTwinQuickDestroy(class AConjoinedTwin* owningTwin);                                                            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinDestructionComponent.OnDyingMontageEnd
	// void OnDyingMontageEnd(FAnimationMontageDescriptor Montage, bool interrupted);                                        // [0x5e56de0] Final|Native|Private 
	// Function /Script/TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove
	// void Cosmetic_OnTwinDestroyedFromSurvivorRemove(class AConjoinedTwin* owningTwin);                                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick
	// void Cosmetic_OnTwinDestroyedFromKick(class AConjoinedTwin* owningTwin);                                              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver
	// void Authority_OnTwinQuickDestroyOver();                                                                              // [0x5e565f0] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheTwins.TwinFirstPersonViewComponent
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UTwinFirstPersonViewComponent : public UFirstPersonViewComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00E0   (0x0020)  MISSED
};

/// Class /Script/TheTwins.TwinHuskAnimInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UTwinHuskAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isDeadFromSurvivorBack;                                    // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class APawn*                                       _owningPawn;                                                // 0x02C8   (0x0008)  
	class UTwinHuskStateComponent*                     _twinHuskStateComponent;                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02D8   (0x0008)  MISSED
};

/// Class /Script/TheTwins.TwinHuskStateComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UTwinHuskStateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack
	// bool IsDeadFromSurvivorBack();                                                                                        // [0x5861e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheTwins.TwinInspectEmptyLocker
/// Size: 0x0000 (0x0006B0 - 0x0006B0)
class UTwinInspectEmptyLocker : public UBaseTwinInspectLocker
{ 
public:
};

/// Class /Script/TheTwins.TwinInspectOccupiedLocker
/// Size: 0x0000 (0x0006B0 - 0x0006B0)
class UTwinInspectOccupiedLocker : public UBaseTwinInspectLocker
{ 
public:
};

/// Class /Script/TheTwins.TwinJumpAttack
/// Size: 0x00F0 (0x000390 - 0x000480)
class UTwinJumpAttack : public UPounceAttack
{ 
public:
	FDBDTunableRowHandle                               _jumpVelocity;                                              // 0x0390   (0x0028)  
	class UCurveFloat*                                 _jumpAngleCurve;                                            // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x03C0   (0x0030)  MISSED
	FDBDTunableRowHandle                               _upDownObstructionAnglePrecision;                           // 0x03F0   (0x0028)  
	FDBDTunableRowHandle                               _leftRightObstructionAnglePrecision;                        // 0x0418   (0x0028)  
	FDBDTunableRowHandle                               _authorizedLandingHeight;                                   // 0x0440   (0x0028)  
	unsigned char                                      UnknownData01_5[0x9];                                       // 0x0468   (0x0009)  MISSED
	bool                                               _shouldTwinHaveJumpObjectType;                              // 0x0471   (0x0001)  
	unsigned char                                      UnknownData02_6[0xE];                                       // 0x0472   (0x000E)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinJumpAttack.Server_StopJump
	// void Server_StopJump();                                                                                               // [0x5e57940] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/TheTwins.TwinJumpAttack.Server_OnJumpStartTwin
	// void Server_OnJumpStartTwin();                                                                                        // [0x5e577f0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType
	// void OnRep_ShouldTwinHaveJumpObjectType();                                                                            // [0x5e57540] Final|Native|Private 
	// Function /Script/TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation
	// void Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation);                                               // [0x5e56c80] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding
	// void Multicast_DestroyTwinOnWrongLanding();                                                                           // [0x591c7f0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor
	// void Multicast_AttachToSurvivor(class ADBDPlayer* survivorToAttachTo);                                                // [0x5e56bf0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted
	// void Cosmetic_OnJumpStarted(class AConjoinedTwin* owningTwin);                                                        // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed
	// void Cosmetic_OnJumpObstructed(class AConjoinedTwin* owningTwin);                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded
	// void Cosmetic_OnJumpLanded(class AConjoinedTwin* owningTwin);                                                         // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged
	// void Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, class AConjoinedTwin* owningTwin);                         // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged
	// void Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, class AConjoinedTwin* twin);              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen
	// void Client_Debug_PrintFinalDecisionOnScreen(bool foundPath);                                                         // [0x5e566a0] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/TheTwins.TwinJumpAttackOpenSubstate
/// Size: 0x00A0 (0x000130 - 0x0001D0)
class UTwinJumpAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0130   (0x00A0)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter
	// void Local_OnTwinOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& Hit); // [0x5e569d0] Final|Native|Private|HasOutParms 
	// Function /Script/TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit
	// void Local_OnTwinCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x5e567f0] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/TheTwins.TwinJumpAttackSuccessSubstate
/// Size: 0x0050 (0x000118 - 0x000168)
class UTwinJumpAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
	FDBDTunableRowHandle                               _jumpSucceedAttachedCooldownTime;                           // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _jumpSucceedNotAttachedCooldownTime;                        // 0x0140   (0x0028)  
};

/// Class /Script/TheTwins.TwinJumpAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UTwinJumpAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheTwins.TwinJumpAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UTwinJumpAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheTwins.TwinJumpAudioMutedEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UTwinJumpAudioMutedEffect : public UStatusEffect
{ 
public:


	/// Functions
	// Function /Script/TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted
	// void Cosmetic_OnTwinUnmuted();                                                                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted
	// void Cosmetic_OnTwinMuted();                                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheTwins.TwinJumpTargetVisibleEffect
/// Size: 0x0018 (0x000350 - 0x000368)
class UTwinJumpTargetVisibleEffect : public UStatusEffect
{ 
public:
	class UClass*                                      _twinJumpTargetObject;                                      // 0x0350   (0x0008)  
	class AActor*                                      _twinJumpTarget;                                            // 0x0358   (0x0008)  
	class USelectiveVisibilityComponent*               _jumpTargetVisibility;                                      // 0x0360   (0x0008)  


	/// Functions
	// Function /Script/TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick
	// void OnJumpTargetTick(FVector Location);                                                                              // [0x5e59420] Final|Native|Private|HasDefaults 
	// Function /Script/TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition
	// void OnHideTargetPosition();                                                                                          // [0x5e59400] Final|Native|Private 
};

/// Class /Script/TheTwins.TwinLockerBlockerComponent
/// Size: 0x0080 (0x0000B8 - 0x000138)
class UTwinLockerBlockerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	TArray<class UClass*>                              _interactionClasses;                                        // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00E0   (0x0010)  MISSED
	TArray<class UClass*>                              _interactionsToDisableOnLockerClasses;                      // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x0100   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped
	// void OnPushedMontageStopped(FAnimationMontageDescriptor montageDescriptor);                                           // [0x5e59810] Final|Native|Private 
	// Function /Script/TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted
	// void OnPushedMontageStarted(FAnimationMontageDescriptor montageDescriptor, float Rate);                               // [0x5e596d0] Final|Native|Private 
	// Function /Script/TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded
	// void OnPushedMontageEnded(FAnimationMontageDescriptor montageDescriptor, bool interrupted);                           // [0x5e59580] Final|Native|Private 
	// Function /Script/TheTwins.TwinLockerBlockerComponent.OnPlayerInLockerChanged
	// void OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker);          // [0x5e594b0] Final|Native|Private 
	// Function /Script/TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker
	// bool IsTwinAttachedToLocker();                                                                                        // [0x5c57110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged
	// void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker);                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5e59350] Final|Native|Private 
};

/// Class /Script/TheTwins.TwinLullabyRangeAdditiveEffect
/// Size: 0x0150 (0x000350 - 0x0004A0)
class UTwinLullabyRangeAdditiveEffect : public UStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _defaultTwinLullabyDormantRange;                            // 0x0350   (0x0028)  
	FTunableStat                                       _twinLullabyDormantRange;                                   // 0x0378   (0x0080)  
	FTunableStat                                       _twinLullabyAttachedRange;                                  // 0x03F8   (0x0080)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0478   (0x0028)  MISSED
};

/// Class /Script/TheTwins.TwinOutlineUpdateStrategy
/// Size: 0x0058 (0x0000E0 - 0x000138)
class UTwinOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _visibleColorForKiller;                                     // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x00F0   (0x0048)  MISSED
};

/// Class /Script/TheTwins.TwinPlacerComponent
/// Size: 0x0010 (0x000280 - 0x000290)
class UTwinPlacerComponent : public UObjectPlacerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0280   (0x0010)  MISSED
};

/// Class /Script/TheTwins.TwinPossessionComponent
/// Size: 0x0020 (0x000148 - 0x000168)
class UTwinPossessionComponent : public UPossessionComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0148   (0x0020)  MISSED
};

/// Class /Script/TheTwins.TwinPossessNegationEffectComponent
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class UTwinPossessNegationEffectComponent : public UPossessNegationEffectComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00D0   (0x0028)  MISSED
};

/// Class /Script/TheTwins.TwinRevealAuraOnAttachedToSurvivorStatusEffect
/// Size: 0x0000 (0x000380 - 0x000380)
class UTwinRevealAuraOnAttachedToSurvivorStatusEffect : public UActivateOnEventTimedStatusEffect
{ 
public:
};

/// Class /Script/TheTwins.TwinsAnimInstance
/// Size: 0x00A0 (0x000610 - 0x0006B0)
class UTwinsAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isDormant;                                                 // 0x0610   (0x0001)  
	bool                                               _hasBrotherAttached;                                        // 0x0611   (0x0001)  
	bool                                               _isPossessing;                                              // 0x0612   (0x0001)  
	bool                                               _isWakingUpFromPossess;                                     // 0x0613   (0x0001)  
	bool                                               _isAutoPossessingAfterRelease;                              // 0x0614   (0x0001)  
	unsigned char                                      UnknownData00_6[0x9B];                                      // 0x0615   (0x009B)  MISSED
};

/// Class /Script/TheTwins.TwinsSurvivorSubAnimInstance
/// Size: 0x0040 (0x000550 - 0x000590)
class UTwinsSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isRemovingTwin;                                            // 0x0550   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0551   (0x0001)  
	bool                                               _isCrouching;                                               // 0x0552   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3D];                                      // 0x0553   (0x003D)  MISSED
};

/// Class /Script/TheTwins.TwinStateHelperComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UTwinStateHelperComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00B8   (0x0058)  MISSED
};

/// Class /Script/TheTwins.TwinStunnableComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UTwinStunnableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B8   (0x0030)  MISSED
};

/// Class /Script/TheTwins.TwinSubjectProvider
/// Size: 0x0008 (0x000048 - 0x000050)
class UTwinSubjectProvider : public UModifierSubjectProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheTwins.TwinSubjectProvider.OnTwinSet
	// void OnTwinSet(class AConjoinedTwin* twin);                                                                           // [0x4ff9420] Final|Native|Private 
	// Function /Script/TheTwins.TwinSubjectProvider.ListenToTwinSet
	// void ListenToTwinSet(class ASlasherPlayer* killer);                                                                   // [0x5e59370] Final|Native|Private 
};

