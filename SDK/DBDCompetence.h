
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
/// dependency: DBDGameplay
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayUtilities
/// dependency: NetworkUtilities
/// dependency: QueryService
/// dependency: StatSystem

/// Enum /Script/DBDCompetence.EImposeEffectTo
/// Size: 0x05
enum class EImposeEffectTo : uint8_t
{
	EImposeEffectTo__EventInstigator                                                 = 0,
	EImposeEffectTo__EventTarget                                                     = 1,
	EImposeEffectTo__AddonOwner                                                      = 2,
	EImposeEffectTo__AllSurvivors                                                    = 3,
	EImposeEffectTo__EImposeEffectTo_MAX                                             = 4
};

/// Enum /Script/DBDCompetence.EMultiLingeringStateTagStrategy
/// Size: 0x03
enum class EMultiLingeringStateTagStrategy : uint8_t
{
	EMultiLingeringStateTagStrategy__And                                             = 0,
	EMultiLingeringStateTagStrategy__Or                                              = 1,
	EMultiLingeringStateTagStrategy__EMultiLingeringStateTagStrategy_MAX             = 2
};

/// Enum /Script/DBDCompetence.EStatusEffectSpawnerReceiverStrategy
/// Size: 0x04
enum class EStatusEffectSpawnerReceiverStrategy : uint32_t
{
	EStatusEffectSpawnerReceiverStrategy__AllCharacter                               = 0,
	EStatusEffectSpawnerReceiverStrategy__PawnType                                   = 1,
	EStatusEffectSpawnerReceiverStrategy__OriginatingPlayer                          = 2,
	EStatusEffectSpawnerReceiverStrategy__EStatusEffectSpawnerReceiverStrategy_MAX   = 3
};

/// Enum /Script/DBDCompetence.ESecondWindState
/// Size: 0x05
enum class ESecondWindState : uint8_t
{
	ESecondWindState__Loading                                                        = 0,
	ESecondWindState__Locked                                                         = 1,
	ESecondWindState__Available                                                      = 2,
	ESecondWindState__InUse                                                          = 3,
	ESecondWindState__ESecondWindState_MAX                                           = 4
};

/// Enum /Script/DBDCompetence.ETheMettleOfManPhase
/// Size: 0x06
enum class ETheMettleOfManPhase : uint8_t
{
	ETheMettleOfManPhase__Uninitialized                                              = 0,
	ETheMettleOfManPhase__GainingTokens                                              = 1,
	ETheMettleOfManPhase__CancelNextAttack                                           = 2,
	ETheMettleOfManPhase__RevealWhenHealthy                                          = 3,
	ETheMettleOfManPhase__RevealedToKiller                                           = 4,
	ETheMettleOfManPhase__ETheMettleOfManPhase_MAX                                   = 5
};

/// Class /Script/DBDCompetence.EnduranceEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class UEnduranceEffect : public UStatusEffect
{ 
public:
	class UClass*                                      _enduranceHighlightEffectClass;                             // 0x0350   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0358   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.ActivatableEnduranceEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UActivatableEnduranceEffect : public UEnduranceEffect
{ 
public:


	/// Functions
	// Function /Script/DBDCompetence.ActivatableEnduranceEffect.Authority_Start
	// void Authority_Start(float Duration);                                                                                 // [0x500a6e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.AdjustableCooldownStatusEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class UAdjustableCooldownStatusEffect : public UStatusEffect
{ 
public:
	FGameplayTag                                       CooldownModifierType;                                       // 0x0350   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x035C   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.ExhaustedEffect
/// Size: 0x0008 (0x000360 - 0x000368)
class UExhaustedEffect : public UAdjustableCooldownStatusEffect
{ 
public:
	float                                              CooldownModifier;                                           // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0364   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.ActivatableExhaustedEffect
/// Size: 0x0000 (0x000368 - 0x000368)
class UActivatableExhaustedEffect : public UExhaustedEffect
{ 
public:


	/// Functions
	// Function /Script/DBDCompetence.ActivatableExhaustedEffect.Authority_Start
	// void Authority_Start(float Duration);                                                                                 // [0x500a6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
	// void Authority_OnHookCamper(FGameplayTag GameEvent, FGameEventData& GameEventData);                                   // [0x500a260] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDCompetence.ExposedEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UExposedEffect : public UAdjustableCooldownStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.ActivatableExposedEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UActivatableExposedEffect : public UExposedEffect
{ 
public:


	/// Functions
	// Function /Script/DBDCompetence.ActivatableExposedEffect.Authority_Start
	// void Authority_Start(float Duration);                                                                                 // [0x500a6e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.ActivatableStatusEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UActivatableStatusEffect : public UStatusEffect
{ 
public:


	/// Functions
	// Function /Script/DBDCompetence.ActivatableStatusEffect.Authority_Start
	// void Authority_Start(float Duration);                                                                                 // [0x500a760] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.ActivateOnEventTimedStatusEffect
/// Size: 0x0030 (0x000350 - 0x000380)
class UActivateOnEventTimedStatusEffect : public UStatusEffect
{ 
public:
	class UClass*                                      _activationStrategyClass;                                   // 0x0350   (0x0008)  
	FGameplayTagContainer                              _eventsToActivateOn;                                        // 0x0358   (0x0020)  
	class UActivateOnEventBaseActivationStrategy*      _activationStrategy;                                        // 0x0378   (0x0008)  
};

/// Class /Script/DBDCompetence.ActivateOnEventBaseActivationStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class UActivateOnEventBaseActivationStrategy : public UObject
{ 
public:
};

/// Class /Script/DBDCompetence.ActivateOnEventAlwaysActivationStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class UActivateOnEventAlwaysActivationStrategy : public UActivateOnEventBaseActivationStrategy
{ 
public:
};

/// Class /Script/DBDCompetence.ActivateOnEventTargetActivationStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class UActivateOnEventTargetActivationStrategy : public UActivateOnEventBaseActivationStrategy
{ 
public:
};

/// Class /Script/DBDCompetence.ActivateOnEventInstigatorActivationStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class UActivateOnEventInstigatorActivationStrategy : public UActivateOnEventBaseActivationStrategy
{ 
public:
};

/// Class /Script/DBDCompetence.Adrenaline
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UAdrenaline : public UPerk
{ 
public:
	float                                              _exhaustionDuration;                                        // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _speedEffect;                                               // 0x03D8   (0x0008)  
	class UClass*                                      _exhaustionEffect;                                          // 0x03E0   (0x0008)  
	float                                              _movementSpeedDuration;                                     // 0x03E8   (0x0004)  
	float                                              _movementSpeedPercentage;                                   // 0x03EC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x03F0   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Adrenaline.Multicast_DispatchAdrenalineEvents
	// void Multicast_DispatchAdrenalineEvents(bool IsHealthy, float HealAmount);                                            // [0x500aad0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/DBDCompetence.Adrenaline.GetExhaustionDuration
	// float GetExhaustionDuration();                                                                                        // [0x500a920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.AlertKillerRevealEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UAlertKillerRevealEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.AllHexTotemsAreActive
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UAllHexTotemsAreActive : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.AnyActorPairQueryRangeIsTrue
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
	// void OnInRangeChanged(bool inRange);                                                                                  // [0x500abb0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.AnyMeansNecessary
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UAnyMeansNecessary : public UPerk
{ 
public:
	float                                              _actionSpeedBonus;                                          // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _anyMeansNecessaryActionSpeedEffect;                        // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
	// void Authority_OnPalletPulledUp(FGameplayTag GameplayTag, FGameEventData& GameEventData);                             // [0x500a420] Final|Native|Private|HasOutParms|Const 
};

/// Class /Script/DBDCompetence.AnySurvivorHasObjectState
/// Size: 0x0070 (0x0000F0 - 0x000160)
class UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x00F0   (0x0050)  MISSED
	FGameplayTag                                       _stateTag;                                                  // 0x0140   (0x000C)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x014C   (0x0014)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
	// void OnSurvivorRemoved(class ACamperPlayer* Survivor);                                                                // [0x500aeb0] Final|Native|Protected 
	// Function /Script/DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
	// void OnSurvivorAdded(class ACamperPlayer* Survivor);                                                                  // [0x500ae20] Final|Native|Protected 
};

/// Class /Script/DBDCompetence.Babysitter
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UBabysitter : public UPerk
{ 
public:
	float                                              _scratchMarkHidingTime;                                     // 0x03C8   (0x000C)  
	float                                              _hasteEffect;                                               // 0x03D4   (0x000C)  
	float                                              _showAuraTime;                                              // 0x03E0   (0x000C)  
	float                                              _cooldownTime;                                              // 0x03EC   (0x000C)  
	class UClass*                                      _perkEffect;                                                // 0x03F8   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.Babysitter.GetShowAuraTimeAtLevel
	// float GetShowAuraTimeAtLevel();                                                                                       // [0x500aa40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Babysitter.GetScratchMarkHidingTimeAtLevel
	// float GetScratchMarkHidingTimeAtLevel();                                                                              // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Babysitter.GetHasteEffectAtLevel
	// float GetHasteEffectAtLevel();                                                                                        // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Babysitter.GetCooldownTimeAtLevel
	// float GetCooldownTimeAtLevel();                                                                                       // [0x500a8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.BabysitterEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UBabysitterEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.BaseIsPerkUsableCondition
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.BaseIsPlayerPerformingInteraction
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{ 
public:
	FGameplayTagContainer                              _interactionSemantics;                                      // 0x00F0   (0x0020)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
	// void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);                                               // [0x500b080] Final|Native|Protected 
	// Function /Script/DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
	// void SetInteractionSemantics(FGameplayTagContainer& interactionSemantics);                                            // [0x500af40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDCompetence.BaseLingeringStatusEffect
/// Size: 0x0068 (0x000350 - 0x0003B8)
class UBaseLingeringStatusEffect : public UStatusEffect
{ 
public:
	float                                              _lingerDuration;                                            // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	FNonTunableStat                                    _lingerDurationModifier;                                    // 0x0358   (0x0060)  


	/// Functions
	// Function /Script/DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
	// void SetLingerDuration(float lingerDuration);                                                                         // [0x500b000] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect
	// void Authority_DeactivateEffect();                                                                                    // [0x500a1b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect
	// void Authority_ActivateEffect();                                                                                      // [0x500a190] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDCompetence.BetterTogether
/// Size: 0x0068 (0x0003C8 - 0x000430)
class UBetterTogether : public UPerk
{ 
public:
	bool                                               ShouldRevealKiller;                                         // 0x03C8   (0x0001)  
	bool                                               ShouldRevealSurvivors;                                      // 0x03C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x03CA   (0x0002)  MISSED
	float                                              RevealDistance;                                             // 0x03CC   (0x0004)  
	TArray<class ADBDPlayer*>                          _affectedCampers;                                           // 0x03D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x03E0   (0x0008)  MISSED
	class AActor*                                      _genToReveal;                                               // 0x03E8   (0x0008)  
	float                                              _durationByLevel;                                           // 0x03F0   (0x000C)  
	unsigned char                                      UnknownData02_5[0x24];                                      // 0x03FC   (0x0024)  MISSED
	class UClass*                                      _timedSurvivorRevealEffect;                                 // 0x0420   (0x0008)  
	class UClass*                                      _timedKillerRevealEffect;                                   // 0x0428   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.BetterTogether.OnStartedGeneratorRepair
	// void OnStartedGeneratorRepair(FGameplayTag GameplayTag, FGameEventData& GameEventData);                               // [0x500ad10] Final|Native|Private|HasOutParms 
	// Function /Script/DBDCompetence.BetterTogether.GetRevealDistance
	// float GetRevealDistance();                                                                                            // [0x500aa10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.BlessedStatusEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class UBlessedStatusEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0350   (0x0008)  MISSED
	class UClass*                                      _vignetteControllerBlueprint;                               // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.BlessedStatusEffect.OnExitBoonRange
	// void OnExitBoonRange();                                                                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDCompetence.BlessedStatusEffect.OnEnterBoonRange
	// void OnEnterBoonRange();                                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDCompetence.BlessedStatusEffect.GetBoundTotem
	// class ATotem* GetBoundTotem();                                                                                        // [0x500a860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange
	// float GetBoonTotemBlessingRange();                                                                                    // [0x500a830] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame
	// void Authority_OnSurvivorRemovedFromGame(class ACamperPlayer* Survivor);                                              // [0x500a650] Final|Native|Private 
};

/// Class /Script/DBDCompetence.BloodEcho
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UBloodEcho : public UPerk
{ 
public:
	class UClass*                                      _hemorrhageStatusEffectClass;                               // 0x03C8   (0x0008)  
	class UClass*                                      _exhaustedStatusEffectClass;                                // 0x03D0   (0x0008)  
	FGameplayTag                                       _statusEffectDurationTag;                                   // 0x03D8   (0x000C)  
	float                                              _cooldownDuration;                                          // 0x03E4   (0x000C)  


	/// Functions
	// Function /Script/DBDCompetence.BloodEcho.GetCooldownDurationAtLevel
	// float GetCooldownDurationAtLevel();                                                                                   // [0x500a890] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.BoonDestroyer
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UBoonDestroyer : public UPerk
{ 
public:
	float                                              _survivorAuraRevealDuration;                                // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _survivorRevealEffect;                                      // 0x03D8   (0x0008)  
};

/// Class /Script/DBDCompetence.BoonPerk
/// Size: 0x0060 (0x000420 - 0x000480)
class UBoonPerk : public UTotemBoundPerk
{ 
public:
	class UClass*                                      _blessedStatusEffectClass;                                  // 0x0420   (0x0008)  
	class UBlessedStatusEffect*                        _blessedStatusEffect;                                       // 0x0428   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0430   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved
	// void Authority_OnSurvivorRemoved(class ACamperPlayer* Survivor);                                                      // [0x500a5c0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.BoonTotemIsActive
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UBoonTotemIsActive : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.Breakout
/// Size: 0x0088 (0x0003C8 - 0x000450)
class UBreakout : public UPerk
{ 
public:
	class ASlasherPlayer*                              _slasher;                                                   // 0x03C8   (0x0008)  
	class ADBDPlayer*                                  _playerOwner;                                               // 0x03D0   (0x0008)  
	class UClass*                                      _hasteStatusEffect;                                         // 0x03D8   (0x0008)  
	class UClass*                                      _wiggleStatusEffect;                                        // 0x03E0   (0x0008)  
	float                                              _hasteEffect;                                               // 0x03E8   (0x000C)  
	float                                              _wiggleEffect;                                              // 0x03F4   (0x0004)  
	float                                              _survivorDistanceMax;                                       // 0x03F8   (0x0004)  
	bool                                               _isPerkActive;                                              // 0x03FC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x53];                                      // 0x03FD   (0x0053)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Breakout.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* Slasher);                                                                     // [0x500ac80] Final|Native|Private 
	// Function /Script/DBDCompetence.Breakout.OnRep_IsPerkActive
	// void OnRep_IsPerkActive();                                                                                            // [0x500ac60] Final|Native|Private 
	// Function /Script/DBDCompetence.Breakout.GetWiggleEffect
	// float GetWiggleEffect();                                                                                              // [0x500aa90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Breakout.GetSurvivorDistanceMax
	// float GetSurvivorDistanceMax();                                                                                       // [0x500aa70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Breakout.GetHasteEffectAtLevel
	// float GetHasteEffectAtLevel();                                                                                        // [0x500a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Breakout.Authority_OnRangeChanged
	// void Authority_OnRangeChanged(bool inRange);                                                                          // [0x500a530] Final|Native|Private 
	// Function /Script/DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
	// void Authority_ImposeWiggleStatusEffect(class ACamperPlayer* Survivor);                                               // [0x500a1d0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.BuckleUp
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UBuckleUp : public UPerk
{ 
public:
	float                                              _perkDuration;                                              // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _revealKillerStatusEffect;                                  // 0x03D8   (0x0008)  
	class UClass*                                      _enduranceStatusEffect;                                     // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.BuckleUp.GetPerkDurationAtLevel
	// float GetPerkDurationAtLevel();                                                                                       // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.CalmSpirit
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UCalmSpirit : public UPerk
{ 
public:
	class UClass*                                      _calmSpiritEffectClass;                                     // 0x03C8   (0x0008)  
	float                                              _actionSpeed;                                               // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03DC   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.Camaraderie
/// Size: 0x0058 (0x0003C8 - 0x000420)
class UCamaraderie : public UPerk
{ 
public:
	float                                              _percentUseItem;                                            // 0x03C8   (0x000C)  
	float                                              _pauseTimer;                                                // 0x03D4   (0x000C)  
	class UClass*                                      _camaraderieNotificationEffectClass;                        // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x03E8   (0x0038)  MISSED
};

/// Class /Script/DBDCompetence.CollectableOwnerSubjectProvider
/// Size: 0x0018 (0x000048 - 0x000060)
class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.CorruptIntervention
/// Size: 0x0070 (0x0003C8 - 0x000438)
class UCorruptIntervention : public UPerk
{ 
public:
	char                                               _blockedGeneratorCount;                                     // 0x03C8   (0x0003)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x03CB   (0x0001)  MISSED
	float                                              _generatorBlockDuration;                                    // 0x03CC   (0x000C)  
	FLinearColor                                       _generatorAuraColorForKiller;                               // 0x03D8   (0x0010)  
	TArray<class AGenerator*>                          _blockedGenerators;                                         // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x03F8   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
	// void OnRep_BlockedGenerators();                                                                                       // [0x500ac40] Final|Native|Private 
	// Function /Script/DBDCompetence.CorruptIntervention.LevelReadyToBlockedGenerators
	// void LevelReadyToBlockedGenerators();                                                                                 // [0x500aab0] Final|Native|Private 
	// Function /Script/DBDCompetence.CorruptIntervention.GetGeneratorBlockDuration
	// float GetGeneratorBlockDuration();                                                                                    // [0x500a950] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.CorruptIntervention.Authority_TryActivatePerk
	// void Authority_TryActivatePerk();                                                                                     // [0x500a7e0] Final|Native|Private 
	// Function /Script/DBDCompetence.CorruptIntervention.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x500a400] Final|Native|Private 
};

/// Class /Script/DBDCompetence.Coulrophobia
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UCoulrophobia : public UPerk
{ 
public:
	class UClass*                                      _coulrophobiaEffect;                                        // 0x03C8   (0x0008)  
	float                                              _healPenalty;                                               // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Coulrophobia.GetHealPenaltyAtLevel
	// float GetHealPenaltyAtLevel();                                                                                        // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.CruelConfinement
/// Size: 0x0048 (0x0003C8 - 0x000410)
class UCruelConfinement : public UPerk
{ 
public:
	float                                              _blockDuration;                                             // 0x03C8   (0x000C)  
	FLinearColor                                       _windowAuraColor;                                           // 0x03D4   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3595) /* TArray<TWeakObjectPtr<UBlockableComponent*>> */ __um(_blockables);                   // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x03F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.CruelConfinement.GetBlockDurationAtLevel
	// float GetBlockDurationAtLevel();                                                                                      // [0x500a800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.DarkDevotion
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UDarkDevotion : public UPerk
{ 
public:
	class UTerrorRadiusEmitterComponent*               _obsessionTerrorRadiusEmitter;                              // 0x03C8   (0x0008)  
	float                                              _obsessionTerrorRadius;                                     // 0x03D0   (0x0004)  
	float                                              _simulatedFixedDistance;                                    // 0x03D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03D8   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.DarkSense
/// Size: 0x0048 (0x0003C8 - 0x000410)
class UDarkSense : public UPerk
{ 
public:
	float                                              _killerRevealDuration;                                      // 0x03C8   (0x000C)  
	float                                              _darkSenseRevealRange;                                      // 0x03D4   (0x0004)  
	class UClass*                                      _timedRevealEffect;                                         // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x03E0   (0x0030)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.DarkSense.GetKillerRevealDurationAtLevel
	// float GetKillerRevealDurationAtLevel();                                                                               // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.DarkSense.GetDarkSenseRevealRange
	// float GetDarkSenseRevealRange();                                                                                      // [0x500a8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.DarkSense.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x500a370] Final|Native|Private 
};

/// Class /Script/DBDCompetence.DBDConditionFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UDBDConditionFactory : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
	// class UIsPlayerPerformingInteraction* IsPlayerPerformingInteraction(TScriptInterface<Class> ConditionReceiver, FGameplayTagContainer& interactionSemantics); // [0x500f8f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDCompetence.DBDConditionFactory.HasTimerElapsedWhileConditionWasTrue
	// class UTimerElapsedCondition* HasTimerElapsedWhileConditionWasTrue(TScriptInterface<Class> ConditionReceiver, class UTimerObject* Timer); // [0x500f800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
	// class UDoesPerkHaveToken* DoesPerkHaveToken(TScriptInterface<Class> ConditionReceiver, class UPerk* Perk);            // [0x500f4b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.DeadMansSwitchEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UDeadMansSwitchEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.DeceptionEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UDeceptionEffect : public UStatusEffect
{ 
public:
	bool                                               _hideBloodTrailsWhenCamperFakeEnterLocker;                  // 0x0350   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0351   (0x0007)  MISSED
};

/// Class /Script/DBDCompetence.DecisiveStrike
/// Size: 0x00A0 (0x0003C8 - 0x000468)
class UDecisiveStrike : public UPerk
{ 
public:
	float                                              _timeAfterUnhook;                                           // 0x03C8   (0x000C)  
	float                                              _skillCheckDelay;                                           // 0x03D4   (0x0004)  
	float                                              _skillCheckBuffer;                                          // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x7C];                                      // 0x03DC   (0x007C)  MISSED
	class UClass*                                      _increaseObsessionChanceEffect;                             // 0x0458   (0x0008)  
	bool                                               _hasBeenAttempted;                                          // 0x0460   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0461   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
	// void OnUnhookedTimerEnded();                                                                                          // [0x5010490] Final|Native|Private 
	// Function /Script/DBDCompetence.DecisiveStrike.OnSkillCheck
	// void OnSkillCheck(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);     // [0x5010200] Final|Native|Private 
	// Function /Script/DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
	// void OnRep_HasBeenAttempted();                                                                                        // [0x5010140] Final|Native|Private 
	// Function /Script/DBDCompetence.DecisiveStrike.OnPickUpEnded
	// void OnPickUpEnded(class ADBDPlayer* picker);                                                                         // [0x5010090] Final|Native|Private 
	// Function /Script/DBDCompetence.DecisiveStrike.OnOwnerPickedUp
	// void OnOwnerPickedUp(class ADBDPlayer* picker);                                                                       // [0x500fc80] Final|Native|Private 
	// Function /Script/DBDCompetence.DecisiveStrike.GetDurationAfterUnhook
	// float GetDurationAfterUnhook();                                                                                       // [0x500a800] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.DejaVu
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UDejaVu : public UPerk
{ 
public:
	int32_t                                            _numGeneratorsToReveal;                                     // 0x03C8   (0x0004)  
	float                                              _actionSpeeds;                                              // 0x03CC   (0x000C)  
	FLinearColor                                       _generatorAuraColor;                                        // 0x03D8   (0x0010)  
	TArray<class AGenerator*>                          _revealedGenerators;                                        // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x03F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.DejaVu.OnRep_RevealedGenerators
	// void OnRep_RevealedGenerators();                                                                                      // [0x50101c0] Final|Native|Private 
	// Function /Script/DBDCompetence.DejaVu.LevelReadyToRevealOutlineGenerators
	// void LevelReadyToRevealOutlineGenerators();                                                                           // [0x500fa10] Final|Native|Private 
	// Function /Script/DBDCompetence.DejaVu.GetActionSpeedsAtLevel
	// float GetActionSpeedsAtLevel();                                                                                       // [0x500a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.DejaVu.Authority_SetNewGeneratorsToReveal
	// void Authority_SetNewGeneratorsToReveal();                                                                            // [0x500f460] Final|Native|Private 
	// Function /Script/DBDCompetence.DejaVu.Authority_OnGeneratorRepaired
	// void Authority_OnGeneratorRepaired(int32_t activatedGeneratorCount);                                                  // [0x500f020] Final|Native|Private 
};

/// Class /Script/DBDCompetence.DelayedHealEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UDelayedHealEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
	// void Authority_OnOwningCamperPickedUp(class ADBDPlayer* picker);                                                      // [0x500f290] Final|Native|Private 
	// Function /Script/DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
	// void Authority_OnOwningCamperHealthChanged(ECamperDamageState before, ECamperDamageState after);                      // [0x500f1c0] Final|Native|Private 
	// Function /Script/DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
	// void Authority_OnActivationTimerComplete();                                                                           // [0x500f000] Final|Native|Private 
};

/// Class /Script/DBDCompetence.DidGameEventOccurred
/// Size: 0x0038 (0x0000F0 - 0x000128)
class UDidGameEventOccurred : public UEventDrivenModifierCondition
{ 
public:
	FGameplayTag                                       EventTag;                                                   // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x00FC   (0x002C)  MISSED
};

/// Class /Script/DBDCompetence.Distortion
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UDistortion : public UPerk
{ 
public:
	float                                              _activationDurations;                                       // 0x03C8   (0x000C)  
	bool                                               _auraBlockIsActive;                                         // 0x03D4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03D5   (0x0003)  MISSED
	float                                              _regainTokenDurationTimer;                                  // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x03DC   (0x001C)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Distortion.OnRep_AuraBlockIsActive
	// void OnRep_AuraBlockIsActive();                                                                                       // [0x5010120] Final|Native|Private 
	// Function /Script/DBDCompetence.Distortion.OnAuraBlockedCosmetic
	// void OnAuraBlockedCosmetic();                                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDCompetence.Distortion.GetRegainTokenDurationTimer
	// float GetRegainTokenDurationTimer();                                                                                  // [0x500f7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Distortion.GetActivationDurationAtLevel
	// float GetActivationDurationAtLevel();                                                                                 // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Distortion.AuraBlockCanBeActive
	// bool AuraBlockCanBeActive();                                                                                          // [0x500efb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.DoesPerkHaveToken
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UDoesPerkHaveToken : public UEventDrivenModifierCondition
{ 
public:
	SDK_UNDEFINED(8,3596) /* TWeakObjectPtr<UPerk*> */ __um(_perk);                                                // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.DoesPerkHaveToken.SetPerk
	// void SetPerk(class UPerk* Perk);                                                                                      // [0x50104d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDCompetence.DoesPerkHaveToken.OnRep_Perk
	// void OnRep_Perk();                                                                                                    // [0x5010180] Final|Native|Private 
};

/// Class /Script/DBDCompetence.DownedByBasicAttack
/// Size: 0x0058 (0x0000F0 - 0x000148)
class UDownedByBasicAttack : public UEventDrivenModifierCondition
{ 
public:
	bool                                               _replicatedIsTrue;                                          // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x57];                                      // 0x00F1   (0x0057)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
	// void OnRep_ReplicatedIsTrue();                                                                                        // [0x50101a0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.DyingLight
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UDyingLight : public UPerk
{ 
public:
	TArray<float>                                      _actionSpeedPenaltyPerToken;                                // 0x03C8   (0x0010)  
	float                                              _obsessionActionSpeedBonus;                                 // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _obsessionStatusEffect;                                     // 0x03E0   (0x0008)  
	class UClass*                                      _nonObsessionStatusEffect;                                  // 0x03E8   (0x0008)  
	TArray<class UStatusEffect*>                       _survivorDebuffs;                                           // 0x03F0   (0x0010)  


	/// Functions
	// Function /Script/DBDCompetence.DyingLight.OnObsessionChanged
	// void OnObsessionChanged(class ACamperPlayer* newObsession, class ACamperPlayer* previousObsession);                   // [0x500fbb0] Final|Native|Private 
	// Function /Script/DBDCompetence.DyingLight.GetObsessionActionSpeedBonus
	// float GetObsessionActionSpeedBonus();                                                                                 // [0x500f6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.DyingLight.GetActionSpeedPenaltyPerTokenAtLevel
	// float GetActionSpeedPenaltyPerTokenAtLevel();                                                                         // [0x500f5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.EnduranceHighlightEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UEnduranceHighlightEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.Fixated
/// Size: 0x0008 (0x0003C8 - 0x0003D0)
class UFixated : public UPerk
{ 
public:
	class UClass*                                      _fixatedStatusEffect;                                       // 0x03C8   (0x0008)  
};

/// Class /Script/DBDCompetence.FlipFlop
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UFlipFlop : public UPerk
{ 
public:
	float                                              _recoveryProgressionConversionRatio;                        // 0x03C8   (0x000C)  
	float                                              _maxWiggleProgression;                                      // 0x03D4   (0x000C)  


	/// Functions
	// Function /Script/DBDCompetence.FlipFlop.GetRecoveryProgressionAtLevel
	// float GetRecoveryProgressionAtLevel();                                                                                // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.FlipFlop.GetMaxWiggleProgressionAtLevel
	// float GetMaxWiggleProgressionAtLevel();                                                                               // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.FlipFlop.Authority_OnPickedUp
	// void Authority_OnPickedUp(class ADBDPlayer* picker);                                                                  // [0x500f320] Final|Native|Private 
};

/// Class /Script/DBDCompetence.FurtiveChase
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UFurtiveChase : public UPerk
{ 
public:
	class UClass*                                      _undetectableStatusEffectClass;                             // 0x03C8   (0x0008)  
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x03D0   (0x0008)  
	float                                              _undetectableAndHasteStatusEffectDuration;                  // 0x03D8   (0x000C)  
	float                                              _hasteStatusEffectPercent;                                  // 0x03E4   (0x0004)  
	class UStatusEffect*                               _hasteEffect;                                               // 0x03E8   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.FurtiveChase.GetUndetectableAndHasteStatusEffectDurationAtLevel
	// float GetUndetectableAndHasteStatusEffectDurationAtLevel();                                                           // [0x500f7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.FurtiveChase.GetHasteStatusEffectPercent
	// float GetHasteStatusEffectPercent();                                                                                  // [0x500f630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.GateBlockerEffect
/// Size: 0x0038 (0x000350 - 0x000388)
class UGateBlockerEffect : public UStatusEffect
{ 
public:
	float                                              _blockGateLingeringTime;                                    // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x0354   (0x0034)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag
	// void RemoveCantEscapeFlag();                                                                                          // [0x50104b0] Final|Native|Protected 
};

/// Struct /Script/DBDCompetence.StatusEffectSpawnData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStatusEffectSpawnData
{ 
	SDK_UNDEFINED(16,3597) /* FString */               __um(DEPRECATED_EffectId);                                  // 0x0000   (0x0010)  
	class UClass*                                      EffectClass;                                                // 0x0010   (0x0008)  
	float                                              customParam;                                                // 0x0018   (0x0004)  
	EStatusEffectSpawnerReceiverStrategy               ReceiverStrategy;                                           // 0x001C   (0x0004)  
	EPawnType                                          PawnType;                                                   // 0x0020   (0x0001)  
	bool                                               SkipOriginatingPlayer;                                      // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/DBDCompetence.PerkLevelEffectArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPerkLevelEffectArray
{ 
	TArray<FStatusEffectSpawnData>                     EffectsToSpawn;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/DBDCompetence.PlayerStatusEffectSpawnerHelperInitParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPlayerStatusEffectSpawnerHelperInitParams
{ 
	class UObject*                                     WorldContextObject;                                         // 0x0000   (0x0008)  
	class ADBDPlayer*                                  originatingPlayer;                                          // 0x0008   (0x0008)  
	class UGameplayModifierContainer*                  originatingEffect;                                          // 0x0010   (0x0008)  
	TArray<FStatusEffectSpawnData>                     EffectsToSpawn;                                             // 0x0018   (0x0010)  
};

/// Struct /Script/DBDCompetence.PlayerStatusEffectSpawnerHelper
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPlayerStatusEffectSpawnerHelper
{ 
	FPlayerStatusEffectSpawnerHelperInitParams         _initParams;                                                // 0x0000   (0x0028)  
	SDK_UNDEFINED(80,3598) /* TSet<UStatusEffect*> */  __um(_spawnedEffects);                                      // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Class /Script/DBDCompetence.SpawningEffectPerk
/// Size: 0x00B8 (0x0003C8 - 0x000480)
class USpawningEffectPerk : public UPerk
{ 
public:
	FPerkLevelEffectArray                              _perkLevelEffects;                                          // 0x03C8   (0x0030)  
	FPlayerStatusEffectSpawnerHelper                   _effectSpawnerHelper;                                       // 0x03F8   (0x0088)  
};

/// Class /Script/DBDCompetence.HangmansTrick
/// Size: 0x0000 (0x000480 - 0x000480)
class UHangmansTrick : public USpawningEffectPerk
{ 
public:
};

/// Class /Script/DBDCompetence.HasCleansedTotemInnerStrength
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UHasCleansedTotemInnerStrength : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.HasFlag
/// Size: 0x0048 (0x0000F0 - 0x000138)
class UHasFlag : public UEventDrivenModifierCondition
{ 
public:
	FGameplayTag                                       _flag;                                                      // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x00FC   (0x003C)  MISSED
};

/// Class /Script/DBDCompetence.HasItemOfTypeEquipped
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UHasItemOfTypeEquipped : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00F0   (0x0010)  MISSED
	ELoadoutItemType                                   _itemType;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Class /Script/DBDCompetence.HasItemOfTypeEquippedNoCharge
/// Size: 0x0018 (0x000108 - 0x000120)
class UHasItemOfTypeEquippedNoCharge : public UHasItemOfTypeEquipped
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0108   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HasItemOfTypeEquippedNoCharge.OnItemChargeStateChanged
	// void OnItemChargeStateChanged(bool IsEmpty);                                                                          // [0x500fb20] Final|Native|Protected 
};

/// Class /Script/DBDCompetence.HasItemOfTypeInInventory
/// Size: 0x0000 (0x000108 - 0x000108)
class UHasItemOfTypeInInventory : public UHasItemOfTypeEquipped
{ 
public:
};

/// Class /Script/DBDCompetence.HasItemOfTypeInInventoryNoCharge
/// Size: 0x0018 (0x000108 - 0x000120)
class UHasItemOfTypeInInventoryNoCharge : public UHasItemOfTypeInInventory
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0108   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HasItemOfTypeInInventoryNoCharge.OnItemChargeStateChanged
	// void OnItemChargeStateChanged(bool IsEmpty);                                                                          // [0x500fb20] Final|Native|Protected 
};

/// Class /Script/DBDCompetence.HasLineOfSightQueryComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UHasLineOfSightQueryComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/DBDCompetence.HasPlayerReachedWiggleFillPercentCondition
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x00F0   (0x0004)  MISSED
	bool                                               _isWigglePercentReached;                                    // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F5   (0x0003)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
	// void OnRep_IsWigglePercentReached();                                                                                  // [0x5010160] Final|Native|Private 
	// Function /Script/DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
	// void Authority_OnOwnerWiggleChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x500f0b0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.HasRemainingGenerators
/// Size: 0x0038 (0x0000F0 - 0x000128)
class UHasRemainingGenerators : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00F0   (0x0038)  MISSED
};

/// Class /Script/DBDCompetence.HeadOn
/// Size: 0x0080 (0x0003C8 - 0x000448)
class UHeadOn : public UPerk
{ 
public:
	bool                                               IsPerformingHeadOn;                                         // 0x03C8   (0x0001)  
	bool                                               ExhaustOnlyOnSuccessfulStun;                                // 0x03C9   (0x0001)  
	bool                                               StunKillersEnteringStunZone;                                // 0x03CA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x03CB   (0x0001)  MISSED
	float                                              _hideDuration;                                              // 0x03CC   (0x000C)  
	class UClass*                                      _exhaustedStatusEffect;                                     // 0x03D8   (0x0008)  
	class ALocker*                                     _locker;                                                    // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x03E8   (0x0030)  MISSED
	TArray<class AActor*>                              _stunnableActorsInZone;                                     // 0x0418   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0428   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HeadOn.OnPawnOverlapExit
	// void OnPawnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x500ff30] Final|Native|Private 
	// Function /Script/DBDCompetence.HeadOn.OnPawnOverlapEnter
	// void OnPawnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x500fd10] Final|Native|Private|HasOutParms 
	// Function /Script/DBDCompetence.HeadOn.OnHeadOnAnimationComplete
	// void OnHeadOnAnimationComplete();                                                                                     // [0x500fb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDCompetence.HeadOn.Multicast_TriggerStunOnActor
	// void Multicast_TriggerStunOnActor(class UObject* stunnableInterfaceUObject, class ADBDPlayer* stunner);               // [0x500fa30] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/DBDCompetence.HeadOn.GetHideDuration
	// float GetHideDuration();                                                                                              // [0x500a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.HeadOn.CanApplyHeadOnInteraction
	// bool CanApplyHeadOnInteraction();                                                                                     // [0x500f480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.HeadOn.Authority_ActivatePerk
	// void Authority_ActivatePerk();                                                                                        // [0x500efe0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.HemorrhageStatusEffect
/// Size: 0x0070 (0x000360 - 0x0003D0)
class UHemorrhageStatusEffect : public UAdjustableCooldownStatusEffect
{ 
public:
	float                                              _cooldownFXTime;                                            // 0x0360   (0x0004)  
	bool                                               _removeEffectWhenFullyHealed;                               // 0x0364   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6B];                                      // 0x0365   (0x006B)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HemorrhageStatusEffect.OnStoppedHealing
	// void OnStoppedHealing(class ADBDPlayer* Instigator, class ADBDPlayer* Target);                                        // [0x50103c0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/DBDCompetence.HemorrhageStatusEffect.Authority_OnSurvivorHealed
	// void Authority_OnSurvivorHealed(FCamperHealResult& healResult);                                                       // [0x500f3b0] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDCompetence.HexPerk
/// Size: 0x0028 (0x000420 - 0x000448)
class UHexPerk : public UTotemBoundPerk
{ 
public:
	TArray<class ADBDPlayer*>                          _playersWhoKnowCurse;                                       // 0x0420   (0x0010)  
	TArray<class ADBDPlayer*>                          _oldPlayersWhoKnowCurse;                                    // 0x0430   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0440   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer
	// void UpdateCursedStatusViewOnLocalPlayer();                                                                           // [0x5016790] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
	// void OnRep_PlayersWhoKnowCurse();                                                                                     // [0x5016300] Final|Native|Private 
	// Function /Script/DBDCompetence.HexPerk.IsCurseRevealedToPlayer
	// bool IsCurseRevealedToPlayer(class ADBDPlayer* Player);                                                               // [0x5015e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
	// void Authority_SetCurseRevealedToPlayer(class ADBDPlayer* Player, bool revealed);                                     // [0x5015940] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
	// void Authority_RevealCurseToAllSurvivors(bool revealed);                                                              // [0x50158b0] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDCompetence.HexDevourHope
/// Size: 0x0080 (0x000448 - 0x0004C8)
class UHexDevourHope : public UHexPerk
{ 
public:
	class UClass*                                      _devourHopeSpeedStatusEffect;                               // 0x0448   (0x0008)  
	class UClass*                                      _exposedStatusEffect;                                       // 0x0450   (0x0008)  
	float                                              _rangeFromUnhookedSurvivorNeeded;                           // 0x0458   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x045C   (0x0004)  MISSED
	int32_t                                            _tokenThresholdToImposeSpeedBoost;                          // 0x0460   (0x0004)  
	int32_t                                            _tokenThresholdToImposeExposeEffect;                        // 0x0464   (0x0004)  
	int32_t                                            _tokenThresholdToImposeAbilityToKill;                       // 0x0468   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x046C   (0x0004)  MISSED
	FGameplayTagContainer                              _attackGameEvents;                                          // 0x0470   (0x0020)  
	float                                              _moveSpeedIncrement;                                        // 0x0490   (0x000C)  
	unsigned char                                      UnknownData02_5[0x14];                                      // 0x049C   (0x0014)  MISSED
	FName                                              _vulnerabilityStatusViewID;                                 // 0x04B0   (0x000C)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x04BC   (0x000C)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HexDevourHope.GetRangeFromUnhookedSurvivorNeeded
	// float GetRangeFromUnhookedSurvivorNeeded(int32_t PerkLevel);                                                          // [0x500f710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.HexDevourHope.GetMoveSpeedIncrement
	// float GetMoveSpeedIncrement(int32_t PerkLevel);                                                                       // [0x500f650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.HexHauntedGround
/// Size: 0x0028 (0x000448 - 0x000470)
class UHexHauntedGround : public UHexPerk
{ 
public:
	float                                              _exposedStatusEffectDuration;                               // 0x0448   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0454   (0x0004)  MISSED
	class UClass*                                      _exposedStatusEffectClass;                                  // 0x0458   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0460   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HexHauntedGround.GetExposedDurationAtLevel
	// float GetExposedDurationAtLevel();                                                                                    // [0x500f5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.HexNoOneEscapesDeath
/// Size: 0x0070 (0x000448 - 0x0004B8)
class UHexNoOneEscapesDeath : public UHexPerk
{ 
public:
	class UClass*                                      _hasteImposedEffectClass;                                   // 0x0448   (0x0008)  
	class UClass*                                      _exposedEffectClass;                                        // 0x0450   (0x0008)  
	bool                                               _revealCurseWhenTotemShownToSurvivor;                       // 0x0458   (0x0001)  
	bool                                               _revealCurseWhenSurvivorGetHits;                            // 0x0459   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x045A   (0x0002)  MISSED
	float                                              _auraRevealStartDistance;                                   // 0x045C   (0x0004)  
	float                                              _auraRevealEndDistance;                                     // 0x0460   (0x0004)  
	float                                              _auraRevealDuration;                                        // 0x0464   (0x0004)  
	float                                              _hastePerLevel;                                             // 0x0468   (0x000C)  
	bool                                               _shouldActivateTotemOutline;                                // 0x0474   (0x0001)  
	unsigned char                                      UnknownData01_6[0x43];                                      // 0x0475   (0x0043)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HexNoOneEscapesDeath.OnRep_SetShouldActivateTotemOutline
	// void OnRep_SetShouldActivateTotemOutline();                                                                           // [0x50101e0] Final|Native|Private 
	// Function /Script/DBDCompetence.HexNoOneEscapesDeath.GetHasteAtLevel
	// float GetHasteAtLevel();                                                                                              // [0x500f600] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DBDCompetence.HexRuin
/// Size: 0x00D8 (0x000448 - 0x000520)
class UHexRuin : public UHexPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0448   (0x0018)  MISSED
	SDK_UNDEFINED(80,3599) /* TMap<AGenerator*, FFastTimer> */ __um(_curseActivationTimers);                       // 0x0460   (0x0050)  
	float                                              _regressionModifier;                                        // 0x04B0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x04BC   (0x0004)  MISSED
	class UClass*                                      _ruinStatusEffectClass;                                     // 0x04C0   (0x0008)  
	SDK_UNDEFINED(80,3600) /* TMap<AGenerator*, uint64_t> */ __um(_gameplayModifierHandles);                       // 0x04C8   (0x0050)  
	class UStatusEffect*                               _ruinStatusEffect;                                          // 0x0518   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.HexRuin.GetRegressionModifierByLevel
	// float GetRegressionModifierByLevel(int32_t PerkLevel);                                                                // [0x5015a60] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.HexRuin.Authority_SetupCurseOnAllGenerators
	// void Authority_SetupCurseOnAllGenerators();                                                                           // [0x5015a10] Final|Native|Private 
};

/// Class /Script/DBDCompetence.HexThirdSeal
/// Size: 0x0030 (0x000448 - 0x000478)
class UHexThirdSeal : public UHexPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0448   (0x0018)  MISSED
	class UClass*                                      _thirdSealBlindnessEffect;                                  // 0x0460   (0x0008)  
	int32_t                                            _maximumBlindableSurvivors;                                 // 0x0468   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0474   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.HexThrillOfTheHunt
/// Size: 0x0020 (0x000448 - 0x000468)
class UHexThrillOfTheHunt : public UHexPerk
{ 
public:
	class UClass*                                      _thrillOfTheHuntStatusEffect;                               // 0x0448   (0x0008)  
	float                                              _hunterPointsBonusPercent;                                  // 0x0450   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0454   (0x0004)  MISSED
	TArray<class UStatusEffect*>                       _survivorThrillOfTheHuntEffects;                            // 0x0458   (0x0010)  
};

/// Class /Script/DBDCompetence.HexThrillOfTheHuntStatusEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class UHexThrillOfTheHuntStatusEffect : public UStatusEffect
{ 
public:
	float                                              _speedPenaltyPercents;                                      // 0x0350   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x035C   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HexThrillOfTheHuntStatusEffect.GetSpeedPenaltyPercents
	// float GetSpeedPenaltyPercents(int32_t tierLevel);                                                                     // [0x5015b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.HideSurvivorVFXForKillerEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UHideSurvivorVFXForKillerEffect : public UStatusEffect
{ 
public:


	/// Functions
	// Function /Script/DBDCompetence.HideSurvivorVFXForKillerEffect.HideVFX
	// void HideVFX(bool Hide);                                                                                              // [0x5015ba0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DBDCompetence.HighestLevelAndClosestEffectCondition
/// Size: 0x0048 (0x0000D0 - 0x000118)
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00D0   (0x0008)  MISSED
	TArray<class UStatusEffect*>                       _effectsLevel1;                                             // 0x00D8   (0x0010)  
	TArray<class UStatusEffect*>                       _effectsLevel2;                                             // 0x00E8   (0x0010)  
	TArray<class UStatusEffect*>                       _effectsLevel3;                                             // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0108   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
	// void SetCurrentEffectLevel(int32_t Level);                                                                            // [0x5016700] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
	// void InitEffectArrays(FName effectIDLevel1, FName effectIDLevel2, FName effectIDLevel3);                              // [0x5015d00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.HookedSurvivorRangeBaseCondition
/// Size: 0x00F0 (0x0000F8 - 0x0001E8)
class UHookedSurvivorRangeBaseCondition : public URangeBasedCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x00F8   (0x00F0)  MISSED
};

/// Class /Script/DBDCompetence.HopePerk
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UHopePerk : public UPerk
{ 
public:
	class UClass*                                      _hopePerkEffect;                                            // 0x03C8   (0x0008)  
	float                                              _hasteEffect;                                               // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.HopePerk.GetHasteEffectAtLevel
	// float GetHasteEffectAtLevel();                                                                                        // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.ImAllEars
/// Size: 0x0058 (0x0003C8 - 0x000420)
class UImAllEars : public UPerk
{ 
public:
	int32_t                                            _cooldownByLevel;                                           // 0x03C8   (0x000C)  
	float                                              _durationByLevel;                                           // 0x03D4   (0x000C)  
	bool                                               _useTerrorRadius;                                           // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03E1   (0x0003)  MISSED
	float                                              _triggerOutsideRadius;                                      // 0x03E4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x03E8   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
	// void Server_OnCamperLoudNoise(FGameplayTag GameplayTag, FGameEventData GameEventData);                                // [0x50165b0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/DBDCompetence.ImAllEars.GetDurationAtLevel
	// float GetDurationAtLevel();                                                                                           // [0x500a980] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDCompetence.ImAllEars.GetCooldownAtLevel
	// int32_t GetCooldownAtLevel();                                                                                         // [0x5015a30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.OnEventBaseAddon
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UOnEventBaseAddon : public UItemAddon
{ 
public:
	FGameplayTag                                       _eventToListenTo;                                           // 0x02B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.OnEventBaseAddon.OnEventFired
	// void OnEventFired(FGameEventData& GameEventData);                                                                     // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/DBDCompetence.StatusEffectInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStatusEffectInfo
{ 
	float                                              StatusEffectLifetime;                                       // 0x0000   (0x0004)  
	float                                              CustomParamValue;                                           // 0x0004   (0x0004)  
	EImposeEffectTo                                    ImposeEffectTo;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UClass*                                      StatusEffect;                                               // 0x0010   (0x0008)  
};

/// Class /Script/DBDCompetence.ImposeStatusEffectOnEventAddon
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
{ 
public:
	bool                                               _requireEventInstigatorToMatchAddonOwnerToImposeStatusEffects; // 0x02C8   (0x0001)  
	bool                                               _requireEventTargetToMatchAddonOwnerToImposeStatusEffects;  // 0x02C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02CA   (0x0006)  MISSED
	TArray<FStatusEffectInfo>                          _statusEffects;                                             // 0x02D0   (0x0010)  
};

/// Class /Script/DBDCompetence.InfectiousFright
/// Size: 0x0048 (0x0003C8 - 0x000410)
class UInfectiousFright : public UPerk
{ 
public:
	bool                                               _revealPlayerInTerrorRadius;                                // 0x03C8   (0x0001)  
	char                                               _perkActivationCount;                                       // 0x03C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03CA   (0x0006)  MISSED
	TArray<class ACamperPlayer*>                       _revealedSurvivors;                                         // 0x03D0   (0x0010)  
	class ACamperPlayer*                               _targetSurvivor;                                            // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x03E8   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.InfectiousFright.RevealSurvivorLocation
	// void RevealSurvivorLocation(class ACamperPlayer* Target);                                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
	// void OnRep_PerkActivationCount();                                                                                     // [0x50162e0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.InnerStrength
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UInnerStrength : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	float                                              _hideDuration;                                              // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x03DC   (0x0024)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.InnerStrength.GetHideDuration
	// float GetHideDuration();                                                                                              // [0x500a9e0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.InnerStrength.Authority_OnPlayerImmobilizeStateChanged
	// void Authority_OnPlayerImmobilizeStateChanged(EImmobilizedState oldImmobilizeState, EImmobilizedState newImmobilizeState); // [0x50157e0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.Insidious
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UInsidious : public UPerk
{ 
public:
	float                                              _stillnessRequired;                                         // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _insidiousEffect;                                           // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.Insidious.GetStillnessRequiredAtLevel
	// float GetStillnessRequiredAtLevel();                                                                                  // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.InsidiousEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UInsidiousEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.IsActivationTimerActive
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UIsActivationTimerActive : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.IsActivationTimerActiveAndNotPaused
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00F0   (0x0020)  MISSED
};

/// Class /Script/DBDCompetence.IsBestProveThyselfEffectInRange
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UIsBestProveThyselfEffectInRange : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00F0   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged
	// void OnInRangeChanged(bool inRange, class UProveThyselfEffect* ProveThyselfEffect);                                   // [0x5016120] Final|Native|Private 
};

/// Class /Script/DBDCompetence.IsBoonBlessed
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UIsBoonBlessed : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.IsCooldownTimerActive
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UIsCooldownTimerActive : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.IsHexCursed
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UIsHexCursed : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.IsHighestLevelAndClosestOriginatingEffect
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
{ 
public:
	TArray<class UStatusEffect*>                       _applicableEffects;                                         // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
	// void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);                                           // [0x5016340] Final|Native|Private 
};

/// Class /Script/DBDCompetence.IsHighestTierOriginatingPerk
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition
{ 
public:
	TArray<class UStatusEffect*>                       _applicableEffects;                                         // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0100   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged
	// void OnStatusEffectApplicableChanged(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable); // [0x50164e0] Final|Native|Private 
	// Function /Script/DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved
	// void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);                                           // [0x5016410] Final|Native|Private 
};

/// Class /Script/DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
/// Size: 0x00B0 (0x0000F8 - 0x0001A8)
class UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x00F8   (0x00B0)  MISSED
};

/// Class /Script/DBDCompetence.IsInRangeOfHookedSurvivor
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UIsInRangeOfHookedSurvivor : public UHookedSurvivorRangeBaseCondition
{ 
public:
};

/// Class /Script/DBDCompetence.IsInRangeOfOriginatingPlayer
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UIsInRangeOfOriginatingPlayer : public URangeBasedCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00F8   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsInRangeOfOriginatingPlayer.OnInRangeChanged
	// void OnInRangeChanged(bool inRange);                                                                                  // [0x500fb20] Final|Native|Private 
};

/// Class /Script/DBDCompetence.IsLifetimeActive
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UIsLifetimeActive : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00F0   (0x0010)  MISSED
};

/// Class /Script/DBDCompetence.IsOnHitSprintEffectActive
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UIsOnHitSprintEffectActive : public UEventDrivenModifierCondition
{ 
public:
};

/// Class /Script/DBDCompetence.IsOriginatingPerkBoundToTotems
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UIsOriginatingPerkBoundToTotems : public UEventDrivenModifierCondition
{ 
public:
	EComparisonOperation                               _comparisonOperator;                                        // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            _totemCount;                                                // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount
	// void OnRep_TotemCount();                                                                                              // [0x5016320] Final|Native|Private 
	// Function /Script/DBDCompetence.IsOriginatingPerkBoundToTotems.Init
	// void Init(EComparisonOperation comparisonOperator, int32_t totemCount);                                               // [0x5015c30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDCompetence.IsOriginatingPerkUsableCondition
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
{ 
public:
};

/// Class /Script/DBDCompetence.IsOutsideOfAnyHookedSurvivorRange
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UIsOutsideOfAnyHookedSurvivorRange : public UHookedSurvivorRangeBaseCondition
{ 
public:
};

/// Class /Script/DBDCompetence.IsOwningPlayerInRangeFromHook
/// Size: 0x0050 (0x000108 - 0x000158)
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
{ 
public:
	FGameplayTagQuery                                  _tagQueryFromHook;                                          // 0x0108   (0x0048)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0150   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x50161f0] Final|Native|Protected 
};

/// Class /Script/DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry
/// Size: 0x0018 (0x000158 - 0x000170)
class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0158   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.IsOwningPlayerLastSurvivor
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.IsOwningSurvivorAuraRevealedToKiller
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UIsOwningSurvivorAuraRevealedToKiller : public UGameplayModifierCondition
{ 
public:
};

/// Class /Script/DBDCompetence.IsPawnType
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UIsPawnType : public UEventDrivenModifierCondition
{ 
public:
	EPawnType                                          _pawnType;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Class /Script/DBDCompetence.IsPerkUsableCondition
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition
{ 
public:
};

/// Class /Script/DBDCompetence.IsPlayerLookingAtKillerCondition
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UIsPlayerLookingAtKillerCondition : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00F0   (0x0010)  MISSED
	float                                              _precisionAngleDegrees;                                     // 0x0100   (0x0004)  
	bool                                               _isLookingTowards;                                          // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0105   (0x0003)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsPlayerLookingAtKillerCondition.OnRep_IsLookingTowards
	// void OnRep_IsLookingTowards(bool IsLookingTowards);                                                                   // [0x500fb20] Final|Native|Private 
	// Function /Script/DBDCompetence.IsPlayerLookingAtKillerCondition.OnPawnControllerChanged
	// void OnPawnControllerChanged(class APawn* Pawn, class AController* Controller);                                       // [0x5016210] Final|Native|Private 
};

/// Class /Script/DBDCompetence.IsPlayerPerfInteractionWithNoItem
/// Size: 0x0040 (0x000120 - 0x000160)
class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0120   (0x0010)  MISSED
	FGameplayTagContainer                              _useItemInteractionSemantics;                               // 0x0130   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0150   (0x0008)  MISSED
	ELoadoutItemType                                   _itemType;                                                  // 0x0158   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0159   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange
	// void OnCollectableChargeStateChange(bool Empty);                                                                      // [0x5015ef0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.IsPlayerPerformingItemInteraction
/// Size: 0x0020 (0x000120 - 0x000140)
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0120   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
	// void OnCollectablePickedUp(class ADBDPlayer* Player);                                                                 // [0x5016090] Final|Native|Private 
	// Function /Script/DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
	// void OnCollectableDropped(EItemDropType dropType);                                                                    // [0x5016010] Final|Native|Private 
	// Function /Script/DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
	// void OnCollectableChargeStateChange(bool Empty);                                                                      // [0x5015f80] Final|Native|Private 
};

/// Class /Script/DBDCompetence.IsPlayerPerformingInteraction
/// Size: 0x0040 (0x0000F0 - 0x000130)
class UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{ 
public:
	FGameplayTagContainer                              _interactionSemantics;                                      // 0x00F0   (0x0020)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0110   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
	// void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);                                               // [0x50167b0] Final|Native|Private 
	// Function /Script/DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
	// void SetInteractionSemantics(FGameplayTagContainer& interactionSemantics);                                            // [0x500af40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDCompetence.IsSubjectInteractingWithOriginatingPlayer
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UIsSubjectInteractingWithOriginatingPlayer : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00F0   (0x0018)  MISSED
};

/// Class /Script/DBDCompetence.KillerConditionalSpeedCurveEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UKillerConditionalSpeedCurveEffect : public UStatusEffect
{ 
public:
	class UCurveFloat*                                 _speedCurve;                                                // 0x0350   (0x0008)  
};

/// Class /Script/DBDCompetence.KillerIsLowOnAmmo
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UKillerIsLowOnAmmo : public UEventDrivenModifierCondition
{ 
public:
	int32_t                                            _ammoThreshold;                                             // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x00F4   (0x0014)  MISSED
};

/// Class /Script/DBDCompetence.KillerSubjectProvider
/// Size: 0x0008 (0x000048 - 0x000050)
class UKillerSubjectProvider : public UModifierSubjectProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
	// void RegisterWhenKillerSet(class ASlasherPlayer* killer);                                                             // [0x501bb80] Final|Native|Private 
};

/// Class /Script/DBDCompetence.KindredPerk
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UKindredPerk : public UPerk
{ 
public:
	TArray<float>                                      _killerAuraRevealRange;                                     // 0x03C8   (0x0010)  
	class UClass*                                      _kindredRevealKillerOther;                                  // 0x03D8   (0x0008)  
	class UClass*                                      _kindredRevealKillerOwner;                                  // 0x03E0   (0x0008)  
	class UClass*                                      _kindredRevealSurvivors;                                    // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.KindredPerk.GetKillerAuraRevealRangeAtLevel
	// float GetKillerAuraRevealRangeAtLevel();                                                                              // [0x500f5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.Leader
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class ULeader : public UPerk
{ 
public:
	float                                              _actionSpeedModifier;                                       // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _leaderStatusEffect;                                        // 0x03D8   (0x0008)  
};

/// Class /Script/DBDCompetence.LeaderEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class ULeaderEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.LingeringBlessedStatusEffect
/// Size: 0x0028 (0x000360 - 0x000388)
class ULingeringBlessedStatusEffect : public UBlessedStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0360   (0x0004)  MISSED
	float                                              _lingerDuration;                                            // 0x0364   (0x0004)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0368   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration
	// void SetLingerDuration(float lingerDuration);                                                                         // [0x501bc10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x501b610] Final|Native|Private 
};

/// Class /Script/DBDCompetence.LingeringBlindnessEffect
/// Size: 0x0060 (0x000360 - 0x0003C0)
class ULingeringBlindnessEffect : public UAdjustableCooldownStatusEffect
{ 
public:
	FGameplayTag                                       startBlindnessEventTag;                                     // 0x0360   (0x000C)  
	FGameplayTag                                       endBlindnessEventTag;                                       // 0x036C   (0x000C)  
	FGameplayTag                                       _state;                                                     // 0x0378   (0x000C)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x0384   (0x003C)  MISSED
};

/// Class /Script/DBDCompetence.LingeringExhaustedEffect
/// Size: 0x0060 (0x000368 - 0x0003C8)
class ULingeringExhaustedEffect : public UExhaustedEffect
{ 
public:
	FGameplayTag                                       startExhaustedEventTag;                                     // 0x0368   (0x000C)  
	FGameplayTag                                       endExhaustedEventTag;                                       // 0x0374   (0x000C)  
	FGameplayTag                                       _state;                                                     // 0x0380   (0x000C)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x038C   (0x003C)  MISSED
};

/// Class /Script/DBDCompetence.LingeringMultiStateTagStatusEffect
/// Size: 0x0078 (0x0003B8 - 0x000430)
class ULingeringMultiStateTagStatusEffect : public UBaseLingeringStatusEffect
{ 
public:
	TArray<FGameplayTag>                               _ownerStateTag;                                             // 0x03B8   (0x0010)  
	EMultiLingeringStateTagStrategy                    _strategy;                                                  // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x67];                                      // 0x03C9   (0x0067)  MISSED
};

/// Class /Script/DBDCompetence.LingeringStateTagStatusEffect
/// Size: 0x0038 (0x0003B8 - 0x0003F0)
class ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
{ 
public:
	FGameplayTag                                       _ownerStateTag;                                             // 0x03B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x03C4   (0x002C)  MISSED
};

/// Class /Script/DBDCompetence.LocallyObservedPlayerSubjectProvider
/// Size: 0x0000 (0x000048 - 0x000048)
class ULocallyObservedPlayerSubjectProvider : public UModifierSubjectProvider
{ 
public:
};

/// Class /Script/DBDCompetence.LuckyBreak
/// Size: 0x0058 (0x0003C8 - 0x000420)
class ULuckyBreak : public UPerk
{ 
public:
	float                                              _maxActivationTime;                                         // 0x03C8   (0x000C)  
	float                                              _minActivationTime;                                         // 0x03D4   (0x0004)  
	float                                              _healingTimeToActivationTimeRatio;                          // 0x03D8   (0x0004)  
	bool                                               _isRecharging;                                              // 0x03DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03DD   (0x0003)  MISSED
	FSpeedBasedNetSyncedValue                          _activationTime;                                            // 0x03E0   (0x0038)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0418   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.LuckyBreak.GetMinActivationTime
	// float GetMinActivationTime();                                                                                         // [0x500a8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.LuckyBreak.GetMaxActivationTimeAtLevel
	// float GetMaxActivationTimeAtLevel();                                                                                  // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.LuckyBreak.GetHealingTimeToActivationTimeRatio
	// float GetHealingTimeToActivationTimeRatio();                                                                          // [0x500f7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.LuckyBreak.Authority_TryActivatePerk
	// void Authority_TryActivatePerk();                                                                                     // [0x501b820] Final|Native|Private 
	// Function /Script/DBDCompetence.LuckyBreak.Authority_OnDamageStateChanged
	// void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);        // [0x501b470] Final|Native|Private 
	// Function /Script/DBDCompetence.LuckyBreak.ActivationTimerEnded
	// void ActivationTimerEnded();                                                                                          // [0x501b380] Final|Native|Private 
};

/// Class /Script/DBDCompetence.MakeYourChoice
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UMakeYourChoice : public UPerk
{ 
public:
	float                                              _minimumHookedSurvivorDistance;                             // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	class UClass*                                      _exposedEffect;                                             // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.MakeYourChoice.Multicast_TriggerEffectAppliedVFX
	// void Multicast_TriggerEffectAppliedVFX(class ACamperPlayer* Player);                                                  // [0x501b930] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/DBDCompetence.MakeYourChoice.GetMinimumHookedSurvivorDistance
	// float GetMinimumHookedSurvivorDistance();                                                                             // [0x501b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.MakeYourChoice.Cosmetic_OnTriggerEffectVFX
	// void Cosmetic_OnTriggerEffectVFX(class ACamperPlayer* Player);                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDCompetence.MindBreaker
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UMindBreaker : public UPerk
{ 
public:
	float                                              _effectDurationAfterRepair;                                 // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _blindessEffect;                                            // 0x03D8   (0x0008)  
	class UClass*                                      _exhaustedEffect;                                           // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.MindBreaker.GetEffectDurationAfterRepairAtLevel
	// float GetEffectDurationAfterRepairAtLevel();                                                                          // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.MonstrousShrine
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UMonstrousShrine : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x03C8   (0x0018)  MISSED
	float                                              _fasterDrainPercentage;                                     // 0x03E0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03EC   (0x0004)  MISSED
	class UClass*                                      _fasterDrainOnScourgeHookEffect;                            // 0x03F0   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.MonstrousShrine.GetFasterDrainPercentageAtLevel
	// float GetFasterDrainPercentageAtLevel();                                                                              // [0x500aa40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.MonstrousShrine.Authority_OnSurvivorUnhookedOnScourgeHook
	// void Authority_OnSurvivorUnhookedOnScourgeHook(FGameEventData& GameEventData);                                        // [0x501b770] Final|Native|Private|HasOutParms 
	// Function /Script/DBDCompetence.MonstrousShrine.Authority_OnSurvivorHookedOnScourgeHook
	// void Authority_OnSurvivorHookedOnScourgeHook(FGameEventData& GameEventData);                                          // [0x501b6c0] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDCompetence.Nemesis
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UNemesis : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	float                                              _revealToKillerTime;                                        // 0x03D0   (0x000C)  
	float                                              _obliviousTime;                                             // 0x03DC   (0x000C)  
	class UClass*                                      _timedObliviousEffectClass;                                 // 0x03E8   (0x0008)  
	class UStatusEffect*                               _obliviousStatusEffect;                                     // 0x03F0   (0x0008)  
};

/// Class /Script/DBDCompetence.NoOneLeftBehind
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UNoOneLeftBehind : public UPerk
{ 
public:
	float                                              _movementSpeedPercentage;                                   // 0x03C8   (0x0004)  
	float                                              _movementSpeedDuration;                                     // 0x03CC   (0x0004)  
	class UClass*                                      _modifyHealOtherSpeedEffect;                                // 0x03D0   (0x0008)  
	class UClass*                                      _modifyUnhookOtherSpeedEffect;                              // 0x03D8   (0x0008)  
	class UClass*                                      _movementSpeedEffect;                                       // 0x03E0   (0x0008)  
	float                                              _actionSpeedModifierValuePerLevel;                          // 0x03E8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	class UStatusEffect*                               _alertKillerRevealEffect;                                   // 0x03F8   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.NoOneLeftBehind.GetMovementSpeedPercentage
	// float GetMovementSpeedPercentage();                                                                                   // [0x4bae260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.NoOneLeftBehind.GetMovementSpeedDuration
	// float GetMovementSpeedDuration();                                                                                     // [0x501b8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.NoOneLeftBehind.GetActionSpeedModifierValueAtLevel
	// float GetActionSpeedModifierValueAtLevel();                                                                           // [0x500a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.NoOneLeftBehind.Authority_OnExitGatePoweredApplicableChanged
	// void Authority_OnExitGatePoweredApplicableChanged(class UGameplayModifierContainer* Container, bool Active);          // [0x501b540] Final|Native|Private 
};

/// Class /Script/DBDCompetence.ObliviousEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UObliviousEffect : public UAdjustableCooldownStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.ObsessionTargetSubjectProvider
/// Size: 0x0010 (0x000048 - 0x000058)
class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/DBDCompetence.OnEventSetTimerAddon
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UOnEventSetTimerAddon : public UOnEventBaseAddon
{ 
public:
	float                                              _addonEffectTime;                                           // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.OriginatingEffectIsApplicable
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UOriginatingEffectIsApplicable : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.OwningPlayerInBoonBlessingRange
/// Size: 0x0008 (0x000108 - 0x000110)
class UOwningPlayerInBoonBlessingRange : public UAnyActorPairQueryRangeIsTrue
{ 
public:
	class ATotem*                                      _boundTotem;                                                // 0x0108   (0x0008)  
};

/// Class /Script/DBDCompetence.OwningPlayerInTotemRange
/// Size: 0x0028 (0x000108 - 0x000130)
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0108   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x501ba90] Final|Native|Protected 
};

/// Class /Script/DBDCompetence.OwningPlayerInDullTotemRange
/// Size: 0x0000 (0x000130 - 0x000130)
class UOwningPlayerInDullTotemRange : public UOwningPlayerInTotemRange
{ 
public:
};

/// Class /Script/DBDCompetence.PharmacyPerk
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UPharmacyPerk : public UPerk
{ 
public:
	class UClass*                                      _pharmacyEffectClass;                                       // 0x03C8   (0x0008)  
	float                                              _searchSpeeds;                                              // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.PharmacyPerk.GetSearchSpeedAtLevel
	// float GetSearchSpeedAtLevel();                                                                                        // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.PlayerIsInExitArea
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UPlayerIsInExitArea : public UGameplayModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
	// void PlayerExitExitArea();                                                                                            // [0x501bb60] Final|Native|Private 
	// Function /Script/DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
	// void PlayerEnterExitArea();                                                                                           // [0x501bb40] Final|Native|Private 
};

/// Class /Script/DBDCompetence.PlayWithYourFood
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UPlayWithYourFood : public UPerk
{ 
public:
	float                                              _movementSpeedPercentBuff;                                  // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	TArray<FGameplayTag>                               _basicAndSpecialAttackTags;                                 // 0x03D8   (0x0010)  
	float                                              _chargeGainedCooldown;                                      // 0x03E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.PlayWithYourFood.GetMovementSpeedPercentBuffAtLevel
	// float GetMovementSpeedPercentBuffAtLevel();                                                                           // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.PlayWithYourFood.GetChargeGainedCooldown
	// float GetChargeGainedCooldown();                                                                                      // [0x501b840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.PlayWithYourFood.Authority_OnChaseEnded
	// void Authority_OnChaseEnded(class ADBDPlayer* Player, float chaseTime);                                               // [0x501b3a0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.Poised
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UPoised : public UPerk
{ 
public:
	float                                              _activationTime;                                            // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x03D4   (0x001C)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Poised.GetActivationTime
	// float GetActivationTime();                                                                                            // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.Premonition
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UPremonition : public UPerk
{ 
public:
	float                                              _perkFrequency;                                             // 0x03C8   (0x000C)  
	float                                              _perkEffectRange;                                           // 0x03D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x03D8   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Premonition.Multicast_OnPerkActivate
	// void Multicast_OnPerkActivate();                                                                                      // [0x501b910] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/DBDCompetence.Premonition.GetPerkFrequencyAtLevel
	// float GetPerkFrequencyAtLevel();                                                                                      // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Premonition.GetPerkEffectRange
	// float GetPerkEffectRange();                                                                                           // [0x501b8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Premonition.Cosmetic_OnPerkActivate
	// void Cosmetic_OnPerkActivate();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDCompetence.ProveThyself
/// Size: 0x00B8 (0x0003C8 - 0x000480)
class UProveThyself : public UPerk
{ 
public:
	FDBDTunableRowHandle                               _proveThyselfRange;                                         // 0x03C8   (0x0028)  
	float                                              _speedPercentageAddedPerSurvivorRepairingInRange;           // 0x03F0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x64];                                      // 0x03FC   (0x0064)  MISSED
	FForAllSurvivorsStatusEffectImposer                _proveThyselfEffectImposer;                                 // 0x0460   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0478   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged
	// void OnSurvivorInOwnerRangeChanged(bool inRange);                                                                     // [0x501bab0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class URemoveOnOriginatingSurvivorGoneStatusEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
	// void Authority_OnSurvivorRemoved(class ACamperPlayer* Survivor);                                                      // [0x5020a70] Final|Native|Protected 
};

/// Class /Script/DBDCompetence.ProveThyselfEffect
/// Size: 0x00B8 (0x000358 - 0x000410)
class UProveThyselfEffect : public URemoveOnOriginatingSurvivorGoneStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0358   (0x0020)  MISSED
	FDBDTunableRowHandle                               _proveThyselfRange;                                         // 0x0378   (0x0028)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x03A0   (0x0070)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged
	// void OnInRangeOfOriginatorChanged(bool inRange, class ACamperPlayer* Survivor);                                       // [0x501b9c0] Native|Protected     
};

/// Class /Script/DBDCompetence.QuickAndQuiet
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UQuickAndQuiet : public UPerk
{ 
public:
	FGameplayTagContainer                              _rushedActions;                                             // 0x03C8   (0x0020)  
	class UClass*                                      _silentRushedActionStatusEffect;                            // 0x03E8   (0x0008)  
	float                                              _cooldownDurationSeconds;                                   // 0x03F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.QuickAndQuiet.GetCooldownDurationSecondsAtLevel
	// float GetCooldownDurationSecondsAtLevel();                                                                            // [0x501b870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.QuickAndQuiet.Authority_OnPlayerRushedActionFinished
	// void Authority_OnPlayerRushedActionFinished();                                                                        // [0x501b6a0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.RampingBlindEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class URampingBlindEffect : public UStatusEffect
{ 
public:
	class UBlindableComponent*                         _ownerBlindable;                                            // 0x0350   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0358   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.ResiliencePerk
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UResiliencePerk : public UPerk
{ 
public:
	float                                              _actionSpeed;                                               // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.Saboteur
/// Size: 0x0058 (0x0003C8 - 0x000420)
class USaboteur : public UPerk
{ 
public:
	float                                              _cooldownDuration;                                          // 0x03C8   (0x000C)  
	float                                              _revealHookDistance;                                        // 0x03D4   (0x000C)  
	FLinearColor                                       _scourgeHooksAuraColour;                                    // 0x03E0   (0x0010)  
	class UClass*                                      _saboteurEffect;                                            // 0x03F0   (0x0008)  
	TArray<class UMeatHookOutlineUpdateStrategy*>      _revealedMeatHooksOultineStrategy;                          // 0x03F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0408   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Saboteur.GetScourgeHooksAuraColour
	// FLinearColor GetScourgeHooksAuraColour();                                                                             // [0x5020d20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Saboteur.GetRevealHookDistanceAtLevel
	// float GetRevealHookDistanceAtLevel();                                                                                 // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Saboteur.GetCooldownDurationAtLevel
	// float GetCooldownDurationAtLevel();                                                                                   // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.SecondsToRateModifierBaseAddon
/// Size: 0x0110 (0x0002B8 - 0x0003C8)
class USecondsToRateModifierBaseAddon : public UItemAddon
{ 
public:
	FTunableStat                                       _chargeRate;                                                // 0x02B8   (0x0080)  
	FTunableStat                                       _maxCharge;                                                 // 0x0338   (0x0080)  
	float                                              _secondsToAdd;                                              // 0x03B8   (0x0004)  
	FGameplayTag                                       _rateModifierTagToCompute;                                  // 0x03BC   (0x000C)  
};

/// Class /Script/DBDCompetence.SecondWind
/// Size: 0x0050 (0x0003C8 - 0x000418)
class USecondWind : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	ESecondWindState                                   _currentState;                                              // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03D1   (0x0003)  MISSED
	float                                              _amountHealed;                                              // 0x03D4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x03D8   (0x0008)  MISSED
	float                                              _numberOfHealStateToHealToActivate;                         // 0x03E0   (0x000C)  
	float                                              _durationOfHeal;                                            // 0x03EC   (0x000C)  
	class UClass*                                      _brokenStatusEffectClass;                                   // 0x03F8   (0x0008)  
	bool                                               _applyBrokenEffect;                                         // 0x0400   (0x0001)  
	unsigned char                                      UnknownData03_5[0xF];                                       // 0x0401   (0x000F)  MISSED
	class UStatusEffect*                               _brokenStatusEffect;                                        // 0x0410   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.SecondWind.GetNumberOfHealStateToHealToActivateAtLevel
	// float GetNumberOfHealStateToHealToActivateAtLevel();                                                                  // [0x500aa40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SecondWind.GetDurationOfHealAtLevel
	// float GetDurationOfHealAtLevel();                                                                                     // [0x500a8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SecondWind.Authority_OnHealProgress
	// void Authority_OnHealProgress(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime); // [0x5020110] Final|Native|Private 
};

/// Class /Script/DBDCompetence.SelfCare
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class USelfCare : public UPerk
{ 
public:
	class UClass*                                      _selfHealNoMedkitSpeedPenaltyEffectClass;                   // 0x03C8   (0x0008)  
	float                                              _selfHealSpeedPenalty;                                      // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _selfCareInteraction;                                       // 0x03E0   (0x0008)  
	class UInteractionAttacherComponent*               _interactionAttacherComponent;                              // 0x03E8   (0x0008)  


	/// Functions
	// Function /Script/DBDCompetence.SelfCare.OnRep_InteractionAttacherComponent
	// void OnRep_InteractionAttacherComponent();                                                                            // [0x5021130] Final|Native|Private 
};

/// Class /Script/DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon
{ 
public:
	bool                                               _canCreateMultipleInstances;                                // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02B9   (0x000F)  MISSED
};

/// Struct /Script/DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddonParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams
{ 
	FName                                              _statusEffectIdDeprecated;                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      _effectClass;                                               // 0x0010   (0x0008)  
	float                                              _customParam;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class USimpleSpawnEffectsOnAllSurvivorsAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{ 
public:
	TArray<FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams;                                // 0x02C8   (0x0010)  
};

/// Class /Script/DBDCompetence.SingleGateBlockerEffect
/// Size: 0x0050 (0x000388 - 0x0003D8)
class USingleGateBlockerEffect : public UGateBlockerEffect
{ 
public:
	float                                              _distanceThreshold;                                         // 0x0388   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	class AEscapeDoor*                                 _gate;                                                      // 0x0390   (0x0008)  
	bool                                               _isInRange;                                                 // 0x0398   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3F];                                      // 0x0399   (0x003F)  MISSED
};

/// Class /Script/DBDCompetence.SmallGame
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class USmallGame : public UPerk
{ 
public:
	float                                              _detectionConeAngle;                                        // 0x03C8   (0x000C)  
	float                                              _detectionConeAngleReductionRate;                           // 0x03D4   (0x000C)  
	bool                                               _totemDetected;                                             // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x03E1   (0x000F)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.SmallGame.VFXTotemFound
	// void VFXTotemFound();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDCompetence.SmallGame.SearchForTotems
	// void SearchForTotems();                                                                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDCompetence.SmallGame.Multicast_TotemFound
	// void Multicast_TotemFound();                                                                                          // [0x501b910] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DBDCompetence.SmallGame.GetDetectionConeAngle
	// float GetDetectionConeAngle();                                                                                        // [0x5020c30] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SmallGame.Authority_SetTotemDetected
	// void Authority_SetTotemDetected(bool value);                                                                          // [0x5020b00] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDCompetence.SoleSurvivor
/// Size: 0x0060 (0x0003C8 - 0x000428)
class USoleSurvivor : public UPerk
{ 
public:
	class UClass*                                      _modifyActionSpeedWhenRepairingEffect;                      // 0x03C8   (0x0008)  
	class UClass*                                      _modifyActionSpeedWhenOpeningGateOrHatchEffect;             // 0x03D0   (0x0008)  
	float                                              _actionSpeedsRepairing;                                     // 0x03D8   (0x000C)  
	float                                              _actionSpeedsOpeningGateOrHatch;                            // 0x03E4   (0x000C)  
	float                                              _auraHideDistancePerDeadOrDisconnectedSurvivor;             // 0x03F0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03FC   (0x0004)  MISSED
	TArray<class ACamperPlayer*>                       _otherSurvivors;                                            // 0x0400   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0410   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
	// void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);                                                        // [0x50209e0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.Solidarity
/// Size: 0x0038 (0x0003C8 - 0x000400)
class USolidarity : public UPerk
{ 
public:
	bool                                               _allowMedkit;                                               // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x03C9   (0x000F)  MISSED
	class UChargeableComponent*                        _healerHPSlot;                                              // 0x03D8   (0x0008)  
	class UChargeableComponent*                        _targetHPSlot;                                              // 0x03E0   (0x0008)  
	class UChargeableInteractionDefinition*            _healOtherInteraction;                                      // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
	// void Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange); // [0x50207a0] Final|Native|Private 
	// Function /Script/DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
	// void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime); // [0x50202c0] Final|Native|Private 
};

/// Struct /Script/DBDCompetence.StatusEffectsProperties
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStatusEffectsProperties
{ 
	class UClass*                                      StatusEffectClass;                                          // 0x0000   (0x0008)  
	float                                              customParam;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/DBDCompetence.SpawnStatusEffectsOnKillerAddon
/// Size: 0x0020 (0x0002B8 - 0x0002D8)
class USpawnStatusEffectsOnKillerAddon : public UItemAddon
{ 
public:
	TArray<FStatusEffectsProperties>                   _statusEffectsToSpawn;                                      // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,3601) /* TArray<TWeakObjectPtr<UStatusEffect*>> */ __um(_imposedStatusEffects);               // 0x02C8   (0x0010)  
};

/// Class /Script/DBDCompetence.SpiesFromTheShadows
/// Size: 0x0008 (0x0003C8 - 0x0003D0)
class USpiesFromTheShadows : public UPerk
{ 
public:
	float                                              _cooldownDurationSecs;                                      // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.SpiesFromTheShadows.GetCooldownDuration
	// float GetCooldownDuration();                                                                                          // [0x501b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.SpineChillPerk
/// Size: 0x0080 (0x0003C8 - 0x000448)
class USpineChillPerk : public UPerk
{ 
public:
	class UClass*                                      _spineChillEffectClass;                                     // 0x03C8   (0x0008)  
	float                                              _actionSpeed;                                               // 0x03D0   (0x000C)  
	float                                              _lingerDuration;                                            // 0x03DC   (0x0004)  
	float                                              _range;                                                     // 0x03E0   (0x0004)  
	float                                              _precisionAngleDegrees;                                     // 0x03E4   (0x0004)  
	bool                                               _isInRange;                                                 // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5F];                                      // 0x03E9   (0x005F)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.SpineChillPerk.IsLookingTowards
	// bool IsLookingTowards();                                                                                              // [0x50210a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SpineChillPerk.IsInRange
	// bool IsInRange();                                                                                                     // [0x5021070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SpineChillPerk.HasLineOfSight
	// bool HasLineOfSight();                                                                                                // [0x5020ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SpineChillPerk.GetRange
	// float GetRange();                                                                                                     // [0x5020cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SpineChillPerk.GetLingerDuration
	// float GetLingerDuration();                                                                                            // [0x5020c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SpineChillPerk.Authority_OnIsLookingTowardsChanged
	// void Authority_OnIsLookingTowardsChanged(bool IsLookingTowards);                                                      // [0x5020590] Final|Native|Private 
	// Function /Script/DBDCompetence.SpineChillPerk.Authority_OnIsInLineOfSightChanged
	// void Authority_OnIsInLineOfSightChanged(bool isInLineOfSight);                                                        // [0x5020500] Final|Native|Private 
	// Function /Script/DBDCompetence.SpineChillPerk.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5020470] Final|Native|Private 
};

/// Class /Script/DBDCompetence.SprintBurst
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class USprintBurst : public UPerk
{ 
public:
	float                                              _exhaustionDuration;                                        // 0x03C8   (0x000C)  
	float                                              _sprintDuration;                                            // 0x03D4   (0x0004)  
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                           // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.SprintBurst.GetSprintDuration
	// float GetSprintDuration();                                                                                            // [0x500a8f0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SprintBurst.GetExhaustedDuration
	// float GetExhaustedDuration();                                                                                         // [0x500a800] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.SprintBurst.Authority_OnPerkFlagsChanged
	// void Authority_OnPerkFlagsChanged(FGameplayTag GameplayTag, bool isAdded);                                            // [0x50206b0] Final|Native|Private 
	// Function /Script/DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
	// void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving);                                                  // [0x5020620] Final|Native|Private 
};

/// Class /Script/DBDCompetence.StakeOutPerk
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UStakeOutPerk : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x03C8   (0x0018)  MISSED
	class UClass*                                      _stakeOutStatusEffectClass;                                 // 0x03E0   (0x0008)  
	class UStatusEffect*                               _stakeOutStatusEffect;                                      // 0x03E8   (0x0008)  
	int32_t                                            _maxTokensByLevel;                                          // 0x03F0   (0x000C)  
	float                                              _tokenChargeTime;                                           // 0x03FC   (0x0004)  


	/// Functions
	// Function /Script/DBDCompetence.StakeOutPerk.Server_ConsumeToken
	// void Server_ConsumeToken();                                                                                           // [0x5021150] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/DBDCompetence.StakeOutPerk.Local_BroadcastConsumeToken
	// void Local_BroadcastConsumeToken();                                                                                   // [0x50210d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDCompetence.StakeOutPerk.GetTokenChargeTime
	// float GetTokenChargeTime();                                                                                           // [0x5020e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.StakeOutPerk.GetMaxTokensAtLevel
	// float GetMaxTokensAtLevel();                                                                                          // [0x5020cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.StatsSystemUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UStatsSystemUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDCompetence.StatsSystemUtilities.InitStatBP
	// void InitStatBP(FTunableStat& theStat, TScriptInterface<Class> ModifierProvider);                                     // [0x5020f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDCompetence.StatsSystemUtilities.GetStatValueBP
	// float GetStatValueBP(FTunableStat& theStat);                                                                          // [0x5020d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DBDCompetence.StatusEffectOriginatorSubjectProvider
/// Size: 0x0000 (0x000048 - 0x000048)
class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
{ 
public:
};

/// Class /Script/DBDCompetence.Surge
/// Size: 0x0040 (0x0003C8 - 0x000408)
class USurge : public UPerk
{ 
public:
	float                                              _zoneRadius;                                                // 0x03C8   (0x000C)  
	float                                              _instantRegression;                                         // 0x03D4   (0x000C)  
	float                                              _cooldownDuration;                                          // 0x03E0   (0x000C)  
	bool                                               _hasCooldown;                                               // 0x03EC   (0x0001)  
	bool                                               _useTerrorRadiusInsteadOfFixedDistance;                     // 0x03ED   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1A];                                      // 0x03EE   (0x001A)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Surge.GetZoneRadius
	// float GetZoneRadius();                                                                                                // [0x5020ea0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Surge.GetInstantRegressionAtLevel
	// float GetInstantRegressionAtLevel();                                                                                  // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Surge.GetHasCooldown
	// bool GetHasCooldown();                                                                                                // [0x5020c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Surge.GetCooldownDurationAtLevel
	// float GetCooldownDurationAtLevel();                                                                                   // [0x500aa40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Surge.Client_TriggerEffects
	// void Client_TriggerEffects(TArray<AGenerator*> generators);                                                           // [0x5020b90] Final|Net|Native|Event|Private|NetClient 
};

/// Class /Script/DBDCompetence.SurvivorWasRecentlyUnhookedEffect
/// Size: 0x0028 (0x000350 - 0x000378)
class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _survivorWasRecentlyUnhookedDuration;                       // 0x0350   (0x0028)  
};

/// Class /Script/DBDCompetence.TestAnyActorPairQueryRangeIsTrue
/// Size: 0x0008 (0x000108 - 0x000110)
class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue
{ 
public:
	class UActorPairQueryEvaluatorComponent*           _actorPairQueryEvaluatorComponent;                          // 0x0108   (0x0008)  
};

/// Class /Script/DBDCompetence.TestCollectable
/// Size: 0x0000 (0x0004C8 - 0x0004C8)
class ATestCollectable : public ACollectable
{ 
public:
};

/// Class /Script/DBDCompetence.TestDBDGameState
/// Size: 0x0000 (0x000908 - 0x000908)
class ATestDBDGameState : public ADBDGameState
{ 
public:
};

/// Class /Script/DBDCompetence.TheMettleOfMan
/// Size: 0x0050 (0x0003C8 - 0x000418)
class UTheMettleOfMan : public UPerk
{ 
public:
	int32_t                                            _tokenNeededToActivate;                                     // 0x03C8   (0x000C)  
	float                                              _revealOutsideRange;                                        // 0x03D4   (0x000C)  
	bool                                               _mustBeInjured;                                             // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03E1   (0x0007)  MISSED
	class UClass*                                      _enduranceHighlightEffectClass;                             // 0x03E8   (0x0008)  
	int32_t                                            _numTokenSoFar;                                             // 0x03F0   (0x0004)  
	ETheMettleOfManPhase                               _currentPhase;                                              // 0x03F4   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x03F5   (0x000B)  MISSED
	class UStatusEffect*                               _revealToKillerEffect;                                      // 0x0400   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0408   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
	// void OnRep_NumTokenSoFar();                                                                                           // [0x5021110] Final|Native|Private 
	// Function /Script/DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
	// void OnRep_CurrentPhase();                                                                                            // [0x5021110] Final|Native|Private 
	// Function /Script/DBDCompetence.TheMettleOfMan.GetRevealOutsideRangeAtLevel
	// float GetRevealOutsideRangeAtLevel();                                                                                 // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.ThrillingTremors
/// Size: 0x0060 (0x0003C8 - 0x000428)
class UThrillingTremors : public UPerk
{ 
public:
	int32_t                                            _cooldownByLevel;                                           // 0x03C8   (0x000C)  
	float                                              _durationByLevel;                                           // 0x03D4   (0x000C)  
	bool                                               _disableWhenSurvivorPutDownOrUnhooked;                      // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03E1   (0x0003)  MISSED
	FLinearColor                                       _generatorAuraColorForKiller;                               // 0x03E4   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	TArray<class AGenerator*>                          _blockedGenerators;                                         // 0x03F8   (0x0010)  
	TArray<class AGenerator*>                          _revealedGenerators;                                        // 0x0408   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0418   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
	// void OnRep_BlockedGenerators();                                                                                       // [0x50210f0] Final|Native|Private 
	// Function /Script/DBDCompetence.ThrillingTremors.GetDurationAtLevel
	// float GetDurationAtLevel();                                                                                           // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.ThrillingTremors.GetCooldownAtLevel
	// int32_t GetCooldownAtLevel();                                                                                         // [0x5015a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDCompetence.TimedObliviousEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UTimedObliviousEffect : public UObliviousEffect
{ 
public:
};

/// Class /Script/DBDCompetence.TimedStatusEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UTimedStatusEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.TimerElapsedCondition
/// Size: 0x0018 (0x000100 - 0x000118)
class UTimerElapsedCondition : public USingleModifierCondition
{ 
public:
	class UTimerObject*                                _timer;                                                     // 0x0100   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Class /Script/DBDCompetence.Tinkerer
/// Size: 0x0078 (0x0003C8 - 0x000440)
class UTinkerer : public UPerk
{ 
public:
	class UClass*                                      _undetectableEffectClass;                                   // 0x03C8   (0x0008)  
	float                                              _triggerThreshold;                                          // 0x03D0   (0x0004)  
	float                                              _distanceThreshold;                                         // 0x03D4   (0x0004)  
	float                                              _activationTime;                                            // 0x03D8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	SDK_UNDEFINED(80,3602) /* TMap<AActor*, float> */  __um(_generatorActivationTimes);                            // 0x03E8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0438   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Tinkerer.GetTriggerThreshold
	// float GetTriggerThreshold();                                                                                          // [0x5023110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Tinkerer.GetActivationTimeAtLevel
	// float GetActivationTimeAtLevel();                                                                                     // [0x500f7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.Tinkerer.Authority_OnUndetectableGeneratorInterrupt
	// void Authority_OnUndetectableGeneratorInterrupt(class ADBDPlayer* Instigator, class ADBDPlayer* Target);              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDCompetence.Tinkerer.Authority_OnUndetectableAttackSuccessNearActiveGenerator
	// void Authority_OnUndetectableAttackSuccessNearActiveGenerator(class ADBDPlayer* Instigator, class ADBDPlayer* Target); // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDCompetence.Tinkerer.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5022fb0] Final|Native|Private 
	// Function /Script/DBDCompetence.Tinkerer.Authority_OnGeneratorReachedThreshold
	// void Authority_OnGeneratorReachedThreshold(class AGenerator* Generator);                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDCompetence.Tinkerer.Authority_OnGeneratorChargePercentChanged
	// void Authority_OnGeneratorChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5022ea0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.UndetectableEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UUndetectableEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.UndetectableTimedEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UUndetectableTimedEffect : public UTimedStatusEffect
{ 
public:
};

/// Class /Script/DBDCompetence.UnhookedMovementSpeedBonusEffect
/// Size: 0x0030 (0x000350 - 0x000380)
class UUnhookedMovementSpeedBonusEffect : public UStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _movementSpeedBonusPercent;                                 // 0x0350   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0378   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.WakeUpPerk
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UWakeUpPerk : public UPerk
{ 
public:
	float                                              _gateOpenSpeed;                                             // 0x03C8   (0x000C)  
	float                                              _revealDistance;                                            // 0x03D4   (0x0004)  
	class UClass*                                      _wakeUpShowExitGateAuraEffectClass;                         // 0x03D8   (0x0008)  
	class UClass*                                      _wakeUpShowPlayerOnGateAuraEffectClass;                     // 0x03E0   (0x0008)  
	class UClass*                                      _wakeUpOpenGateEffectClass;                                 // 0x03E8   (0x0008)  
};

/// Class /Script/DBDCompetence.WeddingRing
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UWeddingRing : public UItemAddon
{ 
public:
	class UClass*                                      _increaseObsessionChanceStatusEffect;                       // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C0   (0x0008)  MISSED
};

/// Class /Script/DBDCompetence.WellMakeIt
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UWellMakeIt : public UPerk
{ 
public:
	class UClass*                                      _wellMakeItNotificationEffectClass;                         // 0x03C8   (0x0008)  
	class UClass*                                      _wellMakeItEffectClass;                                     // 0x03D0   (0x0008)  
	float                                              _healingSpeed;                                              // 0x03D8   (0x0004)  
	float                                              _perkDuration;                                              // 0x03DC   (0x000C)  


	/// Functions
	// Function /Script/DBDCompetence.WellMakeIt.GetPerkDurationAtLevel
	// float GetPerkDurationAtLevel();                                                                                       // [0x50230e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.WellMakeIt.GetHealingSpeed
	// float GetHealingSpeed();                                                                                              // [0x500f7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCompetence.WellMakeIt.Authority_OnUnHook
	// void Authority_OnUnHook(FGameplayTag gameEventType, FGameEventData& GameEventData);                                   // [0x5022fd0] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDCompetence.WereGonnaLiveForever
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UWereGonnaLiveForever : public UPerk
{ 
public:
	float                                              _healSpeedIncrease;                                         // 0x03C8   (0x0004)  
	float                                              _enduranceEffectLevels;                                     // 0x03CC   (0x000C)  
	class UClass*                                      _healSpeedFromDyingStatusEffect;                            // 0x03D8   (0x0008)  
	class UClass*                                      _enduranceEffect;                                           // 0x03E0   (0x0008)  
	bool                                               _isPerkEnabled;                                             // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x03E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.WereGonnaLiveForever.OnRep_PerkEnabled
	// void OnRep_PerkEnabled();                                                                                             // [0x50231f0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.Whispers
/// Size: 0x0090 (0x0003C8 - 0x000458)
class UWhispers : public UPerk
{ 
public:
	float                                              _timeBetweenAudio;                                          // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x34];                                      // 0x03CC   (0x0034)  MISSED
	int32_t                                            _survivorsInRange;                                          // 0x0400   (0x0004)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x0404   (0x0054)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.Whispers.OnWhispersAudio
	// void OnWhispersAudio();                                                                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDCompetence.Whispers.OnRep_SurvivorsInRange
	// void OnRep_SurvivorsInRange();                                                                                        // [0x5023210] Final|Native|Private 
	// Function /Script/DBDCompetence.Whispers.Multicast_FireAudioEvent
	// void Multicast_FireAudioEvent(int32_t survivorsInRange);                                                              // [0x5023140] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/DBDCompetence.YamaokaFamilyCrest
/// Size: 0x0040 (0x0002B8 - 0x0002F8)
class UYamaokaFamilyCrest : public UItemAddon
{ 
public:
	float                                              _revealDuration;                                            // 0x02B8   (0x0004)  
	float                                              _revealRange;                                               // 0x02BC   (0x0004)  
	class UClass*                                      _revealAuraToKillerEffectClass;                             // 0x02C0   (0x0008)  
	TArray<class ACamperPlayer*>                       _survivorsToReveal;                                         // 0x02C8   (0x0010)  
	char                                               _addonActivationCount;                                      // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x02D9   (0x001F)  MISSED


	/// Functions
	// Function /Script/DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
	// void RevealSurvivor(class ACamperPlayer* survivorToReveal);                                                           // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
	// void OnRep_AddonActivationCount();                                                                                    // [0x50231d0] Final|Native|Private 
};

/// Class /Script/DBDCompetence.ZanshinTactics
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UZanshinTactics : public UPerk
{ 
public:
	float                                              _cooldownDuration;                                          // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
};

