
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
/// dependency: DBDAttack
/// dependency: DBDBots
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: SimpleStateMachine
/// dependency: StatSystem

/// Enum /Script/TheK24.EContaminator
/// Size: 0x04
enum class EContaminator : uint8_t
{
	EContaminator__Zombie                                                            = 0,
	EContaminator__Killer                                                            = 1,
	EContaminator__Mori                                                              = 2,
	EContaminator__EContaminator_MAX                                                 = 3
};

/// Enum /Script/TheK24.EBlastMineRemovedReason
/// Size: 0x04
enum class EBlastMineRemovedReason : uint8_t
{
	EBlastMineRemovedReason__Exploded                                                = 0,
	EBlastMineRemovedReason__LifetimeExpired                                         = 1,
	EBlastMineRemovedReason__BlastMineEndPlay                                        = 2,
	EBlastMineRemovedReason__EBlastMineRemovedReason_MAX                             = 3
};

/// Enum /Script/TheK24.EZombieState
/// Size: 0x15
enum class EZombieState : uint8_t
{
	EZombieState__InPool                                                             = 0,
	EZombieState__Spawn                                                              = 1,
	EZombieState__Patrolling                                                         = 2,
	EZombieState__Searching                                                          = 3,
	EZombieState__Chase                                                              = 4,
	EZombieState__Attack                                                             = 5,
	EZombieState__Dying                                                              = 6,
	EZombieState__Dead                                                               = 7,
	EZombieState__ChaseSearching                                                     = 8,
	EZombieState__InPlaceIdle                                                        = 9,
	EZombieState__Stunned                                                            = 10,
	EZombieState__FallSmash                                                          = 11,
	EZombieState__AttackCooldown                                                     = 12,
	EZombieState__Stop                                                               = 13,
	EZombieState__EZombieState_MAX                                                   = 14
};

/// Enum /Script/TheK24.EZombieGender
/// Size: 0x03
enum class EZombieGender : uint8_t
{
	EZombieGender__Male                                                              = 0,
	EZombieGender__Female                                                            = 1,
	EZombieGender__EZombieGender_MAX                                                 = 2
};

/// Class /Script/TheK24.ActivateK24PowerInteraction
/// Size: 0x0090 (0x000790 - 0x000820)
class UActivateK24PowerInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0790   (0x0008)  MISSED
	FDBDTunableRowHandle                               _interactionViewPitchMax;                                   // 0x0798   (0x0028)  
	FDBDTunableRowHandle                               _interactionViewPitchMin;                                   // 0x07C0   (0x0028)  
	FDBDTunableRowHandle                               _maximumTimeToTriggerRegularAttack;                         // 0x07E8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0810   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK24.ActivateK24PowerInteraction.SetK24Power
	// void SetK24Power(class AK24Power* K24Power);                                                                          // [0x5b1d020] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK24.Addon_K24_04
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UAddon_K24_04 : public UOnEventBaseAddon
{ 
public:
	float                                              _effectTime;                                                // 0x02C8   (0x0004)  
	FLinearColor                                       OutlineColor;                                               // 0x02CC   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02DC   (0x0004)  MISSED
};

/// Class /Script/TheK24.Addon_K24
/// Size: 0x0008 (0x0002E0 - 0x0002E8)
class UAddon_K24 : public UImposeStatusEffectOnEventAddon
{ 
public:
	class UClass*                                      _zombieEscapeDoorPointsActor;                               // 0x02E0   (0x0008)  
};

/// Class /Script/TheK24.AISkill_FindCollectable_SupplyCrate
/// Size: 0x0020 (0x0001B8 - 0x0001D8)
class UAISkill_FindCollectable_SupplyCrate : public UAISkill_FindCollectable_Searchable
{ 
public:
	FAITunableParameter                                UrgencyGoalWeight;                                          // 0x01B8   (0x0010)  
	FAITunableParameter                                OpenedWeightMultiplier;                                     // 0x01C8   (0x0010)  
};

/// Class /Script/TheK24.AISkill_InteractionUseItem_Serum
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionUseItem_Serum : public UAISkill_InteractionUseItem
{ 
public:
};

/// Class /Script/TheK24.BiteTheBullet
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UBiteTheBullet : public UPerk
{ 
public:
	class UClass*                                      _effectClass;                                               // 0x03C8   (0x0008)  
	class ADBDPlayer*                                  _server_healTarget;                                         // 0x03D0   (0x0008)  
};

/// Class /Script/TheK24.BiteTheBulletEffect
/// Size: 0x0008 (0x0003B8 - 0x0003C0)
class UBiteTheBulletEffect : public UBaseLingeringStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x03B8   (0x0008)  MISSED
};

/// Class /Script/TheK24.BlastMine
/// Size: 0x0020 (0x000448 - 0x000468)
class UBlastMine : public UGeneratorTrapPerk
{ 
public:
	class UClass*                                      _blastMinePlacerClass;                                      // 0x0448   (0x0008)  
	class UClass*                                      _blastMineFirecrackerClass;                                 // 0x0450   (0x0008)  
	class ABlastMineFirecracker*                       _blastMine;                                                 // 0x0458   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0460   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic
	// void TrapAttachedToGenerator_Cosmetic(class AGenerator* trappedGenerator);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic
	// void ThrowBubbleIndicator_Cosmetic(FTransform Location);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/TheK24.BlastMine.Client_TrapActivatedLoudNotification
	// void Client_TrapActivatedLoudNotification(FTransform Location);                                                       // [0x5b1cc50] Final|Net|NetReliableNative|Event|Private|HasDefaults|NetClient 
};

/// Class /Script/TheK24.BlastMineFirecracker
/// Size: 0x0080 (0x000390 - 0x000410)
class ABlastMineFirecracker : public AFirecracker
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0390   (0x0030)  MISSED
	SDK_UNDEFINED(16,5093) /* FMulticastInlineDelegate */ __um(OnTrapRemovedBlueprintEvent);                       // 0x03C0   (0x0010)  
	class AGenerator*                                  _trappedGenerator;                                          // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x03D8   (0x0008)  MISSED
	class USimpleStateMachine*                         _stateMachine;                                              // 0x03E0   (0x0008)  
	class UBlastMineKickSensor*                        _kickSensor;                                                // 0x03E8   (0x0008)  
	class UBlastMineVisibilityController*              _visibilityController;                                      // 0x03F0   (0x0008)  
	float                                              _lifetime;                                                  // 0x03F8   (0x0004)  
	int32_t                                            _authority_ExplosionCount;                                  // 0x03FC   (0x0004)  
	FName                                              _authority_CurrentState;                                    // 0x0400   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x040C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK24.BlastMineFirecracker.OnTrapRemovedBlueprintEvent__DelegateSignature
	// void OnTrapRemovedBlueprintEvent__DelegateSignature(EBlastMineRemovedReason removedReason);                           // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheK24.BlastMineFirecracker.OnRep_Lifetime
	// void OnRep_Lifetime();                                                                                                // [0x5b1d000] Final|Native|Private 
	// Function /Script/TheK24.BlastMineFirecracker.OnRep_AuthorityExplosionCount
	// void OnRep_AuthorityExplosionCount();                                                                                 // [0x5b1cfa0] Final|Native|Private 
	// Function /Script/TheK24.BlastMineFirecracker.OnRep_AuthorityCurrentState
	// void OnRep_AuthorityCurrentState();                                                                                   // [0x5b1cf80] Final|Native|Private 
};

/// Class /Script/TheK24.BlastMineKickSensor
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UBlastMineKickSensor : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FFloatRange                                        _kickChargeTriggerRange;                                    // 0x00D0   (0x0010)  
	class ASlasherPlayer*                              _kickingKiller;                                             // 0x00E0   (0x0008)  
	class UChargeableComponent*                        _kickGeneratorChargeable;                                   // 0x00E8   (0x0008)  
	class AGenerator*                                  _generator;                                                 // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00F8   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK24.BlastMineKickSensor.Authority_OnKickChargeablePercentChanged
	// void Authority_OnKickChargeablePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5b1c990] Final|Native|Private 
};

/// Class /Script/TheK24.BlastMineState_Explode
/// Size: 0x0028 (0x000048 - 0x000070)
class UBlastMineState_Explode : public USimpleStateMachineBaseState
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0048   (0x0028)  MISSED
};

/// Class /Script/TheK24.BlastMineTransition_ExplodeToHidden
/// Size: 0x0000 (0x000050 - 0x000050)
class UBlastMineTransition_ExplodeToHidden : public USimpleStateMachineBaseTransition
{ 
public:
};

/// Class /Script/TheK24.BlastMineState_Hidden
/// Size: 0x0018 (0x000048 - 0x000060)
class UBlastMineState_Hidden : public USimpleStateMachineBaseState
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Class /Script/TheK24.BlastMineTransition_HiddenToSpawned
/// Size: 0x0000 (0x000050 - 0x000050)
class UBlastMineTransition_HiddenToSpawned : public USimpleStateMachineBaseTransition
{ 
public:
};

/// Class /Script/TheK24.BlastMineState_Spawned
/// Size: 0x0058 (0x000048 - 0x0000A0)
class UBlastMineState_Spawned : public USimpleStateMachineBaseState
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0048   (0x0058)  MISSED
};

/// Class /Script/TheK24.BlastMineTransition_SpawnedToExplode
/// Size: 0x0000 (0x000050 - 0x000050)
class UBlastMineTransition_SpawnedToExplode : public USimpleStateMachineBaseTransition
{ 
public:
};

/// Class /Script/TheK24.BlastMineTransition_SpawnedToHidden
/// Size: 0x0000 (0x000050 - 0x000050)
class UBlastMineTransition_SpawnedToHidden : public USimpleStateMachineBaseTransition
{ 
public:
};

/// Class /Script/TheK24.BlastMineVisibilityController
/// Size: 0x0118 (0x0000B8 - 0x0001D0)
class UBlastMineVisibilityController : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x00B8   (0x0070)  MISSED
	SDK_UNDEFINED(80,5094) /* TSet<UFXSystemComponent*> */ __um(_systems);                                         // 0x0128   (0x0050)  
	SDK_UNDEFINED(80,5095) /* TSet<UMeshComponent*> */ __um(_meshes);                                              // 0x0178   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.BlastMineVisibilityController.IsVisible
	// bool IsVisible();                                                                                                     // [0x5b1cda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.BlastMineVisibilityController.AddMeshComponent
	// void AddMeshComponent(class UMeshComponent* MeshComponent);                                                           // [0x5b1c870] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK24.BlastMineVisibilityController.AddFXSystem
	// void AddFXSystem(class UFXSystemComponent* System);                                                                   // [0x5b1c7e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK24.BlindZombieFlashlightableLightingStrategy
/// Size: 0x0000 (0x000040 - 0x000040)
class UBlindZombieFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{ 
public:
};

/// Class /Script/TheK24.BTTask_MoveToAbortIfStuck
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UBTTask_MoveToAbortIfStuck : public UBTTask_MoveTo
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x00C0   (0x0004)  MISSED
	float                                              _deltaConsideredStuck;                                      // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00C8   (0x000C)  MISSED
	float                                              _maxTimeStuck;                                              // 0x00D4   (0x0004)  
};

/// Class /Script/TheK24.ChangeZombieStateBTTask
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UChangeZombieStateBTTask : public UBTTask_BlueprintBase
{ 
public:
	EZombieState                                       _zombieState;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/TheK24.ContaminationSerumCollectable
/// Size: 0x0018 (0x000510 - 0x000528)
class AContaminationSerumCollectable : public ABaseCamperCollectable
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0510   (0x0018)  MISSED
};

/// Class /Script/TheK24.ContaminationSubAnimInstance
/// Size: 0x0070 (0x000550 - 0x0005C0)
class UContaminationSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isContaminated;                                            // 0x0550   (0x0001)  
	bool                                               _isInjectingSerumSelf;                                      // 0x0551   (0x0001)  
	bool                                               _isInjectingSerumOther;                                     // 0x0552   (0x0001)  
	bool                                               _isBeingInjectedWithSerum;                                  // 0x0553   (0x0001)  
	bool                                               _isBeingHealed;                                             // 0x0554   (0x0001)  
	bool                                               _isFirstContaminationHit;                                   // 0x0555   (0x0001)  
	bool                                               _triggerCough;                                              // 0x0556   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0557   (0x0001)  MISSED
	float                                              _timeBetweenCough;                                          // 0x0558   (0x0004)  
	bool                                               _isIdle;                                                    // 0x055C   (0x0001)  
	bool                                               _isCrouched;                                                // 0x055D   (0x0001)  
	bool                                               _isInsideCloset;                                            // 0x055E   (0x0001)  
	bool                                               _isInteracting;                                             // 0x055F   (0x0001)  
	bool                                               _isHoldingAimItem;                                          // 0x0560   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0561   (0x0001)  
	bool                                               _isHooked;                                                  // 0x0562   (0x0001)  
	bool                                               _isDead;                                                    // 0x0563   (0x0001)  
	bool                                               _isFrightScreaming;                                         // 0x0564   (0x0001)  
	bool                                               _isHoldingSmallItem;                                        // 0x0565   (0x0001)  
	bool                                               _isUsingAimItem;                                            // 0x0566   (0x0001)  
	bool                                               _isHoldingHandleItem;                                       // 0x0567   (0x0001)  
	bool                                               _isInjured;                                                 // 0x0568   (0x0001)  
	bool                                               _isCarried;                                                 // 0x0569   (0x0001)  
	EInteractionAnimation                              _interactionType;                                           // 0x056A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x55];                                      // 0x056B   (0x0055)  MISSED
};

/// Class /Script/TheK24.Counterforce
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UCounterforce : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x03C8   (0x0004)  MISSED
	float                                              _totemAuraVisibleDuration;                                  // 0x03CC   (0x000C)  
	float                                              _startingTotemCleanseSpeedBonus;                            // 0x03D8   (0x000C)  
	float                                              _stackableTotemCleanseSpeedBonus;                           // 0x03E4   (0x000C)  


	/// Functions
	// Function /Script/TheK24.Counterforce.Multicast_ShowTotemAura
	// void Multicast_ShowTotemAura(class ATotem* Totem);                                                                    // [0x501b930] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK24.EnvQueryContext_ZombiePatrolAreaPoint
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_ZombiePatrolAreaPoint : public UEnvQueryContext
{ 
public:
};

/// Class /Script/TheK24.Eruption
/// Size: 0x0050 (0x0003C8 - 0x000418)
class UEruption : public UPerk
{ 
public:
	TArray<class AGenerator*>                          _server_affectedGenerators;                                 // 0x03C8   (0x0010)  
	bool                                               _isPerkEnabled;                                             // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03D9   (0x0003)  MISSED
	float                                              _generatorRegressPercentage;                                // 0x03DC   (0x000C)  
	float                                              _survivorImposedStatusEffectDuration;                       // 0x03E8   (0x000C)  
	float                                              _perkCooldownDuration;                                      // 0x03F4   (0x000C)  
	float                                              _screamRevealLocationDuration;                              // 0x0400   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0404   (0x0004)  MISSED
	class UClass*                                      _survivorEffectClass;                                       // 0x0408   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0410   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.Eruption.Multicast_TriggerPerk
	// void Multicast_TriggerPerk(TArray<AGenerator*> explodingGenerators);                                                  // [0x5020b90] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK24.Eruption.Multicast_HighlightGenerator
	// void Multicast_HighlightGenerator(class AGenerator* Generator);                                                       // [0x5869f30] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK24.Eruption.GetSurvivorImposedStatusEffectDurationAtLevel
	// float GetSurvivorImposedStatusEffectDurationAtLevel();                                                                // [0x500a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.Eruption.GetScreamRevealLocationDuration
	// float GetScreamRevealLocationDuration();                                                                              // [0x5b1cd70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.Eruption.GetGeneratorRegressPercentageAtLevel
	// float GetGeneratorRegressPercentageAtLevel();                                                                         // [0x50230e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart
	// void Cosmetic_OnGeneratorHighlightStart(class AGenerator* highlightedGenerator);                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd
	// void Cosmetic_OnGeneratorHighlightEnd(class AGenerator* highlightedGenerator);                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK24.EruptionIconStrategy
/// Size: 0x0000 (0x000038 - 0x000038)
class UEruptionIconStrategy : public UBasePerkIconStrategy
{ 
public:
};

/// Class /Script/TheK24.Flashbang
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UFlashbang : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x03C8   (0x0010)  MISSED
	class AGenerator*                                  _generatorBeingRepaired;                                    // 0x03D8   (0x0008)  
	float                                              _generatorsRepairTargetProgression;                         // 0x03E0   (0x0004)  
	float                                              _generatorRepairPercentToCraftFlashbang;                    // 0x03E4   (0x000C)  


	/// Functions
	// Function /Script/TheK24.Flashbang.OnRep_GeneratorsRepairProgress
	// void OnRep_GeneratorsRepairProgress();                                                                                // [0x5b1cfe0] Final|Native|Private 
	// Function /Script/TheK24.Flashbang.GetGeneratorRepairPercentToCraftFlashbangAtLevel
	// float GetGeneratorRepairPercentToCraftFlashbangAtLevel();                                                             // [0x500a890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved
	// void Cosmetic_OnGeneratorRepairProgressionTargetAchieved();                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved
	// void Client_OnGeneratorRepairProgressionTargetAchieved();                                                             // [0x501b910] Final|Net|Native|Event|Private|NetClient 
	// Function /Script/TheK24.Flashbang.Authority_OnRepairProgressApplied
	// void Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime); // [0x5b1caa0] Final|Native|Private 
};

/// Class /Script/TheK24.GeneratorBlastMinePlacerComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UGeneratorBlastMinePlacerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	float                                              _mineRelativeHeightFromGenerator;                           // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class ABlastMineFirecracker*                       _blastMine;                                                 // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/TheK24.GeneratorBlastMinePlacerComponent.OnRep_BlastMine
	// void OnRep_BlastMine();                                                                                               // [0x5b1cfc0] Final|Native|Private 
};

/// Class /Script/TheK24.Hysteria
/// Size: 0x0078 (0x0003C8 - 0x000440)
class UHysteria : public UPerk
{ 
public:
	float                                              _obliviousEffectDuration;                                   // 0x03C8   (0x000C)  
	float                                              _perkCooldownDuration;                                      // 0x03D4   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x03E0   (0x0008)  MISSED
	class UClass*                                      _obliviousEffectClass;                                      // 0x03E8   (0x0008)  
	SDK_UNDEFINED(80,5096) /* TMap<ACamperPlayer*, UHysteriaObliviousEffect*> */ __um(_obliviousEffectPerSurvivorMap); // 0x03F0   (0x0050)  


	/// Functions
	// Function /Script/TheK24.Hysteria.GetPerkCooldownDurationAtLevel
	// float GetPerkCooldownDurationAtLevel();                                                                               // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.Hysteria.GetObliviousEffectDurationAtLevel
	// float GetObliviousEffectDurationAtLevel();                                                                            // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK24.HysteriaObliviousEffect
/// Size: 0x0000 (0x000360 - 0x000360)
class UHysteriaObliviousEffect : public UTimedObliviousEffect
{ 
public:
};

/// Class /Script/TheK24.InClosetFlashbangItemCraftInteraction
/// Size: 0x0000 (0x000670 - 0x000670)
class UInClosetFlashbangItemCraftInteraction : public UItemCraftInteraction
{ 
public:
};

/// Class /Script/TheK24.IncreaseZombiesSpeedStatusEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UIncreaseZombiesSpeedStatusEffect : public UStatusEffect
{ 
public:
	float                                              _zombieSpeedAdditive;                                       // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0354   (0x0004)  MISSED
};

/// Class /Script/TheK24.InjectSerumInteraction
/// Size: 0x00C0 (0x000790 - 0x000850)
class UInjectSerumInteraction : public UChargeableInteractionDefinition
{ 
public:
	FTunableStat                                       _injectSerumKillerInstinctTime;                             // 0x0788   (0x0080)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0808   (0x0008)  MISSED
	FGameplayTag                                       _scoreEvent;                                                // 0x0810   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x081C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _serumApplyHeal;                                            // 0x0820   (0x0028)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0848   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic
	// void OnSurvivorCured_Cosmetic();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.InjectSerumInteraction.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5b1cef0] Final|Native|Private 
	// Function /Script/TheK24.InjectSerumInteraction.GetInjectionTarget
	// class ACamperPlayer* GetInjectionTarget();                                                                            // [0x5b1cd40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.InjectSerumInteraction.Authority_CureSurvivor
	// void Authority_CureSurvivor(class ACamperPlayer* CamperPlayer);                                                       // [0x5b1c900] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheK24.InjectSerumOther
/// Size: 0x0000 (0x000850 - 0x000850)
class UInjectSerumOther : public UInjectSerumInteraction
{ 
public:
};

/// Class /Script/TheK24.InjectSerumSelf
/// Size: 0x0000 (0x000850 - 0x000850)
class UInjectSerumSelf : public UInjectSerumInteraction
{ 
public:
};

/// Class /Script/TheK24.K24AnimInstance
/// Size: 0x0020 (0x000610 - 0x000630)
class UK24AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isInPowerMode;                                             // 0x0610   (0x0001)  
	bool                                               _isChargingPower;                                           // 0x0611   (0x0001)  
	bool                                               _isK24PowerAttacking;                                       // 0x0612   (0x0001)  
	bool                                               _isRequestingPowerAttack;                                   // 0x0613   (0x0001)  
	int32_t                                            _powerLevel;                                                // 0x0614   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0618   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK24.K24AnimInstance.OnKillerPowerLevelChanged
	// void OnKillerPowerLevelChanged(int32_t powerlevel);                                                                   // [0x5b1ce60] Final|Native|Private 
};

/// Class /Script/TheK24.K24CharacterFXComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UK24CharacterFXComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5097) /* FMulticastInlineDelegate */ __um(OnPowerLevelChangedFx);                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,5098) /* FMulticastInlineDelegate */ __um(Local_OnKillerHitZombie);                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,5099) /* FMulticastInlineDelegate */ __um(Local_OnKillerContaminatedSurvivor);                // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00E8   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged
	// void Local_OnKillerPowerLevelChanged(int32_t powerlevel);                                                             // [0x5b1cdd0] Final|Native|Private 
};

/// Class /Script/TheK24.K24CheatComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UK24CheatComponent : public UActorComponent
{ 
public:
	class UClass*                                      _zombieManagementClass;                                     // 0x00B8   (0x0008)  
	class AZombiesManagement*                          _zombiesManagement;                                         // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/TheK24.K24CheatComponent.DBD_TeleportZombiesTo
	// void DBD_TeleportZombiesTo(float X, float Y, float Z);                                                                // [0x5b20730] Final|Exec|Native|Public 
	// Function /Script/TheK24.K24CheatComponent.DBD_K24ZombieFall
	// void DBD_K24ZombieFall(float Zvalue);                                                                                 // [0x49bd730] Final|Exec|Native|Public 
	// Function /Script/TheK24.K24CheatComponent.DBD_K24StopAllZombies
	// void DBD_K24StopAllZombies();                                                                                         // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK24.K24CheatComponent.DBD_K24StartAllZombies
	// void DBD_K24StartAllZombies();                                                                                        // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller
	// void DBD_K24SpawnZombieOnKiller();                                                                                    // [0x5b20710] Final|Exec|Native|Public 
	// Function /Script/TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints
	// void DBD_K24SetPowerLevelPoints(float value);                                                                         // [0x49bd730] Final|Exec|Native|Public 
	// Function /Script/TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor
	// void DBD_K24SetContaminationOnSurvivor(bool value);                                                                   // [0x5818260] Final|Exec|Native|Public 
	// Function /Script/TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies
	// void DBD_K24ComeToMeMyZombies();                                                                                      // [0x45fe020] Final|Exec|Native|Public 
};

/// Class /Script/TheK24.K24PounceAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UK24PounceAttack : public UPounceAttack
{ 
public:


	/// Functions
	// Function /Script/TheK24.K24PounceAttack.Server_HitZombie
	// void Server_HitZombie(class AZombieCharacter* zombie, float TargetLocationTimestamp);                                 // [0x5b20d40] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Class /Script/TheK24.K24Power
/// Size: 0x0428 (0x0004C8 - 0x0008F0)
class AK24Power : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x04C8   (0x0088)  MISSED
	FDBDTunableRowHandle                               _powerWalkSpeed;                                            // 0x0550   (0x0028)  
	FDBDTunableRowHandle                               _powerWalkSpeedLevel3;                                      // 0x0578   (0x0028)  
	FDBDTunableRowHandle                               _normalWalkSpeed;                                           // 0x05A0   (0x0028)  
	FDBDTunableRowHandle                               _powerMouseYawScale;                                        // 0x05C8   (0x0028)  
	FDBDTunableRowHandle                               _powerYawAdjustTime;                                        // 0x05F0   (0x0028)  
	FDBDTunableRowHandle                               _powerGamePadYawScale;                                      // 0x0618   (0x0028)  
	class UChargeableComponent*                        _activateK24PowerCharge;                                    // 0x0640   (0x0008)  
	FDBDTunableRowHandle                               _activateK24PowerSecondsToCharge;                           // 0x0648   (0x0028)  
	class UCurveFloat*                                 _activatePowerChargeSpeedCurve;                             // 0x0670   (0x0008)  
	class UCurveFloat*                                 _activatePowerChargeLvl3SpeedCurve;                         // 0x0678   (0x0008)  
	class UCurveFloat*                                 _playedPowerChargeSpeedCurve;                               // 0x0680   (0x0008)  
	class UInteractionDefinition*                      _k24PowerCooldownInteraction;                               // 0x0688   (0x0008)  
	FDBDTunableRowHandle                               _whipLengthLevel1;                                          // 0x0690   (0x0028)  
	FDBDTunableRowHandle                               _whipLengthLevel2;                                          // 0x06B8   (0x0028)  
	FDBDTunableRowHandle                               _whipLengthLevel3;                                          // 0x06E0   (0x0028)  
	class UClass*                                      _contaminationComponentBP;                                  // 0x0708   (0x0008)  
	FTunableStat                                       _powerChargeSurvivorContaminatedPoint;                      // 0x0710   (0x0080)  
	FTunableStat                                       _powerChargeZombieKilledPoint;                              // 0x0790   (0x0080)  
	FTunableStat                                       _powerChargeSurvivorHitPoint;                               // 0x0810   (0x0080)  
	float                                              _powerLevelPoints;                                          // 0x0890   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0894   (0x0004)  MISSED
	FDBDTunableRowHandle                               _powerLevelPointsToLevel2;                                  // 0x0898   (0x0028)  
	FDBDTunableRowHandle                               _powerLevelPointsToLevel3;                                  // 0x08C0   (0x0028)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x08E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.K24Power.WhipAttackStart_Cosmetic
	// void WhipAttackStart_Cosmetic();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK24.K24Power.WhipAttackMove_Cosmetic
	// void WhipAttackMove_Cosmetic(FVector whipStartLocation, FVector whipEndLocation, bool isFirstRayCast);                // [0x61c32d0] BlueprintCosmetic|Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/TheK24.K24Power.WhipAttackHit_Cosmetic
	// void WhipAttackHit_Cosmetic(FVector whipStartLocation, FVector impactPointLocation, FVector whipEndLocation, bool isFirstHit, FVector ImpactNormal, FName phyMaterial, bool hitACharacter); // [0x61c32d0] BlueprintCosmetic|Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/TheK24.K24Power.WhipAttackEnd_Cosmetic
	// void WhipAttackEnd_Cosmetic();                                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK24.K24Power.Server_PowerDestroyPallet
	// void Server_PowerDestroyPallet(class APallet* Pallet);                                                                // [0x5b20f80] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK24.K24Power.Server_PowerDestroyBreakable
	// void Server_PowerDestroyBreakable(class ABreakableBase* breakable);                                                   // [0x5b20ef0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK24.K24Power.Server_KillAZombie
	// void Server_KillAZombie(class AZombieCharacter* zombie, EAttackType attackType);                                      // [0x5b20e20] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK24.K24Power.PowerHitStateEnd_Cosmetic
	// void PowerHitStateEnd_Cosmetic(FVector whipStartLocation, FVector whipEndLocation);                                   // [0x61c32d0] BlueprintCosmetic|Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/TheK24.K24Power.PowerCooldownEnd_Cosmetic
	// void PowerCooldownEnd_Cosmetic();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK24.K24Power.OnRep_PowerLevelPoints
	// void OnRep_PowerLevelPoints();                                                                                        // [0x5b20b90] Final|Native|Private 
	// Function /Script/TheK24.K24Power.OnPowerStop_Cosmetic
	// void OnPowerStop_Cosmetic();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.K24Power.OnPowerStartCharge_Cosmetic
	// void OnPowerStartCharge_Cosmetic();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.K24Power.OnPowerLevelChanged_Cosmetic
	// void OnPowerLevelChanged_Cosmetic(int32_t powerlevel);                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.K24Power.Multicast_PowerDestroyPallet
	// void Multicast_PowerDestroyPallet(class APallet* Pallet);                                                             // [0x5b209d0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK24.K24Power.Multicast_PowerDestroyBreakable
	// void Multicast_PowerDestroyBreakable(class ABreakableBase* breakable);                                                // [0x5087b00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK24.K24Power.IsInPower
	// bool IsInPower();                                                                                                     // [0x5b20980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.K24Power.GetWhipLength
	// float GetWhipLength();                                                                                                // [0x5b20880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.K24Power.GetPowerLevel
	// int32_t GetPowerLevel();                                                                                              // [0x5b20850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.K24Power.Authority_OnSurvivorContaminated
	// void Authority_OnSurvivorContaminated(EContaminator contaminator);                                                    // [0x5b20420] Final|Native|Public  
};

/// Class /Script/TheK24.K24PowerAnimInstance
/// Size: 0x0160 (0x0002C0 - 0x000420)
class UK24PowerAnimInstance : public UAnimInstance
{ 
public:
	class ASlasherPlayer*                              _owningKiller;                                              // 0x02C0   (0x0008)  
	bool                                               _isInPowerMode;                                             // 0x02C8   (0x0001)  
	bool                                               _isChargingPower;                                           // 0x02C9   (0x0001)  
	bool                                               _isK24PowerAttacking;                                       // 0x02CA   (0x0001)  
	bool                                               _isRequestingPowerAttack;                                   // 0x02CB   (0x0001)  
	float                                              _tentacleLength;                                            // 0x02CC   (0x0004)  
	bool                                               _isFirstPersonView;                                         // 0x02D0   (0x0001)  
	EAttackSubstate                                    _attackSubstate;                                            // 0x02D1   (0x0001)  
	bool                                               _isIntroCompleted;                                          // 0x02D2   (0x0001)  
	bool                                               _isLevelReadyToPlay;                                        // 0x02D3   (0x0001)  
	int32_t                                            _powerLevel;                                                // 0x02D4   (0x0004)  
	float                                              _forwardVelocity;                                           // 0x02D8   (0x0004)  
	float                                              _lateralVelocity;                                           // 0x02DC   (0x0004)  
	bool                                               _isIdle;                                                    // 0x02E0   (0x0001)  
	bool                                               _isKilling;                                                 // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02E2   (0x0006)  MISSED
	class UAnimSequence*                               _swingIdleTPVSequences;                                     // 0x02E8   (0x0018)  
	class UAnimSequence*                               _wipeIdleTPVSequences;                                      // 0x0300   (0x0018)  
	class UAnimSequence*                               _missIdleTPVSequences;                                      // 0x0318   (0x0018)  
	class UAnimSequence*                               _bowIdleTPVSequences;                                       // 0x0330   (0x0018)  
	class UAnimSequence*                               _swingIdleTPVSequence;                                      // 0x0348   (0x0008)  
	class UAnimSequence*                               _wipeIdleTPVSequence;                                       // 0x0350   (0x0008)  
	class UAnimSequence*                               _missIdleTPVSequence;                                       // 0x0358   (0x0008)  
	class UAnimSequence*                               _bowIdleTPVSequence;                                        // 0x0360   (0x0008)  
	class UAnimSequence*                               _swingLocoTPVSequence;                                      // 0x0368   (0x0008)  
	class UAnimSequence*                               _wipeLocoTPVSequence;                                       // 0x0370   (0x0008)  
	class UAnimSequence*                               _missLocoTPVSequence;                                       // 0x0378   (0x0008)  
	class UAnimSequence*                               _bowLocoTPVSequence;                                        // 0x0380   (0x0008)  
	class UAnimSequence*                               _swingFPVSequences;                                         // 0x0388   (0x0018)  
	class UAnimSequence*                               _wipeFPVSequences;                                          // 0x03A0   (0x0018)  
	class UAnimSequence*                               _missFPVSequences;                                          // 0x03B8   (0x0018)  
	class UAnimSequence*                               _bowFPVSequences;                                           // 0x03D0   (0x0018)  
	class UAnimSequence*                               _swingFPVSequence;                                          // 0x03E8   (0x0008)  
	class UAnimSequence*                               _wipeFPVSequence;                                           // 0x03F0   (0x0008)  
	class UAnimSequence*                               _missFPVSequence;                                           // 0x03F8   (0x0008)  
	class UAnimSequence*                               _bowFPVSequence;                                            // 0x0400   (0x0008)  
	class AK24Power*                                   _k24Power;                                                  // 0x0408   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0410   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK24.K24PowerAnimInstance.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5b20b10] Final|Native|Private 
	// Function /Script/TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged
	// void OnKillerPowerLevelChanged(int32_t powerlevel);                                                                   // [0x5b20a80] Final|Native|Private 
	// Function /Script/TheK24.K24PowerAnimInstance.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5b20a60] Final|Native|Private 
};

/// Class /Script/TheK24.k24PowerCooldownInteraction
/// Size: 0x0040 (0x000650 - 0x000690)
class Uk24PowerCooldownInteraction : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _k24PowerCooldownTime;                                      // 0x0648   (0x0028)  
	class UCurveFloat*                                 _cooldownSpeedCurve;                                        // 0x0670   (0x0008)  
	class UCurveFloat*                                 _cooldownLvl3SpeedCurve;                                    // 0x0678   (0x0008)  
	class UCurveFloat*                                 _playedCooldownSpeedCurve;                                  // 0x0680   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0688   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.k24PowerCooldownInteraction.SetK24Power
	// void SetK24Power(class AK24Power* K24Power);                                                                          // [0x5b21010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK24.K24PowerPresentationItemProgressComponent
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UK24PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class AK24Power*                                   _k24Power;                                                  // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/TheK24.K24PowerPresentationItemProgressComponent.SetK24Power
	// void SetK24Power(class AK24Power* K24Power);                                                                          // [0x57ebc00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK24.K24SlashAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UK24SlashAttack : public UK24PounceAttack
{ 
public:
};

/// Class /Script/TheK24.K24WhipAttack
/// Size: 0x0070 (0x000390 - 0x000400)
class UK24WhipAttack : public UPounceAttack
{ 
public:
	FDBDTunableRowHandle                               _attackSphereTraceRadius;                                   // 0x0390   (0x0028)  
	FDBDTunableRowHandle                               _attackMinDistanceToObstruction;                            // 0x03B8   (0x0028)  
	FVector                                            _whipMovementFromOffset;                                    // 0x03E0   (0x000C)  
	FVector                                            _whipMovementToOffset;                                      // 0x03EC   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.K24WhipAttack.Server_HitBreakableOrZombie
	// void Server_HitBreakableOrZombie();                                                                                   // [0x5b20d20] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK24.K24WhipAttack.Server_ContaminatePlayer
	// void Server_ContaminatePlayer(class ACamperPlayer* Target, float TargetLocationTimestamp);                            // [0x5b20c40] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheK24.K24WhipAttack.Client_ContaminationResult
	// void Client_ContaminationResult(class ADBDPlayer* Target, bool IsValid);                                              // [0x5b20640] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/TheK24.K24WhipAttackOpenSubstate
/// Size: 0x0008 (0x000130 - 0x000138)
class UK24WhipAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
	class UCurveFloat*                                 _lvl3SpeedCurve;                                            // 0x0130   (0x0008)  
};

/// Class /Script/TheK24.K24WhipAttackHittingSubstate
/// Size: 0x00C0 (0x0001A0 - 0x000260)
class UK24WhipAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
	FDBDTunableRowHandle                               _attackSphereTraceRadius;                                   // 0x01A0   (0x0028)  
	FDBDTunableRowHandle                               _powerAttackBreakObjectLevel;                               // 0x01C8   (0x0028)  
	FDBDTunableRowHandle                               _powerCanBreakObjectAfterAPlayerDamage;                     // 0x01F0   (0x0028)  
	FVector                                            _whipMovementFromOffset;                                    // 0x0218   (0x000C)  
	FVector                                            _whipMovementToOffset;                                      // 0x0224   (0x000C)  
	class UCurveFloat*                                 _whipMovementCurve;                                         // 0x0230   (0x0008)  
	class UCurveFloat*                                 _lvl3SpeedCurve;                                            // 0x0238   (0x0008)  
	float                                              _whipGroundDetectionOffset;                                 // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0244   (0x001C)  MISSED
};

/// Class /Script/TheK24.K24WhipAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UK24WhipAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheK24.K24WhipAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UK24WhipAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheK24.K24WhipAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UK24WhipAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheK24.LethalPursuer
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class ULethalPursuer : public UPerk
{ 
public:
	float                                              _survivorRevealDuration;                                    // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _timedRevealEffect;                                         // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/TheK24.LethalPursuer.Server_ActivatePerk
	// void Server_ActivatePerk();                                                                                           // [0x501b910] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK24.LethalPursuer.Local_OnIntroCompleted
	// void Local_OnIntroCompleted();                                                                                        // [0x5b209b0] Final|Native|Private 
	// Function /Script/TheK24.LethalPursuer.GetSurvivorRevealDurationAtLevel
	// float GetSurvivorRevealDurationAtLevel();                                                                             // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK24.Resurgence
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UResurgence : public UPerk
{ 
public:
	float                                              _healRegainPercentage;                                      // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
};

/// Class /Script/TheK24.RookieSpirit
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class URookieSpirit : public UPerk
{ 
public:
	int32_t                                            _numberOfGreatSkillChecksOnGeneratorRepair;                 // 0x03C8   (0x0004)  
	int32_t                                            _numberOfGeneratorRepairGreatSkillChecksRequired;           // 0x03CC   (0x000C)  


	/// Functions
	// Function /Script/TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair
	// void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();                                                               // [0x5b20b70] Final|Native|Private 
	// Function /Script/TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged
	// void HandleGeneratorIsDamagedChanged(class AGenerator* Generator, class ADBDPlayer* Player);                          // [0x5b208b0] Final|Native|Private 
};

/// Class /Script/TheK24.SupplyCrateOutlineUpdateStrategy
/// Size: 0x0000 (0x000100 - 0x000100)
class USupplyCrateOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/TheK24.SurvivorContaminationComponent
/// Size: 0x0150 (0x0000B8 - 0x000208)
class USurvivorContaminationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FTagStateBool                                      _isContaminated;                                            // 0x00D0   (0x0030)  
	class UChargeableComponent*                        _injectSerumChargeable;                                     // 0x0100   (0x0008)  
	FDBDTunableRowHandle                               _injectSerumSecondsToCharge;                                // 0x0108   (0x0028)  
	class UClass*                                      _hinderedEffect;                                            // 0x0130   (0x0008)  
	FTunableStat                                       _contaminationHinderedSeconds;                              // 0x0138   (0x0080)  
	FDBDTunableRowHandle                               _contaminationHinderedValue;                                // 0x01B8   (0x0028)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01E0   (0x0008)  MISSED
	TArray<class UClass*>                              _injectSerumInteractionsClasses;                            // 0x01E8   (0x0010)  
	TArray<class UInteractionDefinition*>              _injectSerumInteractions;                                   // 0x01F8   (0x0010)  


	/// Functions
	// Function /Script/TheK24.SurvivorContaminationComponent.OnRep_IsContaminated
	// void OnRep_IsContaminated();                                                                                          // [0x5b20b50] Final|Native|Private 
	// Function /Script/TheK24.SurvivorContaminationComponent.OnRep_InjectSerumInteractions
	// void OnRep_InjectSerumInteractions();                                                                                 // [0x5b20b30] Final|Native|Private 
	// Function /Script/TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic
	// void OnContaminationCured_Cosmetic();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic
	// void OnContaminated_SFX_Stinger_Cosmetic();                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic
	// void OnContaminated_Cosmetic(EContaminator contaminator);                                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic
	// void Multicast_OnContaminated_Cosmetic(EContaminator contaminator);                                                   // [0x58190a0] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK24.SurvivorContaminationComponent.IsContaminated
	// bool IsContaminated();                                                                                                // [0x57f10f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK24.TheK24Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UTheK24Utilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/TheK24.ZombieAcquirePatrolAreaBTService
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UZombieAcquirePatrolAreaBTService : public UBTService_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombieAcquireTargetBTService
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UZombieAcquireTargetBTService : public UBTService_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombieAIController
/// Size: 0x02F0 (0x000340 - 0x000630)
class AZombieAIController : public AAIController
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0340   (0x0018)  MISSED
	class UBehaviorTree*                               _zombieBehaviorTree;                                        // 0x0358   (0x0008)  
	class UAIPerceptionComponent*                      _aiPerceptionComponent;                                     // 0x0360   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0368   (0x0008)  MISSED
	TArray<class ACamperPlayer*>                       _survivorInVision;                                          // 0x0370   (0x0010)  
	class ACamperPlayer*                               _chaseTargetSurvivor;                                       // 0x0380   (0x0008)  
	FVector                                            _goToLocation;                                              // 0x0388   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0394   (0x0004)  MISSED
	class AMeatHook*                                   _patrolArea;                                                // 0x0398   (0x0008)  
	TArray<class ACamperPlayer*>                       _survivorsInAttackDetector;                                 // 0x03A0   (0x0010)  
	TArray<FGameplayTag>                               _cannotChaseWhileIdleTags;                                  // 0x03B0   (0x0010)  
	FDBDTunableRowHandle                               _zombieAttackHitTime;                                       // 0x03C0   (0x0028)  
	FDBDTunableRowHandle                               _zombieAttackOpenTime;                                      // 0x03E8   (0x0028)  
	FDBDTunableRowHandle                               _zombieAnimSpawnTime;                                       // 0x0410   (0x0028)  
	FDBDTunableRowHandle                               _zombieAnimDyingTime;                                       // 0x0438   (0x0028)  
	FTunableStat                                       _zombieSightRadius;                                         // 0x0460   (0x0080)  
	FTunableStat                                       _zombieLoseSightRadius;                                     // 0x04E0   (0x0080)  
	FTunableStat                                       _zombieVisionHalfAngle;                                     // 0x0560   (0x0080)  
	FDBDTunableRowHandle                               _zombieFallSmashTime;                                       // 0x05E0   (0x0028)  
	FDBDTunableRowHandle                               _zombieAttackCooldownTime;                                  // 0x0608   (0x0028)  


	/// Functions
	// Function /Script/TheK24.ZombieAIController.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* Slasher);                                                                     // [0x5b20bb0] Final|Native|Private 
	// Function /Script/TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated
	// void Authority_OnTargetPerceptionUpdated(class AActor* Actor, FAIStimulus Stimulus);                                  // [0x5b204a0] Final|Native|Private 
};

/// Class /Script/TheK24.ZombieAnimInstance
/// Size: 0x0090 (0x0002C0 - 0x000350)
class UZombieAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isChasing;                                                 // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              _chaseLocomotionPlayRate;                                   // 0x02C4   (0x0004)  
	float                                              _chaseSequenceMaxSpeed;                                     // 0x02C8   (0x0004)  
	int32_t                                            _chaseLocomotionIndex;                                      // 0x02CC   (0x0004)  
	int32_t                                            _chaseLocomotionMaxIndex;                                   // 0x02D0   (0x0004)  
	FFloatRange                                        _chaseLocomotionIndexChangeTimerDurationRange;              // 0x02D4   (0x0010)  
	bool                                               _isUsingFirstChaseLocomotionPlayer;                         // 0x02E4   (0x0001)  
	bool                                               _isAttacking;                                               // 0x02E5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x02E6   (0x0002)  MISSED
	int32_t                                            _attackIndex;                                               // 0x02E8   (0x0004)  
	int32_t                                            _maxAttackIndex;                                            // 0x02EC   (0x0004)  
	bool                                               _isPatrollingOrSearching;                                   // 0x02F0   (0x0001)  
	bool                                               _isStunned;                                                 // 0x02F1   (0x0001)  
	bool                                               _isDying;                                                   // 0x02F2   (0x0001)  
	bool                                               _isSpawning;                                                // 0x02F3   (0x0001)  
	bool                                               _isInPool;                                                  // 0x02F4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02F5   (0x0003)  MISSED
	class AZombieCharacter*                            _zombieCharacter;                                           // 0x02F8   (0x0008)  
	float                                              _speed;                                                     // 0x0300   (0x0004)  
	bool                                               _isMoving;                                                  // 0x0304   (0x0001)  
	bool                                               _isFalling;                                                 // 0x0305   (0x0001)  
	bool                                               _isMale;                                                    // 0x0306   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0307   (0x0001)  MISSED
	float                                              _currentDirection;                                          // 0x0308   (0x0004)  
	FRotator                                           _currentRotation;                                           // 0x030C   (0x000C)  
	float                                              _rotationInterpolationSpeed;                                // 0x0318   (0x0004)  
	float                                              _rotationInterpolationSpeedDuringChase;                     // 0x031C   (0x0004)  
	unsigned char                                      UnknownData04_6[0x30];                                      // 0x0320   (0x0030)  MISSED
};

/// Class /Script/TheK24.ZombieAttackSurvivorBTTask
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UZombieAttackSurvivorBTTask : public UBTTask_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombieAttractedByGeneratorBTService
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UZombieAttractedByGeneratorBTService : public UBTService_BlueprintBase
{ 
public:
	float                                              _genRepairingHearingRange;                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x00A4   (0x002C)  MISSED


	/// Functions
	// Function /Script/TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged
	// void OnInRangeChanged(bool inRange, class AGenerator* Generator);                                                     // [0x5b24060] Final|Native|Private 
};

/// Class /Script/TheK24.ZombieBlindableComponent
/// Size: 0x0008 (0x000240 - 0x000248)
class UZombieBlindableComponent : public UBlindableBaseComponent
{ 
public:
	class UGameplayTagContainerComponent*              _ownerObjectState;                                          // 0x0240   (0x0008)  
};

/// Class /Script/TheK24.ZombieBlindingFXComponent
/// Size: 0x0000 (0x000150 - 0x000150)
class UZombieBlindingFXComponent : public UKillerBlindingFXComponent
{ 
public:
};

/// Class /Script/TheK24.ZombieCharacter
/// Size: 0x0340 (0x0004D0 - 0x000810)
class AZombieCharacter : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x04D0   (0x0038)  MISSED
	FTunableStat                                       _zombieWalkSpeed;                                           // 0x0508   (0x0080)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0588   (0x0008)  MISSED
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                         // 0x0590   (0x0008)  
	class USphereComponent*                            _zombieAttackDetector;                                      // 0x0598   (0x0008)  
	class UStaticMeshComponent*                        _attackDamageZone;                                          // 0x05A0   (0x0008)  
	EZombieState                                       _zombieState;                                               // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3F];                                      // 0x05A9   (0x003F)  MISSED
	FTunableStat                                       _zombieRespawnTimeKilledBySlasher;                          // 0x05E8   (0x0080)  
	FTunableStat                                       _zombieRespawnTimeKilledBySurvivor;                         // 0x0668   (0x0080)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x06E8   (0x0008)  MISSED
	FTransform                                         _respawnPositionBehindGate;                                 // 0x06F0   (0x0030)  
	EZombieGender                                      _zombieGender;                                              // 0x0720   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0721   (0x0007)  MISSED
	class USkeletalMesh*                               _femaleSkeletalMesh;                                        // 0x0728   (0x0008)  
	SDK_UNDEFINED(16,5100) /* FString */               __um(_audioSwitchState);                                    // 0x0730   (0x0010)  
	class UZombieBlindableComponent*                   _blindableComponent;                                        // 0x0740   (0x0008)  
	class UChargeableComponent*                        _blindingChargeableComponent;                               // 0x0748   (0x0008)  
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                         // 0x0750   (0x0008)  
	class UFlashlightableComponent*                    _flashLightableComponent;                                   // 0x0758   (0x0008)  
	unsigned char                                      UnknownData05_5[0x38];                                      // 0x0760   (0x0038)  MISSED
	FDBDTunableRowHandle                               _zombieStunBaseTime;                                        // 0x0798   (0x0028)  
	class UGameplayTagContainerComponent*              _objectState;                                               // 0x07C0   (0x0008)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x07C8   (0x0008)  MISSED
	class UCharacterPositionRecorderComponent*         _positionRecorder;                                          // 0x07D0   (0x0008)  
	class UAuthoritativeMovementComponent*             _authoritativeMovementComponent;                            // 0x07D8   (0x0008)  
	class UOtherCharactersVerticalCollisionsHandler*   _otherCharactersVerticalCollisionsHandler;                  // 0x07E0   (0x0008)  
	TArray<class AActor*>                              _ignoreActors;                                              // 0x07E8   (0x0010)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x07F8   (0x0004)  MISSED
	float                                              _zombieStunnedCapsuleRadius;                                // 0x07FC   (0x0004)  
	float                                              _minFallHeight;                                             // 0x0800   (0x0004)  
	unsigned char                                      UnknownData08_5[0x8];                                       // 0x0804   (0x0008)  MISSED
	float                                              _afterInAirAttackCooldown;                                  // 0x080C   (0x0004)  


	/// Functions
	// Function /Script/TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic
	// void ZombieKilledByKiller_Cosmetic(EAttackType attackType);                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.ZombieCharacter.SetCharacterActive_Cosmetic
	// void SetCharacterActive_Cosmetic(bool value);                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic
	// void OnZombieStateChanged_Cosmetic(EZombieState ZombieState);                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.ZombieCharacter.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* Slasher);                                                                     // [0x5b241d0] Final|Native|Private 
	// Function /Script/TheK24.ZombieCharacter.OnRep_ZombieState
	// void OnRep_ZombieState(EZombieState previousState);                                                                   // [0x5b24150] Final|Native|Private 
	// Function /Script/TheK24.ZombieCharacter.OnRep_ZombieGender
	// void OnRep_ZombieGender();                                                                                            // [0x5b24130] Final|Native|Private 
	// Function /Script/TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic
	// void OnFemaleGenderSet_Cosmetic();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector
	// void OnEndOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5b23f00] Final|Native|Private 
	// Function /Script/TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector
	// void OnBeginOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5b23ce0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic
	// void Multicast_ZombieKilledByKillerCosmetic(EAttackType attackType);                                                  // [0x5b23c60] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheK24.ZombieCharacter.GetZombieGender
	// EZombieGender GetZombieGender();                                                                                      // [0x5b23c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler
	// class UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler();                       // [0x5b23c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.ZombieCharacter.GetAuthoritativeMovementComponent
	// class UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent();                                           // [0x5b23bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.ZombieCharacter.GetAudioSwitchState
	// FString GetAudioSwitchState();                                                                                        // [0x5b23b50] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK24.ZombieCharacter.Authority_OnZombieStateChanged
	// void Authority_OnZombieStateChanged(EZombieState ZombieState);                                                        // [0x5b23ad0] Final|Native|Private 
	// Function /Script/TheK24.ZombieCharacter.Authority_OnFlashlightRemoved
	// void Authority_OnFlashlightRemoved(class UFlashlightComponent* Flashlight);                                           // [0x5b23630] Final|Native|Private 
	// Function /Script/TheK24.ZombieCharacter.Authority_OnFlashlightAdded
	// void Authority_OnFlashlightAdded(class UFlashlightComponent* Flashlight);                                             // [0x5b235a0] Final|Native|Private 
	// Function /Script/TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin
	// void Authority_OnFirecrackerInRangeBegin(FFirecrackerEffectData& effectData);                                         // [0x5b23500] Final|Native|Private|HasOutParms 
	// Function /Script/TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer
	// void Authority_DeactivateZombieAndStartRespawnTimer();                                                                // [0x5b234e0] Final|Native|Private 
};

/// Class /Script/TheK24.ZombieChaseStateBTService
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UZombieChaseStateBTService : public UBTService_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombieChaseSurvivorTargetBTTask
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UZombieChaseSurvivorTargetBTTask : public UBTTask_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombieCustomizationComponent
/// Size: 0x0008 (0x000430 - 0x000438)
class UZombieCustomizationComponent : public UCustomizedSkeletalMesh
{ 
public:
	SDK_UNDEFINED(8,5101) /* TWeakObjectPtr<ACamperPlayer*> */ __um(_survivorSource);                              // 0x0430   (0x0008)  


	/// Functions
	// Function /Script/TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization
	// void Multicast_SetZombieCustomization(class ACamperPlayer* Survivor);                                                 // [0x507e2f0] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/TheK24.ZombieEscapeDoorPointsActor
/// Size: 0x0010 (0x000230 - 0x000240)
class AZombieEscapeDoorPointsActor : public AActor
{ 
public:
	TArray<class UArrowComponent*>                     _availablePoints;                                           // 0x0230   (0x0010)  
};

/// Class /Script/TheK24.ZombieEvaluateEnterChaseBTService
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UZombieEvaluateEnterChaseBTService : public UBTService_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombieEvaluteEnterAttackBTService
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UZombieEvaluteEnterAttackBTService : public UBTService_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombieFallDetectorComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UZombieFallDetectorComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _zombieDistanceConsideredSmashFall;                         // 0x00B8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange
	// void Authority_OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x5b239c0] Final|Native|Private 
};

/// Class /Script/TheK24.ZombieOutlineUpdateStrategy
/// Size: 0x0008 (0x000158 - 0x000160)
class UZombieOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
	class AZombieCharacter*                            _zombieCharacter;                                           // 0x0158   (0x0008)  
};

/// Class /Script/TheK24.ZombieResurrector
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UZombieResurrector : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _powerLevelToSpawnZombie;                                   // 0x00D0   (0x0028)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00F8   (0x0010)  MISSED
	TArray<class AZombieCharacter*>                    _delayedSpawnZombies;                                       // 0x0108   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0118   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged
	// void Authority_OnKillerPowerLevelChanged(int32_t powerlevel);                                                         // [0x5b236e0] Final|Native|Private 
};

/// Class /Script/TheK24.ZombieRotateTowardsTargetBTTask
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UZombieRotateTowardsTargetBTTask : public UBTTask_BlueprintBase
{ 
public:
};

/// Class /Script/TheK24.ZombiesInterestEventManager
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UZombiesInterestEventManager : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	TArray<FGameplayTag>                               _zombieInterestEvents;                                      // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered
	// void Authority_OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, FVector Location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise); // [0x5b23770] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/TheK24.ZombiesManagement
/// Size: 0x00B8 (0x000230 - 0x0002E8)
class AZombiesManagement : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	class UAuthoritativeActorPoolComponent*            _zombiePool;                                                // 0x0238   (0x0008)  
	class UZombiesPatrolAreaManager*                   _zombiesPatrolAreaManager;                                  // 0x0240   (0x0008)  
	TArray<class AZombieCharacter*>                    _spawnedZombiesArray;                                       // 0x0248   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0258   (0x0030)  MISSED
	FDBDTunableRowHandle                               _firstZombieSpawnTime;                                      // 0x0288   (0x0028)  
	FDBDTunableRowHandle                               _numberOfZombieToSpawnAtStart;                              // 0x02B0   (0x0028)  
	TArray<class AZombieEscapeDoorPointsActor*>        _zombieEscapeDoorPoints;                                    // 0x02D8   (0x0010)  


	/// Functions
	// Function /Script/TheK24.ZombiesManagement.Authority_OnIntroComplete
	// void Authority_OnIntroComplete();                                                                                     // [0x5b236c0] Final|Native|Private 
};

/// Class /Script/TheK24.ZombiesPatrolAreaManager
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UZombiesPatrolAreaManager : public UActorComponent
{ 
public:
	TArray<class AMeatHook*>                           _availablePatrolAreas;                                      // 0x00B8   (0x0010)  
	TArray<class AMeatHook*>                           _usedPatrolAreas;                                           // 0x00C8   (0x0010)  
	float                                              _maxDistanceBetweenMeatHookAndPlayers;                      // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/TheK24.ZombieStunnableComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UZombieStunnableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

