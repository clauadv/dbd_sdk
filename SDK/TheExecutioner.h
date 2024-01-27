
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
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: StatSystem

/// Enum /Script/TheExecutioner.EProtagonist
/// Size: 0x03
enum class EProtagonist : uint8_t
{
	EProtagonist__Instigator                                                         = 0,
	EProtagonist__Target                                                             = 1,
	EProtagonist__EProtagonist_MAX                                                   = 2
};

/// Enum /Script/TheExecutioner.ETrailPointRefreshReason
/// Size: 0x06
enum class ETrailPointRefreshReason : uint8_t
{
	ETrailPointRefreshReason__FrontNeighbourAdded                                    = 0,
	ETrailPointRefreshReason__BackNeighbourAdded                                     = 1,
	ETrailPointRefreshReason__BackNeighbourRemoved                                   = 2,
	ETrailPointRefreshReason__FrontNeighbourRemoved                                  = 3,
	ETrailPointRefreshReason__None                                                   = 4,
	ETrailPointRefreshReason__ETrailPointRefreshReason_MAX                           = 5
};

/// Enum /Script/TheExecutioner.ETrailType
/// Size: 0x04
enum class ETrailType : uint8_t
{
	ETrailType__NormalTrail                                                          = 0,
	ETrailType__RestrictionTrail                                                     = 1,
	ETrailType__None                                                                 = 2,
	ETrailType__ETrailType_MAX                                                       = 3
};

/// Class /Script/TheExecutioner.ActivateTormentModeInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class UActivateTormentModeInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0790   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.ActivateTormentModeInteraction.SetTormentMode
	// void SetTormentMode(class ATormentMode* tormentModeComponent);                                                        // [0x5a85f60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheExecutioner.Addon_TormentMode
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UAddon_TormentMode : public USpawnEffectsOnAllSurvivorsBaseAddon
{ 
public:
	float                                              _blindnessDuration;                                         // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Struct /Script/TheExecutioner.AgonyDisplayFxEvent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAgonyDisplayFxEvent
{ 
	FGameplayTag                                       GameEvent;                                                  // 0x0000   (0x000C)  
	EProtagonist                                       Protagonist;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/TheExecutioner.AgonyComponent
/// Size: 0x0140 (0x0000B8 - 0x0001F8)
class UAgonyComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	FTagStateBool                                      _isInAgony;                                                 // 0x00C8   (0x0030)  
	FTagStateBool                                      _isAgonyMoriable;                                           // 0x00F8   (0x0030)  
	FDBDTunableRowHandle                               _agonyNumberOfHookForMiniMori;                              // 0x0128   (0x0028)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0150   (0x0038)  MISSED
	bool                                               _inAttackTrailDamageCooldown;                               // 0x0188   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0189   (0x0007)  MISSED
	FDBDTunableRowHandle                               _attackTrailDamageCooldownTime;                             // 0x0190   (0x0028)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x01B8   (0x0018)  MISSED
	TArray<FAgonyDisplayFxEvent>                       _showAgonyFXEvents;                                         // 0x01D0   (0x0010)  
	TArray<FAgonyDisplayFxEvent>                       _hideAgonyFXEvents;                                         // 0x01E0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x01F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic
	// void ShowAgonyBarbWireFX_Cosmetic();                                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic
	// void OnTrailEffectStop_Cosmetic();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic
	// void OnTrailEffectStart_Cosmetic();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent
	// void OnShowBarbWireFXOnGameEvent(FGameplayTag gameEventType, FGameEventData& GameEventData);                          // [0x5a85980] Final|Native|Private|HasOutParms 
	// Function /Script/TheExecutioner.AgonyComponent.OnRep_IsInAgony
	// void OnRep_IsInAgony();                                                                                               // [0x5a85940] Final|Native|Private 
	// Function /Script/TheExecutioner.AgonyComponent.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(bool IsLocallyObserved);                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic
	// void OnHitInAgony_Cosmetic();                                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic
	// void OnHitByTormentAttackTrail_Cosmetic();                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent
	// void OnHideBarbWireFXOnGameEvent(FGameplayTag gameEventType, FGameEventData& GameEventData);                          // [0x5a85830] Final|Native|Private|HasOutParms 
	// Function /Script/TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic
	// void OnAgonyChanged_Cosmetic(bool IsInAgony);                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.IsInAgony
	// bool IsInAgony();                                                                                                     // [0x5a85570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.AgonyComponent.IsAgonyMoriable
	// bool IsAgonyMoriable();                                                                                               // [0x5a85540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic
	// void HideAgonyBarbWireFX_Cosmetic();                                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged
	// void Authority_OnDrainStageChanged(int32_t DrainStage, class ADBDPlayer* Target);                                     // [0x5a85220] Final|Native|Private 
	// Function /Script/TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone
	// void Authority_OnAttackTrailDamageCooldownTimerDone();                                                                // [0x5a85200] Final|Native|Private 
};

/// Class /Script/TheExecutioner.AgonyMoriInteraction
/// Size: 0x0000 (0x000820 - 0x000820)
class UAgonyMoriInteraction : public UKillInteractionDefinition
{ 
public:
};

/// Class /Script/TheExecutioner.AgonySubAnimInstance
/// Size: 0x0020 (0x000550 - 0x000570)
class UAgonySubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isInAgony;                                                 // 0x0550   (0x0001)  
	bool                                               _isInTormentTrail;                                          // 0x0551   (0x0001)  
	bool                                               _isInTormentTrailEffect;                                    // 0x0552   (0x0001)  
	bool                                               _isInDeathBed;                                              // 0x0553   (0x0001)  
	bool                                               _isDeadInDeathBed;                                          // 0x0554   (0x0001)  
	bool                                               _isInStruggleInDeathBed;                                    // 0x0555   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0556   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0557   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0558   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0559   (0x0003)  MISSED
	float                                              _walkAnimSpeed;                                             // 0x055C   (0x0004)  
	EInteractionAnimation                              _interactionType;                                           // 0x0560   (0x0001)  
	bool                                               _isInjured;                                                 // 0x0561   (0x0001)  
	bool                                               _isBeingCarried;                                            // 0x0562   (0x0001)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x0563   (0x000D)  MISSED
};

/// Class /Script/TheExecutioner.BaseTormentTrailPoint
/// Size: 0x0100 (0x000230 - 0x000330)
class ABaseTormentTrailPoint : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0230   (0x0018)  MISSED
	class USphereComponent*                            _collisionComponent;                                        // 0x0248   (0x0008)  
	float                                              _collisionRadius;                                           // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	FTunableStat                                       _tormentTrailAliveTime;                                     // 0x0258   (0x0080)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x02D8   (0x0030)  MISSED
	class USplineMeshComponent*                        _splineMeshComponent;                                       // 0x0308   (0x0008)  
	TArray<class UStaticMesh*>                         _trailMeshList;                                             // 0x0310   (0x0010)  
	char                                               _indexInTrail;                                              // 0x0320   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0321   (0x000F)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic
	// void EndOfDisapearCosmetic();                                                                                         // [0x5a85440] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic
	// void DisappearCosmetic();                                                                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheExecutioner.BloodPact
/// Size: 0x0098 (0x0003C8 - 0x000460)
class UBloodPact : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x03C8   (0x0018)  MISSED
	bool                                               _fullHealthStateOnly;                                       // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03E1   (0x0003)  MISSED
	float                                              _hasteEffectRange;                                          // 0x03E4   (0x0004)  
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x03E8   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	class UClass*                                      _bloodPactRevealEffect_Obsession;                           // 0x03F8   (0x0008)  
	class UClass*                                      _bloodPactRevealEffect_Owner;                               // 0x0400   (0x0008)  
	class UClass*                                      _bloodPactHasteEffect;                                      // 0x0408   (0x0008)  
	class UClass*                                      _decreaseObsessionChanceEffect;                             // 0x0410   (0x0008)  
	class UStatusEffect*                               _ownerStatusEffect;                                         // 0x0418   (0x0008)  
	class UStatusEffect*                               _obsessionStatusEffect;                                     // 0x0420   (0x0008)  
	class UStatusEffect*                               _ownerHasteStatusEffect;                                    // 0x0428   (0x0008)  
	class UStatusEffect*                               _otherPlayerHasteStatusEffect;                              // 0x0430   (0x0008)  
	class ADBDPlayer*                                  _otherPlayer;                                               // 0x0438   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0440   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.BloodPact.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5a852f0] Final|Native|Private 
};

/// Class /Script/TheExecutioner.DeathBedAntiCampComponent
/// Size: 0x00D8 (0x0000B8 - 0x000190)
class UDeathBedAntiCampComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	FDBDTunableRowHandle                               _anticampZoneDistance;                                      // 0x0100   (0x0028)  
	FDBDTunableRowHandle                               _anticampZoneTimeToTrigger;                                 // 0x0128   (0x0028)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0150   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.DeathBedAntiCampComponent.Multicast_TriggerDeathBedRelocate
	// void Multicast_TriggerDeathBedRelocate();                                                                             // [0x4e01240] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheExecutioner.DeathBedAntiCampComponent.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5a85380] Final|Native|Private 
};

/// Class /Script/TheExecutioner.DeathBedInteractable
/// Size: 0x0160 (0x000338 - 0x000498)
class ADeathBedInteractable : public AInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0338   (0x0010)  MISSED
	class USceneComponent*                             _root;                                                      // 0x0348   (0x0008)  
	class ACamperPlayer*                               _inDeathBedCamper;                                          // 0x0350   (0x0008)  
	class UChargeableComponent*                        _rescueChargeableComponent;                                 // 0x0358   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _deathBedSkeletalMesh;                                      // 0x0360   (0x0008)  
	class UBoxComponent*                               _interactionZone;                                           // 0x0368   (0x0008)  
	class UBoxComponent*                               _playerOverlapZone;                                         // 0x0370   (0x0008)  
	class UMontagePlayer*                              _montagePlayer;                                             // 0x0378   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0380   (0x0010)  MISSED
	class UBoxComponent*                               _deathBedCollision;                                         // 0x0390   (0x0008)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x0398   (0x0050)  MISSED
	class UAnimationMontageSlave*                      _animationMontageSlave;                                     // 0x03E8   (0x0008)  
	class UAnimMontage*                                _montageToPlay;                                             // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x03F8   (0x0004)  MISSED
	FVector                                            _rescuerSnapPosition;                                       // 0x03FC   (0x000C)  
	class UDeathBedAntiCampComponent*                  _deathBedAnticampComponent;                                 // 0x0408   (0x0008)  
	unsigned char                                      UnknownData04_5[0x40];                                      // 0x0410   (0x0040)  MISSED
	FDBDTunableRowHandle                               _anticampDrainCooldownTime;                                 // 0x0450   (0x0028)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0478   (0x0018)  MISSED
	class UAIPerceptionStimuliSourceComponent*         _perceptionStimuliComponent;                                // 0x0490   (0x0008)  


	/// Functions
	// Function /Script/TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed
	// void TeleportCamperToDeathBed(bool shouldActivate);                                                                   // [0x5a85ff0] Final|Native|Private|BlueprintCallable 
	// Function /Script/TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround
	// void StartPlayerAbsorbedByGround();                                                                                   // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.DeathBedInteractable.SetInDeathBedCamper
	// void SetInDeathBedCamper(class ACamperPlayer* CamperPlayer);                                                          // [0x5a85ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap
	// void PlayerOverlapZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5a85cc0] Final|Native|Private 
	// Function /Script/TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap
	// void PlayerOverlapZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5a85ab0] Final|Native|Private|HasOutParms 
	// Function /Script/TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic
	// void OnSkillCheckFailed_Cosmetic();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.DeathBedInteractable.OnSkillCheckFailed
	// void OnSkillCheckFailed();                                                                                            // [0x5a85a90] Final|Native|Private 
	// Function /Script/TheExecutioner.DeathBedInteractable.OnRescueCancelled
	// void OnRescueCancelled();                                                                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic
	// void OnRelocateStart_Cosmetic();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd
	// void OnDeathBedDeathEnd();                                                                                            // [0x5a85810] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed
	// void Multicast_RelocateToOtherDeathBed(class ADeathBedInteractable* deathBed, class ACamperPlayer* CamperPlayer);     // [0x5a85670] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition
	// FVector GetRescuerSnapPosition();                                                                                     // [0x5a854c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.DeathBedInteractable.GetMontagePlayer
	// class UMontagePlayer* GetMontagePlayer();                                                                             // [0x5a85490] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.DeathBedInteractable.GetInDeathBedCamper
	// class ACamperPlayer* GetInDeathBedCamper();                                                                           // [0x5a85460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed
	// void FX_SurvivorSavedFromDeathBed();                                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.DeathBedInteractable.FX_DeathBedAppear
	// void FX_DeathBedAppear();                                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.DeathBedInteractable.DeathBedDisappear
	// void DeathBedDisappear();                                                                                             // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.DeathBedInteractable.CanRescueSurvivor
	// bool CanRescueSurvivor();                                                                                             // [0x5a85410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.DeathBedInteractable.ActivateDeathBed
	// void ActivateDeathBed(bool value);                                                                                    // [0x5a85170] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/TheExecutioner.DeathBedOutlineUpdateStrategy
/// Size: 0x0000 (0x000158 - 0x000158)
class UDeathBedOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/TheExecutioner.DeathBedRescueInteraction
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UDeathBedRescueInteraction : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _loudNoiseRange;                                            // 0x0790   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x07B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition
	// FVector GetRescuerSnapPosition();                                                                                     // [0x5a85500] Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheExecutioner.Deathbound
/// Size: 0x0060 (0x0003C8 - 0x000428)
class UDeathbound : public UPerk
{ 
public:
	float                                              _distanceFromRescuedSurvivorForOblivious;                   // 0x03C8   (0x000C)  
	float                                              _activationDuration;                                        // 0x03D4   (0x0004)  
	float                                              _rescueDistanceFromKillerToActivate;                        // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	float                                              _revealLocationDuration;                                    // 0x03E0   (0x0004)  
	bool                                               _unhook;                                                    // 0x03E4   (0x0001)  
	bool                                               _fromDyingState;                                            // 0x03E5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x03E6   (0x0002)  MISSED
	TArray<class UStatusEffect*>                       _obliviousStatusEffects;                                    // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x03F8   (0x0010)  MISSED
	TArray<class ADBDPlayer*>                          _survivorsToReveal;                                         // 0x0408   (0x0010)  
	class UClass*                                      _obliviousEffectClass;                                      // 0x0418   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0420   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.Deathbound.OnRep_SurvivorsToReveal
	// void OnRep_SurvivorsToReveal();                                                                                       // [0x5a85960] Final|Native|Private 
	// Function /Script/TheExecutioner.Deathbound.MakeSurvivorScream
	// void MakeSurvivorScream(class ACamperPlayer* Survivor);                                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.Deathbound.GetRevealLocationDuration
	// float GetRevealLocationDuration();                                                                                    // [0x5020cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheExecutioner.DeathboundStatusEffect
/// Size: 0x0008 (0x000360 - 0x000368)
class UDeathboundStatusEffect : public UObliviousEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0360   (0x0008)  MISSED
};

/// Class /Script/TheExecutioner.ExecutionerTormentAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UExecutionerTormentAttack : public UPounceAttack
{ 
public:


	/// Functions
	// Function /Script/TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown
	// void Server_TormentTryHitTargetNotInCoolDown(class ADBDPlayer* Target);                                               // [0x5a85e10] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget
	// void Multicast_TormentHitTarget(class ADBDPlayer* Target, bool hitCosmeticOnly);                                      // [0x5a85740] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheExecutioner.ExecutionerTormentAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UExecutionerTormentAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheExecutioner.ExecutionerTormentAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UExecutionerTormentAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheExecutioner.ExecutionerTormentAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UExecutionerTormentAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheExecutioner.ForcedPenance
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UForcedPenance : public UPerk
{ 
public:
	float                                              _perkActivationDuration;                                    // 0x03C8   (0x000C)  
	bool                                               _applyOblivious;                                            // 0x03D4   (0x0001)  
	bool                                               _applyBroken;                                               // 0x03D5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x03D6   (0x0002)  MISSED
	class UClass*                                      _timedObliviousStatusEffectClass;                           // 0x03D8   (0x0008)  
	class UClass*                                      _brokenStatusEffectClass;                                   // 0x03E0   (0x0008)  
	TArray<class UStatusEffect*>                       _camperObliviousEffects;                                    // 0x03E8   (0x0010)  
	TArray<class UStatusEffect*>                       _camperBrokenEffects;                                       // 0x03F8   (0x0010)  
};

/// Class /Script/TheExecutioner.MobileTormentTrailRenderer
/// Size: 0x0080 (0x000230 - 0x0002B0)
class AMobileTormentTrailRenderer : public AActor
{ 
public:
	class UInstancedStaticMeshComponent*               _pillarIsmComponent;                                        // 0x0230   (0x0008)  
	class UInstancedStaticMeshComponent*               _wireIsmComponent;                                          // 0x0238   (0x0008)  
	class UInstancedStaticMeshComponent*               _trailIsmComponent;                                         // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               _pillarOutlineIsmComponent;                                 // 0x0248   (0x0008)  
	class UInstancedStaticMeshComponent*               _wireOutlineIsmComponent;                                   // 0x0250   (0x0008)  
	SDK_UNDEFINED(80,5069) /* TMap<ABaseTormentTrailPoint*, FTormentTrailPointInfo> */ __um(_instanceMap);         // 0x0258   (0x0050)  
	class UMaterialInstanceDynamic*                    _trailMaterialInstanceDynamic;                              // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance
	// void Multicast_RemoveInstance(class ABaseTormentTrailPoint* TrailPoint);                                              // [0x590c260] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance
	// void Multicast_AddInstance(class ABaseTormentTrailPoint* TrailPoint, bool isAttackTrailPoint);                        // [0x5a855a0] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/TheExecutioner.RepressedAlliance
/// Size: 0x0078 (0x0003C8 - 0x000440)
class URepressedAlliance : public UPerk
{ 
public:
	float                                              _repairTimesNeededToActivate;                               // 0x03C8   (0x000C)  
	float                                              _generatorBlockDuration;                                    // 0x03D4   (0x0004)  
	FSecondaryInteractionProperties                    _secondaryActionProperties;                                 // 0x03D8   (0x0038)  
	class UInteractionDefinition*                      _currentRepairInteractionWithAbility;                       // 0x0410   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0418   (0x0018)  MISSED
	class AGenerator*                                  _blockedGenerator;                                          // 0x0430   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0438   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.RepressedAlliance.Server_OnActionInputPressed
	// void Server_OnActionInputPressed(class AGenerator* Generator);                                                        // [0x5a899b0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility
	// void OnRep_CurrentRepairInteractionWithAbility(class UInteractionDefinition* oldRepairInteraction);                   // [0x5a896d0] Final|Native|Private 
	// Function /Script/TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator
	// void OnRep_BlockedGenerator(class AGenerator* oldGenerator);                                                          // [0x5a89640] Final|Native|Private 
	// Function /Script/TheExecutioner.RepressedAlliance.GetRepairTimesNeededToActivateAtLevel
	// float GetRepairTimesNeededToActivateAtLevel();                                                                        // [0x500a800] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.RepressedAlliance.GetGeneratorBlockDuration
	// float GetGeneratorBlockDuration();                                                                                    // [0x500a8f0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheExecutioner.SendToDeathBedInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class USendToDeathBedInteraction : public UChargeableInteractionDefinition
{ 
public:
	class ADeathBedInteractable*                       _deathBed;                                                  // 0x0790   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0798   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed
	// void Multicast_SendCamperToDeathBed(class ADeathBedInteractable* deathBed);                                           // [0x50aead0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor
	// class ACamperPlayer* GetOwningSurvivor();                                                                             // [0x5a89060] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart
	// void FX_InteractionStart();                                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel
	// void FX_InteractionCancel();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheExecutioner.SoulGuard
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class USoulGuard : public UPerk
{ 
public:
	float                                              _cooldownLevels;                                            // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _enduranceEffectClass;                                      // 0x03D8   (0x0008)  
	bool                                               _recover;                                                   // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03E1   (0x0003)  MISSED
	float                                              _enduranceEffectDuration;                                   // 0x03E4   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x03F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.SoulGuard.Authority_OnSurvivorHealed
	// void Authority_OnSurvivorHealed(FCamperHealResult& healResult);                                                       // [0x5a88ea0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheExecutioner.TormentTrailDetectorComponent
/// Size: 0x0140 (0x0000B8 - 0x0001F8)
class UTormentTrailDetectorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	TArray<class ATormentTrailPoint*>                  _overlappedTrailPoints;                                     // 0x00D0   (0x0010)  
	FTagStateBool                                      _isInTormentTrail;                                          // 0x00E0   (0x0030)  
	FTagStateBool                                      _isInTormentTrailEffect;                                    // 0x0110   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0140   (0x0008)  MISSED
	FTunableStat                                       _inTormentTrailLastingEffectTime;                           // 0x0148   (0x0080)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x01C8   (0x0030)  MISSED
};

/// Class /Script/TheExecutioner.SurvivorTormentTrailDetector
/// Size: 0x0018 (0x0001F8 - 0x000210)
class USurvivorTormentTrailDetector : public UTormentTrailDetectorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x01F8   (0x0018)  MISSED
};

/// Class /Script/TheExecutioner.TheExecutionerAnimInstance
/// Size: 0x0090 (0x000610 - 0x0006A0)
class UTheExecutionerAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isInTormentMode;                                           // 0x0610   (0x0001)  
	bool                                               _isChargingTormentMode;                                     // 0x0611   (0x0001)  
	bool                                               _isTormentModeAttacking;                                    // 0x0612   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0613   (0x0001)  MISSED
	float                                              _tormentModeVerticalInput;                                  // 0x0614   (0x0004)  
	float                                              _tormentModeHorizontalInput;                                // 0x0618   (0x0004)  
	unsigned char                                      UnknownData01_6[0x84];                                      // 0x061C   (0x0084)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic
	// void NoInputFeedbackCosmetic();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheExecutioner.TheExecutionerCheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UTheExecutionerCheatComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer
	// void DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool value, FString localPlayerId);                             // [0x5a88f50] Final|Exec|Native|Public 
	// Function /Script/TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer
	// void DBD_SetAgonyOnLocallyControlledPlayer(bool value, FString localPlayerId);                                        // [0x5a88f50] Final|Exec|Native|Public 
	// Function /Script/TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed
	// void DBD_LocalKillSurvivorInDeathBed();                                                                               // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed
	// void DBD_DisplayAllDeathBed(bool value);                                                                              // [0x5818260] Final|Exec|Native|Public 
	// Function /Script/TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction
	// void DBD_DeathBedPlayStruggleHitReaction();                                                                           // [0x45fe020] Final|Exec|Native|Public 
};

/// Class /Script/TheExecutioner.TrailControllerBase
/// Size: 0x0058 (0x000230 - 0x000288)
class ATrailControllerBase : public AActor
{ 
public:
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollection;                               // 0x0230   (0x0008)  
	FDBDTunableRowHandle                               _distanceBetweenTormentTrailPoint;                          // 0x0238   (0x0028)  
	class USplineComponent*                            _splineComponent;                                           // 0x0260   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0268   (0x0010)  MISSED
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                         // 0x0278   (0x0008)  
	ETrailType                                         _trailType;                                                 // 0x0280   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0281   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.TrailControllerBase.RemoveTormentTrailController
	// void RemoveTormentTrailController();                                                                                  // [0x5a89990] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheExecutioner.TrailControllerBase.OnTrailPointDeath
	// void OnTrailPointDeath(class ABaseTormentTrailPoint* baseTrailPoint);                                                 // [0x5a89870] Native|Protected     
	// Function /Script/TheExecutioner.TrailControllerBase.OnAcquireChanged
	// void OnAcquireChanged(bool acquired);                                                                                 // [0x5a894a0] Native|Protected     
	// Function /Script/TheExecutioner.TrailControllerBase.ActivateCosmetic
	// void ActivateCosmetic(bool value);                                                                                    // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Struct /Script/TheExecutioner.SpawnedAttackPoint
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpawnedAttackPoint
{ 
	class ABaseTormentTrailPoint*                      AttackTrailPoint;                                           // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/TheExecutioner.TormentAttackTrailController
/// Size: 0x0178 (0x000288 - 0x000400)
class ATormentAttackTrailController : public ATrailControllerBase
{ 
public:
	class UClass*                                      _tormentTrailAttackPointClass;                              // 0x0288   (0x0008)  
	class UClass*                                      _tormentTrailAttackSign;                                    // 0x0290   (0x0008)  
	FDBDTunableRowHandle                               _trailSpawnDelay;                                           // 0x0298   (0x0028)  
	FDBDTunableRowHandle                               _timeIntervalBetweenPointsSpawn;                            // 0x02C0   (0x0028)  
	FTunableStat                                       _attackTrailLenght;                                         // 0x02E8   (0x0080)  
	FDBDTunableRowHandle                               _consideredAsSlopeAngle;                                    // 0x0368   (0x0028)  
	TArray<FTransform>                                 _pointsTransform;                                           // 0x0390   (0x0010)  
	FVector                                            _slopeDetectionOverGroundVector;                            // 0x03A0   (0x000C)  
	FVector                                            _groundDetectionEndVector;                                  // 0x03AC   (0x000C)  
	FVector                                            _slopeCompensationVector;                                   // 0x03B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x1C];                                      // 0x03C4   (0x001C)  MISSED
	TArray<FSpawnedAttackPoint>                        _spawnedAttackPointList;                                    // 0x03E0   (0x0010)  
	bool                                               _trailSpawnStarted;                                         // 0x03F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03F1   (0x0003)  MISSED
	float                                              _soundDistanceOnTrail;                                      // 0x03F4   (0x0004)  
	class AMobileTormentTrailRenderer*                 _mobileTormentTrailRenderer;                                // 0x03F8   (0x0008)  


	/// Functions
	// Function /Script/TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic
	// void OnTrailPointRemovedCosmetic(int32_t index);                                                                      // [0x5a89900] Native|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone
	// void OnStartTrailTimerDone();                                                                                         // [0x5a89760] Final|Native|Private 
	// Function /Script/TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone
	// void OnIntervalBetweenPointsTimerDone();                                                                              // [0x5a89600] Final|Native|Private 
	// Function /Script/TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic
	// void OnAttackTrailStartCosmetic();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail
	// void Multicast_StartAttackTrail(float serverTimeSpawn, FVector_NetQuantize10 Location, FRotator Rotation);            // [0x5a892e0] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign
	// void DisplayAttackTrailSpawnSign();                                                                                   // [0x5a89040] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheExecutioner.TormentAttackTrailPoint
/// Size: 0x0058 (0x000330 - 0x000388)
class ATormentAttackTrailPoint : public ABaseTormentTrailPoint
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0330   (0x0030)  MISSED
	FDBDTunableRowHandle                               _attackPointDelayToEnableCollision;                         // 0x0360   (0x0028)  


	/// Functions
	// Function /Script/TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh
	// void DisplayTrailSplineMesh(class USplineComponent* splinemesh, int32_t indexInTrail);                                // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/TheExecutioner.TormentMode
/// Size: 0x0450 (0x0004C8 - 0x000918)
class ATormentMode : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x04C8   (0x0078)  MISSED
	class UChargeableComponent*                        _activateTormentModeCharge;                                 // 0x0540   (0x0008)  
	class UPowerChargeComponent*                       _tormentModeCharge;                                         // 0x0548   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0550   (0x0008)  MISSED
	class UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation;                           // 0x0558   (0x0008)  
	class UPowerToggleComponent*                       _powerToggleComponent;                                      // 0x0560   (0x0008)  
	class UTormentTrailSpawnerComponent*               _tormentTrailSpawnerComponent;                              // 0x0568   (0x0008)  
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollectionComponent;                      // 0x0570   (0x0008)  
	class UTormentTrailPointCollectionComponent*       _restrictedTormentTrailPointCollectionComponent;            // 0x0578   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _tormentTrailControllerPool;                                // 0x0580   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _tormentAttackTrailControllerPool;                          // 0x0588   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _restrictedTormentTrailControllerPool;                      // 0x0590   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _tormentTrailPointPool;                                     // 0x0598   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _restrictedTormentTrailPointPool;                           // 0x05A0   (0x0008)  
	FDBDTunableRowHandle                               _activateTormentModeSecondsToCharge;                        // 0x05A8   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeMaxCharge;                                      // 0x05D0   (0x0028)  
	FTunableStat                                       _tormentModeChargeRate;                                     // 0x05F8   (0x0080)  
	FTunableStat                                       _tormentModeDischargeRate;                                  // 0x0678   (0x0080)  
	FDBDTunableRowHandle                               _tormentModePauseChargeRate;                                // 0x06F8   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeAttackConsumePower;                             // 0x0720   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeMinimumPercentToActivate;                       // 0x0748   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeMouseYawScale;                                  // 0x0770   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeYawAdjustTime;                                  // 0x0798   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeGamePadYawScale;                                // 0x07C0   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeYawInputLimit;                                  // 0x07E8   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeNotMovingYawScaleMultiplier;                    // 0x0810   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeNotMovingYawAdjustTime;                         // 0x0838   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeWalkSpeed;                                      // 0x0860   (0x0028)  
	FDBDTunableRowHandle                               _normalWalkSpeed;                                           // 0x0888   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeForcedPitch;                                    // 0x08B0   (0x0028)  
	class UClass*                                      _agonyComponentClass;                                       // 0x08D8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x08E0   (0x0010)  MISSED
	class UClass*                                      _killerTormentTrailDetectorClass;                           // 0x08F0   (0x0008)  
	class UClass*                                      _survivorTormentTrailDetectorClass;                         // 0x08F8   (0x0008)  
	class UTormentModeCooldownInteraction*             _tormentModeCooldownInteraction;                            // 0x0900   (0x0008)  
	class UCurveFloat*                                 _tormentModeChargeSpeedCurve;                               // 0x0908   (0x0008)  
	class UClass*                                      _mobileTormentTrailRendererClass;                           // 0x0910   (0x0008)  


	/// Functions
	// Function /Script/TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool
	// void Server_RequestMoreActorInAttackPool();                                                                           // [0x5a89ac0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic
	// void OnTormentModeStop_Cosmetic();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic
	// void OnTormentModeStart_Cosmetic();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheExecutioner.TormentMode.OnTormentModeChargeEmpty
	// void OnTormentModeChargeEmpty();                                                                                      // [0x5a89780] Final|Native|Private 
	// Function /Script/TheExecutioner.TormentMode.IsInTormentMode
	// bool IsInTormentMode();                                                                                               // [0x5a892b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheExecutioner.TormentModeCooldownInteraction
/// Size: 0x0070 (0x000650 - 0x0006C0)
class UTormentModeCooldownInteraction : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _tormentModeCooldownTime;                                   // 0x0648   (0x0028)  
	FDBDTunableRowHandle                               _tormentModeCancelWalkSpeed;                                // 0x0670   (0x0028)  
	FDBDTunableRowHandle                               _normalWalkSpeed;                                           // 0x0698   (0x0028)  
};

/// Class /Script/TheExecutioner.Tormentor
/// Size: 0x0000 (0x000030 - 0x000030)
class UTormentor : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheExecutioner.Tormentor.GetTormentTrailSpawnPoint
	// FVector GetTormentTrailSpawnPoint();                                                                                  // [0x61c32d0] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint
	// FVector GetTormentTrailAttackSpawnPoint();                                                                            // [0x61c32d0] Event|Public|HasDefaults|BlueprintEvent 
};

/// Struct /Script/TheExecutioner.ReplicatedTrailItem
/// Size: 0x0034 (0x00000C - 0x000040)
struct FReplicatedTrailItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	class ATormentTrailPoint*                          TrailPoint;                                                 // 0x0010   (0x0008)  
	char                                               OrderInTrail;                                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector_NetQuantize10                              PointRelativeLocation;                                      // 0x001C   (0x000C)  
	FRotator                                           PointRotation;                                              // 0x0028   (0x000C)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/TheExecutioner.ReplicatedTrailPointList
/// Size: 0x0018 (0x000108 - 0x000120)
struct FReplicatedTrailPointList : FFastArraySerializer
{ 
	TArray<FReplicatedTrailItem>                       Items;                                                      // 0x0108   (0x0010)  
	class ATormentTrailController*                     TormentTrailController;                                     // 0x0118   (0x0008)  
};

/// Class /Script/TheExecutioner.TormentTrailController
/// Size: 0x0128 (0x000288 - 0x0003B0)
class ATormentTrailController : public ATrailControllerBase
{ 
public:
	FReplicatedTrailPointList                          _trailPointList;                                            // 0x0288   (0x0120)  
	class AMobileTormentTrailRenderer*                 _mobileTormentTrailRenderer;                                // 0x03A8   (0x0008)  


	/// Functions
	// Function /Script/TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint
	// void Server_SpawnTormentTrailPoint(class ATormentTrailPoint* TrailPoint, FVector_NetQuantize10 Location, FRotator Rotation); // [0x5a89bc0] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
};

/// Class /Script/TheExecutioner.TormentTrailPoint
/// Size: 0x0028 (0x000330 - 0x000358)
class ATormentTrailPoint : public ABaseTormentTrailPoint
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0330   (0x0018)  MISSED
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                         // 0x0348   (0x0008)  
	float                                              _splineMeshOverlapDistance;                                 // 0x0350   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0354   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint
	// void Server_RemoveTrailPoint();                                                                                       // [0x5a89a70] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic
	// void RefreshTrailPointCosmetic(ETrailPointRefreshReason trailPointRefreshReason);                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.TormentTrailPoint.OnAcquireChanged
	// void OnAcquireChanged(bool acquired);                                                                                 // [0x5a89410] Final|Native|Private 
	// Function /Script/TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear
	// void Multicast_TriggerTrailPointDisappear();                                                                          // [0x43c1740] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant
	// void GetTrailLocationAndTangeant(int32_t indexInTrail, class USplineComponent* SplineComponent, FVector& outStartLocation, FVector& outStartTangent, FVector& outEndLocation, FVector& outEndTangent); // [0x5a89090] Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheExecutioner.TormentTrailPoint.AddTrailCosmetic
	// void AddTrailCosmetic(class USplineComponent* SplineComponent, char indexInTrail);                                    // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheExecutioner.TormentTrailPoint.ActivateCosmetic
	// void ActivateCosmetic(bool value);                                                                                    // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/TheExecutioner.TormentTrailPointCollectionComponent
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UTormentTrailPointCollectionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _maxNumberOfTrailPointInGame;                               // 0x00D0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged
	// void OnTrailAcquireChanged(class ATormentTrailPoint* TrailPoint, bool value);                                         // [0x5a897a0] Final|Native|Private 
};

/// Class /Script/TheExecutioner.TormentTrailSpawnerComponent
/// Size: 0x0190 (0x0000B8 - 0x000248)
class UTormentTrailSpawnerComponent : public UActorComponent
{ 
public:
	class ATormentTrailController*                     _currentTrailController;                                    // 0x00B8   (0x0008)  
	FDBDTunableRowHandle                               _restrictionRangeToHooks;                                   // 0x00C0   (0x0028)  
	FDBDTunableRowHandle                               _restrictionRangeToGenerators;                              // 0x00E8   (0x0028)  
	FDBDTunableRowHandle                               _restrictionRangeToExitSwitch;                              // 0x0110   (0x0028)  
	FDBDTunableRowHandle                               _maxSlopeAngleForTrail;                                     // 0x0138   (0x0028)  
	FDBDTunableRowHandle                               _minSlopeAngleForTrail;                                     // 0x0160   (0x0028)  
	FDBDTunableRowHandle                               _restrictionRangeToHatch;                                   // 0x0188   (0x0028)  
	FDBDTunableRowHandle                               _restrictionMaxVerticalDistance;                            // 0x01B0   (0x0028)  
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollectionComponent;                      // 0x01D8   (0x0008)  
	class UTormentTrailPointCollectionComponent*       _restrictedTormentTrailPointCollectionComponent;            // 0x01E0   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _tormentTrailControllerPool;                                // 0x01E8   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _tormentRestrictedTrailControllerPool;                      // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x01F8   (0x0018)  MISSED
	TArray<class AActor*>                              _actorsInRange;                                             // 0x0210   (0x0010)  
	FVector                                            _slopeDetectionOverGroundVector;                            // 0x0220   (0x000C)  
	FVector                                            _slopeDetectionEndVector;                                   // 0x022C   (0x000C)  
	float                                              _forwardMultiplierSlopeDetection;                           // 0x0238   (0x0004)  
	float                                              _epsilonToAddToSpawnLocationInZ;                            // 0x023C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0240   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController
	// void Sever_SpawnTrailController(class ATormentTrailController* trailController, FVector_NetQuantize10 Location, FRotator Rotation); // [0x5a89d40] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController
	// void Server_StopTrailController(class ATormentTrailController* trailController);                                      // [0x58c5550] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool
	// void Server_RequestMoreActorInPool(ETrailType trailType);                                                             // [0x5a89b10] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5a89620] Final|Native|Private 
	// Function /Script/TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged
	// void OnInRangeChanged(bool inRange, class AActor* Actor);                                                             // [0x5a89530] Final|Native|Private 
};

/// Class /Script/TheExecutioner.TrailEffectLastingTimeBaseAddon
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UTrailEffectLastingTimeBaseAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{ 
public:
	float                                              _trailEffectLastingTimeModifierValue;                       // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/TheExecutioner.TrailOfTorment
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UTrailOfTorment : public UPerk
{ 
public:
	class UClass*                                      _trailOfTormentEffect;                                      // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x03D0   (0x0018)  MISSED
	float                                              _cooldownDuration;                                          // 0x03E8   (0x000C)  
	int32_t                                            _highlightPriority;                                         // 0x03F4   (0x0004)  
	class AGenerator*                                  _highlightedGenerator;                                      // 0x03F8   (0x0008)  
	class UStatusEffect*                               _statusEffect;                                              // 0x0400   (0x0008)  


	/// Functions
	// Function /Script/TheExecutioner.TrailOfTorment.OnRep_HighlightGenerator
	// void OnRep_HighlightGenerator(class AGenerator* oldHighlightedGenerator);                                             // [0x5a8a460] Final|Native|Private|Const 
	// Function /Script/TheExecutioner.TrailOfTorment.GetCooldownDurationAtLevel
	// float GetCooldownDurationAtLevel();                                                                                   // [0x500a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheExecutioner.TrailPointOutlineUpdateStrategy
/// Size: 0x0028 (0x000158 - 0x000180)
class UTrailPointOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
	FDBDTunableRowHandle                               _tormentTrailRevealDistance;                                // 0x0158   (0x0028)  
};

/// Struct /Script/TheExecutioner.TormentTrailPointInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FTormentTrailPointInfo
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/TheExecutioner.SpawnedTormentTrailPoint
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpawnedTormentTrailPoint
{ 
	class ATormentTrailPoint*                          TrailPoint;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

