
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
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: StatSystem
/// dependency: VFXUtilities

/// Enum /Script/TheDoctor.EStaticFieldMovementSpeed
/// Size: 0x05
enum class EStaticFieldMovementSpeed : uint8_t
{
	EStaticFieldMovementSpeed__Slow                                                  = 0,
	EStaticFieldMovementSpeed__Medium                                                = 1,
	EStaticFieldMovementSpeed__Fast                                                  = 2,
	EStaticFieldMovementSpeed__RunningFast                                           = 3,
	EStaticFieldMovementSpeed__EStaticFieldMovementSpeed_MAX                         = 4
};

/// Class /Script/TheDoctor.Alert
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UAlert : public UPerk
{ 
public:
	float                                              _killerAuraRevealDuration;                                  // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UStatusEffect*                               _alertKillerRevealEffect;                                   // 0x03D8   (0x0008)  
	class UClass*                                      _alertKillerRevealEffectClass;                              // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/TheDoctor.Alert.OnPerkActivate_Cosmetic
	// void OnPerkActivate_Cosmetic();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheDoctor.CalmBaseAddon
/// Size: 0x0008 (0x0002D8 - 0x0002E0)
class UCalmBaseAddon : public USimpleSpawnEffectsOnAllSurvivorsAddon
{ 
public:
	float                                              _terrorRadiusModification;                                  // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02DC   (0x0004)  MISSED
};

/// Class /Script/TheDoctor.CalmIntermittentFakeTerrorRadiusEffect
/// Size: 0x0048 (0x000350 - 0x000398)
class UCalmIntermittentFakeTerrorRadiusEffect : public UStatusEffect
{ 
public:
	float                                              _fakeTerrorRadiusDuration;                                  // 0x0350   (0x0004)  
	float                                              _fakeTerrorRadiusIntermittenceMin;                          // 0x0354   (0x0004)  
	float                                              _fakeTerrorRadiusIntermittenceMax;                          // 0x0358   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x035C   (0x003C)  MISSED
};

/// Class /Script/TheDoctor.CartersSpark
/// Size: 0x00E0 (0x0004C8 - 0x0005A8)
class ACartersSpark : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x04C8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _shockAttackComboTimerDuration;                             // 0x04E0   (0x0028)  
	class UClass*                                      _survivorCartersSparkComponentClass;                        // 0x0508   (0x0008)  
	unsigned char                                      UnknownData01_5[0x70];                                      // 0x0510   (0x0070)  MISSED
	class UClass*                                      _doctorBlockInterruptEffect;                                // 0x0580   (0x0008)  
	class UClass*                                      _madnessStatusEffect;                                       // 0x0588   (0x0008)  
	class UClass*                                      _illusionaryDoctorEffect;                                   // 0x0590   (0x0008)  
	class UCartersSparkComponent*                      _cartersSparkComponent;                                     // 0x0598   (0x0008)  
	class UInteractionAttacherComponent*               _interactionAttacherComponent;                              // 0x05A0   (0x0008)  


	/// Functions
	// Function /Script/TheDoctor.CartersSpark.Cosmetic_OnShockTherapyZoneDetonated
	// void Cosmetic_OnShockTherapyZoneDetonated(class ADBDPlayer* killer, int32_t survivorsHitCount);                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheDoctor.CartersSpark.CancelSurvivorInteraction
	// void CancelSurvivorInteraction(class ACamperPlayer* Survivor);                                                        // [0x5a56640] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheDoctor.CartersSpark.Authority_StartShockAttackComboTimer
	// void Authority_StartShockAttackComboTimer(class ACamperPlayer* shockedSurvivor);                                      // [0x5a565b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheDoctor.DisciplineEffect
/// Size: 0x00A8 (0x000350 - 0x0003F8)
class UDisciplineEffect : public UStatusEffect
{ 
public:
	float                                              _deactivationDelay;                                         // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	bool                                               _redStainInterpolating;                                     // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_6[0x9F];                                      // 0x0359   (0x009F)  MISSED


	/// Functions
	// Function /Script/TheDoctor.DisciplineEffect.SetRedStainInterpolating
	// void SetRedStainInterpolating(bool isInterpolating);                                                                  // [0x5a56b00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheDoctor.DisciplineEffect.Cosmetic_UpdateSurvivorRedStain
	// void Cosmetic_UpdateSurvivorRedStain(bool visible, float DeltaTime);                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DisciplineEffect.Cosmetic_UpdateKillerRedStain
	// void Cosmetic_UpdateKillerRedStain(bool visible, float DeltaTime);                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DisciplineEffect.Cosmetic_SpawnRedStains
	// void Cosmetic_SpawnRedStains();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DisciplineEffect.Cosmetic_ActivateSurvivorRedStain
	// void Cosmetic_ActivateSurvivorRedStain(bool Activate);                                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DisciplineEffect.Cosmetic_ActivateKillerRedStain
	// void Cosmetic_ActivateKillerRedStain(bool Activate);                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheDoctor.DoctorAnimInstance
/// Size: 0x0000 (0x000610 - 0x000610)
class UDoctorAnimInstance : public UKillerAnimInstance
{ 
public:
};

/// Class /Script/TheDoctor.DoctorCheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UDoctorCheatComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheDoctor.DoctorCheatComponent.DBD_AddMadness
	// void DBD_AddMadness(float madnessToAdd, FString localPlayerId);                                                       // [0x5a56fe0] Final|Exec|Native|Public 
};

/// Class /Script/TheDoctor.DoctorPowerSubAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UDoctorPowerSubAnimInstance : public UAnimInstance
{ 
public:
	EDoctorAbilityType                                 _abilityType;                                               // 0x02C0   (0x0001)  
	EDoctorAbilityPhase                                _abilityPhase;                                              // 0x02C1   (0x0001)  
	bool                                               _isShockTherapyInCooldown;                                  // 0x02C2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02C3   (0x0001)  MISSED
	SDK_UNDEFINED(8,5066) /* TWeakObjectPtr<UDoctorPowerAnimStateComponent*> */ __um(_powerStateComponent);        // 0x02C4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStop
	// void OnShockTherapyAnimationAttackStop();                                                                             // [0x5a572d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheDoctor.DoctorPowerSubAnimInstance.OnShockTherapyAnimationAttackStart
	// void OnShockTherapyAnimationAttackStart();                                                                            // [0x5a572b0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor
/// Size: 0x0088 (0x000270 - 0x0002F8)
class ADoctorSurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0270   (0x0088)  MISSED


	/// Functions
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.IsSurvivorOperatingLocker
	// bool IsSurvivorOperatingLocker();                                                                                     // [0x5a57c60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.GetSurvivorMadnessEffect
	// class USurvivorMadnessEffect* GetSurvivorMadnessEffect();                                                             // [0x5a57c30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.GetIllusionaryDoctor
	// class AIllusionaryDoctor* GetIllusionaryDoctor();                                                                     // [0x5a57c00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorShocked
	// void Cosmetic_OnOwningSurvivorShocked();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessIntermittentScream
	// void Cosmetic_OnMadnessIntermittentScream();                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnMadnessChanged
	// void Cosmetic_OnMadnessChanged(int32_t newTier, bool increased);                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnInsaneSkillCheck
	// void Cosmetic_OnInsaneSkillCheck();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletDeactivated
	// void Cosmetic_OnIllusionaryPalletDeactivated(class APallet* Pallet);                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryPalletActivated
	// void Cosmetic_OnIllusionaryPalletActivated(class APallet* Pallet);                                                    // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.Cosmetic_OnIllusionaryDoctorApparitionSequenceStart
	// void Cosmetic_OnIllusionaryDoctorApparitionSequenceStart(FTransform& illusionaryDoctorTransform, float apparitionDuration); // [0x61c32d0] BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayShockedAnimation
	// bool CanPlayShockedAnimation();                                                                                       // [0x5a57b30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAudio
	// bool CanPlayOverwhelmingMadnessAudio();                                                                               // [0x5a57b00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayOverwhelmingMadnessAnimation
	// bool CanPlayOverwhelmingMadnessAnimation();                                                                           // [0x5a57ad0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.DoctorSurvivorCosmeticHelperActor.CanPlayerSeeIllusionaryPalletGlitch
	// bool CanPlayerSeeIllusionaryPalletGlitch(class APallet* Pallet);                                                      // [0x5a57b60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheDoctor.IllusionaryDoctor
/// Size: 0x0010 (0x000260 - 0x000270)
class AIllusionaryDoctor : public ABaseHusk
{ 
public:
	class UDBDOutlineComponent*                        _dbdOutline;                                                // 0x0260   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0268   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheDoctor.IllusionaryDoctor.DeactivateIllusion
	// void DeactivateIllusion();                                                                                            // [0x5a57f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheDoctor.IllusionaryDoctor.ActivateIllusion
	// void ActivateIllusion(FTransform& Transform);                                                                         // [0x5a57e30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/TheDoctor.IllusionaryDoctorEffect
/// Size: 0x0270 (0x000350 - 0x0005C0)
class UIllusionaryDoctorEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0350   (0x0018)  MISSED
	class UClass*                                      _illusionaryDoctorClass;                                    // 0x0368   (0x0008)  
	class AIllusionaryDoctor*                          _illusionaryDoctor;                                         // 0x0370   (0x0008)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0378   (0x0038)  MISSED
	FDBDTunableRowHandle                               _madness2IllusionaryDoctorIntervalMinimum;                  // 0x03B0   (0x0028)  
	FDBDTunableRowHandle                               _madness2IllusionaryDoctorIntervalMaximum;                  // 0x03D8   (0x0028)  
	FDBDTunableRowHandle                               _madness3IllusionaryDoctorIntervalMinimum;                  // 0x0400   (0x0028)  
	FDBDTunableRowHandle                               _madness3IllusionaryDoctorIntervalMaximum;                  // 0x0428   (0x0028)  
	FDBDTunableRowHandle                               _illusionaryDoctorMaximumDistance;                          // 0x0450   (0x0028)  
	FDBDTunableRowHandle                               _illusionaryDoctorMinimumDistance;                          // 0x0478   (0x0028)  
	FDBDTunableRowHandle                               _dotProductMinimumAcceptanceValue;                          // 0x04A0   (0x0028)  
	FTunableStat                                       _illusionaryDoctorApparitionDuration;                       // 0x04C8   (0x0080)  
	int32_t                                            _numberOfAttempsToFindIllusionaryDoctorTargetLocationPerTick; // 0x0548   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x054C   (0x0004)  MISSED
	FTransform                                         _illusionaryDoctorTransform;                                // 0x0550   (0x0030)  
	unsigned char                                      UnknownData03_6[0x40];                                      // 0x0580   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheDoctor.IllusionaryDoctorEffect.OnRep_IllusionaryDoctorTransform
	// void OnRep_IllusionaryDoctorTransform();                                                                              // [0x5a58210] Final|Native|Private 
	// Function /Script/TheDoctor.IllusionaryDoctorEffect.Multicast_DebugDisplayInfo
	// void Multicast_DebugDisplayInfo(float timeRemainingBeforeActivation, FColor messageColor);                            // [0x5a58140] Final|Net|Native|Event|NetMulticast|Private|HasDefaults 
};

/// Class /Script/TheDoctor.IllusionaryDoctorOutlineStrategy
/// Size: 0x0000 (0x000158 - 0x000158)
class UIllusionaryDoctorOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/TheDoctor.IllusionaryPalletBaseAddon
/// Size: 0x0070 (0x0002D8 - 0x000348)
class UIllusionaryPalletBaseAddon : public USimpleSpawnEffectsOnAllSurvivorsAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x02D8   (0x0060)  MISSED
	float                                              _illusionaryPalletInterval;                                 // 0x0338   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UClass*                                      _palletComponentClass;                                      // 0x0340   (0x0008)  


	/// Functions
	// Function /Script/TheDoctor.IllusionaryPalletBaseAddon.Multicast_DeactivateIllusionaryPallet
	// void Multicast_DeactivateIllusionaryPallet(class APallet* Pallet, class ADBDPlayer* triggeringPlayer);                // [0x5a588c0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheDoctor.IllusionaryPalletBaseAddon.Multicast_ActivateIllusionaryPallet
	// void Multicast_ActivateIllusionaryPallet(class APallet* Pallet, bool isPalletDown);                                   // [0x5a587f0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheDoctor.IllusionaryPalletBaseAddon.Authority_OnIllusionaryPalletActorOverlapped
	// void Authority_OnIllusionaryPalletActorOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5a585d0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheDoctor.IllusionaryPalletComponent
/// Size: 0x0148 (0x0000B8 - 0x000200)
class UIllusionaryPalletComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTransform                                         _illusionaryPalletDownTransform;                            // 0x00C0   (0x0030)  
	class UBoxComponent*                               _illusionaryPalletTriggerZone;                              // 0x00F0   (0x0008)  
	FVector                                            _illusionaryPalletTriggerZoneBoxExtent;                     // 0x00F8   (0x000C)  
	FVector                                            _illusionaryPalletTriggerZoneLocation;                      // 0x0104   (0x000C)  
	float                                              _glitchEffectRange;                                         // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	class UStaticMeshComponent*                        _illusionaryPalletStaticMeshComponent;                      // 0x0118   (0x0008)  
	unsigned char                                      UnknownData02_6[0xE0];                                      // 0x0120   (0x00E0)  MISSED


	/// Functions
	// Function /Script/TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletDeactivation
	// void OnStartIllusionaryPalletDeactivation(class ADBDPlayer* triggeringPlayer);                                        // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.IllusionaryPalletComponent.OnStartIllusionaryPalletActivation
	// void OnStartIllusionaryPalletActivation(bool isPalletDown);                                                           // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.IllusionaryPalletComponent.GetGlitchEffectRange
	// float GetGlitchEffectRange();                                                                                         // [0x5a58d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.IllusionaryPalletComponent.DeactivateIllusionaryPallet
	// void DeactivateIllusionaryPallet();                                                                                   // [0x5a58d70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheDoctor.IllusionaryPalletComponent.CanLocallyObservedPlayerSeeIllusionaryPallet
	// bool CanLocallyObservedPlayerSeeIllusionaryPallet();                                                                  // [0x5a58d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.IllusionaryPalletComponent.ActivateIllusionaryPallet
	// void ActivateIllusionaryPallet(bool isPalletDown);                                                                    // [0x5a58cb0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheDoctor.IridescentQueenEffect
/// Size: 0x0050 (0x000350 - 0x0003A0)
class UIridescentQueenEffect : public UStatusEffect
{ 
public:
	class UCapsuleComponent*                           _authority_iridescentQueenDischargeDetectionZone;           // 0x0350   (0x0008)  
	float                                              _dischargeDetectionZoneHalfHeight;                          // 0x0358   (0x0004)  
	float                                              _dischargeDetectionZoneRadius;                              // 0x035C   (0x0004)  
	FDBDTunableRowHandle                               _madnessToAddOnDischarge;                                   // 0x0360   (0x0028)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0388   (0x0008)  MISSED
	bool                                               _chargeActive;                                              // 0x0390   (0x0001)  
	bool                                               _charged;                                                   // 0x0391   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0392   (0x000E)  MISSED


	/// Functions
	// Function /Script/TheDoctor.IridescentQueenEffect.OnRep_ChargeActive
	// void OnRep_ChargeActive();                                                                                            // [0x5a59690] Final|Native|Private 
	// Function /Script/TheDoctor.IridescentQueenEffect.Multicast_DischargeOnSurvivor
	// void Multicast_DischargeOnSurvivor(class ACamperPlayer* Survivor);                                                    // [0x5a59600] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheDoctor.IridescentQueenEffect.GetStaticFieldMovementSpeed
	// EStaticFieldMovementSpeed GetStaticFieldMovementSpeed();                                                              // [0x58e1020] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.IridescentQueenEffect.Cosmetic_UpdateStaticFieldFX
	// void Cosmetic_UpdateStaticFieldFX();                                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.IridescentQueenEffect.Cosmetic_SpawnStaticFieldFX
	// void Cosmetic_SpawnStaticFieldFX();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneDeactivated
	// void Cosmetic_OnDischargeZoneDeactivated();                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeZoneActivated
	// void Cosmetic_OnDischargeZoneActivated();                                                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.IridescentQueenEffect.Cosmetic_OnDischargeOnSurvivor
	// void Cosmetic_OnDischargeOnSurvivor(class ADBDPlayer* survivorToShock);                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.IridescentQueenEffect.Authority_OnSurvivorOverlappedDischargeZone
	// void Authority_OnSurvivorOverlappedDischargeZone(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5a593e0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheDoctor.Lithe
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class ULithe : public UPerk
{ 
public:
	class UClass*                                      _exhaustedStatusEffectClass;                                // 0x03C8   (0x0008)  
	class UClass*                                      _movementSpeedStatusEffectClass;                            // 0x03D0   (0x0008)  
	float                                              _movementSpeedPercentage;                                   // 0x03D8   (0x0004)  
	float                                              _movementSpeedDuration;                                     // 0x03DC   (0x0004)  


	/// Functions
	// Function /Script/TheDoctor.Lithe.GetMovementSpeedPercentage
	// float GetMovementSpeedPercentage();                                                                                   // [0x500f6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheDoctor.Lithe.GetMovementSpeedDuration
	// float GetMovementSpeedDuration();                                                                                     // [0x5a598b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheDoctor.MadnessSurvivorSubAnimInstance
/// Size: 0x0010 (0x000550 - 0x000560)
class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isTotallyInsane;                                           // 0x0550   (0x0001)  
	bool                                               _isInjured;                                                 // 0x0551   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0552   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0553   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0554   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0555   (0x0003)  MISSED
	float                                              _walkAnimSpeed;                                             // 0x0558   (0x0004)  
	bool                                               _isCarried;                                                 // 0x055C   (0x0001)  
	bool                                               _isInAir;                                                   // 0x055D   (0x0001)  
	bool                                               _isDead;                                                    // 0x055E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x055F   (0x0001)  MISSED
};

/// Class /Script/TheDoctor.Overcharge
/// Size: 0x00E8 (0x0003C8 - 0x0004B0)
class UOvercharge : public UPerk
{ 
public:
	float                                              _skillCheckFailurePenalty;                                  // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UCurveFloat*                                 _regressionRateMultiplierCurve;                             // 0x03D8   (0x0008)  
	SDK_UNDEFINED(80,5067) /* TMap<AGenerator*, FFastTimer> */ __um(_overchargedGeneratorTimers);                  // 0x03E0   (0x0050)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0430   (0x0030)  MISSED
	SDK_UNDEFINED(80,5068) /* TMap<AGenerator*, uint64_t> */ __um(_gameplayModifierHandles);                       // 0x0460   (0x0050)  


	/// Functions
	// Function /Script/TheDoctor.Overcharge.GetSkillCheckFailurePenaltyAtLevel
	// float GetSkillCheckFailurePenaltyAtLevel();                                                                           // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.Overcharge.GetRegressionRateMultiplierCurve
	// class UCurveFloat* GetRegressionRateMultiplierCurve();                                                                // [0x5a59bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheDoctor.RestraintRevealToKillerEffect
/// Size: 0x0000 (0x000380 - 0x000380)
class URestraintRevealToKillerEffect : public UActivateOnEventTimedStatusEffect
{ 
public:
};

/// Class /Script/TheDoctor.ShockTherapy
/// Size: 0x01B0 (0x000790 - 0x000940)
class UShockTherapy : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0790   (0x0038)  MISSED
	class UClass*                                      _shockTherapyConeAOEClass;                                  // 0x07C8   (0x0008)  
	class UClass*                                      _shockTherapyLineAOEClass;                                  // 0x07D0   (0x0008)  
	class UClass*                                      _shockTherapyCircleAOEClass;                                // 0x07D8   (0x0008)  
	TArray<class AShockTherapyAOE*>                    _shockTherapyZones;                                         // 0x07E0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x07F0   (0x0030)  MISSED
	FTunableStat                                       _shockTherapyDetonationDelay;                               // 0x0820   (0x0080)  
	FDBDTunableRowHandle                               _shockTherapyBlockActionDuration;                           // 0x08A0   (0x0028)  
	FDBDTunableRowHandle                               _shockTherapySecondsToCharge;                               // 0x08C8   (0x0028)  
	class UClass*                                      _shockTherapyBlockAllInteractionsEffectClass;               // 0x08F0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x08F8   (0x0010)  MISSED
	FDBDTunableRowHandle                               _shockTherapyMadnessGain;                                   // 0x0908   (0x0028)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0930   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheDoctor.ShockTherapy.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5a5a2b0] Final|Native|Private 
	// Function /Script/TheDoctor.ShockTherapy.Multicast_DetonateShockTherapy
	// void Multicast_DetonateShockTherapy(TArray<ACamperPlayer*> shockedSurvivors, float madnessToAdd);                     // [0x5a5a1c0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheDoctor.ShockTherapy.Multicast_ActivateShockTherapyAOE
	// void Multicast_ActivateShockTherapyAOE(FTransform shockTherapyZoneTransform);                                         // [0x5a5a0f0] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheDoctor.ShockTherapy.Cosmetic_OnShockTherapyChargeEnd
	// void Cosmetic_OnShockTherapyChargeEnd(class ADBDPlayer* Player, bool charged);                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheDoctor.ShockTherapyAOE
/// Size: 0x00F0 (0x000230 - 0x000320)
class AShockTherapyAOE : public AActor
{ 
public:
	class UStaticMeshComponent*                        _attackZone;                                                // 0x0230   (0x0008)  
	class USceneComponent*                             _rootComponent;                                             // 0x0238   (0x0008)  
	FTunableStat                                       _shockTherapyRange;                                         // 0x0240   (0x0080)  
	float                                              _killerOffset;                                              // 0x02C0   (0x0004)  
	float                                              _baseZoneSize;                                              // 0x02C4   (0x0004)  
	class UClass*                                      _shockTherapyPreviewClass;                                  // 0x02C8   (0x0008)  
	class AShockTherapyAOEPreview*                     _shockTherapyPreview;                                       // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02D8   (0x0008)  MISSED
	FTransform                                         _previewTransform;                                          // 0x02E0   (0x0030)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0310   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheDoctor.ShockTherapyAOE.OnScaleInitialized
	// void OnScaleInitialized();                                                                                            // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.ShockTherapyAOE.Cosmetic_ActivateShockTherapyAOE
	// void Cosmetic_ActivateShockTherapyAOE();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheDoctor.ShockTherapyAOEPreview
/// Size: 0x0098 (0x000230 - 0x0002C8)
class AShockTherapyAOEPreview : public AActor
{ 
public:
	FVector                                            _baseWorldScale;                                            // 0x0230   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	FTunableStat                                       _shockTherapyRange;                                         // 0x0240   (0x0080)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheDoctor.ShockTherapyAOEPreview.SetAttackZonePreviewScale
	// void SetAttackZonePreviewScale(FVector& Scale);                                                                       // [0x61c32d0] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/TheDoctor.SnapOutOfIt
/// Size: 0x0090 (0x000790 - 0x000820)
class USnapOutOfIt : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _postSnapOutOfItMadnessTier;                                // 0x0790   (0x0028)  
	FDBDTunableRowHandle                               _snapOutOfItSkillCheckFailTimePenalty;                      // 0x07B8   (0x0028)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x07E0   (0x0030)  MISSED
	bool                                               _isSkillCheckFailureTimerActive;                            // 0x0810   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0811   (0x000F)  MISSED


	/// Functions
	// Function /Script/TheDoctor.SnapOutOfIt.Authority_OnSkillCheckResponseAuthority
	// void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType Type); // [0x5a5a870] Final|Native|Private 
};

/// Class /Script/TheDoctor.StaticBlast
/// Size: 0x0100 (0x000790 - 0x000890)
class UStaticBlast : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0790   (0x0090)  MISSED
	float                                              _staticBlastActivationDelay;                                // 0x0820   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0824   (0x0004)  MISSED
	FDBDTunableRowHandle                               _staticBlastMadnessGain;                                    // 0x0828   (0x0028)  
	FDBDTunableRowHandle                               _staticBlastSecondsToCharge;                                // 0x0850   (0x0028)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0878   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheDoctor.StaticBlast.Multicast_StaticBlastShockSurvivors
	// void Multicast_StaticBlastShockSurvivors(TArray<ACamperPlayer*> survivorsToShock);                                    // [0x5a5acf0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheDoctor.StaticBlast.Cosmetic_OnStaticBlastChargeEnd
	// void Cosmetic_OnStaticBlastChargeEnd(class ADBDPlayer* Player, bool charged);                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheDoctor.SurvivorCartersSparkComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class USurvivorCartersSparkComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheDoctor.SurvivorMadnessEffect
/// Size: 0x0150 (0x000350 - 0x0004A0)
class USurvivorMadnessEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0350   (0x0020)  MISSED
	float                                              _madnessAmount;                                             // 0x0370   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0374   (0x0004)  MISSED
	FDBDTunableRowHandle                               _maxMadnessTier;                                            // 0x0378   (0x0028)  
	TArray<FDBDTunableRowHandle>                       _madnessThresholds;                                         // 0x03A0   (0x0010)  
	TArray<FDBDTunableRowHandle>                       _insaneSkillCheckChances;                                   // 0x03B0   (0x0010)  
	FDBDTunableRowHandle                               _screamDelayMin;                                            // 0x03C0   (0x0028)  
	FDBDTunableRowHandle                               _screamDelayMax;                                            // 0x03E8   (0x0028)  
	FName                                              madnessStatusViewId;                                        // 0x0410   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4C];                                      // 0x041C   (0x004C)  MISSED
	FGameplayTagContainer                              _survivorOperatingLockerSemanticTags;                       // 0x0468   (0x0020)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0488   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheDoctor.SurvivorMadnessEffect.SpawnMadnessBubbleIndicator
	// void SpawnMadnessBubbleIndicator();                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheDoctor.SurvivorMadnessEffect.OnRep_MadnessAmount
	// void OnRep_MadnessAmount();                                                                                           // [0x5a5b470] Final|Native|Private 
	// Function /Script/TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierChanged
	// void Multicast_OnMadnessTierChanged(int32_t newMadnessTier, int32_t oldMadnessTier);                                  // [0x5a5b3a0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheDoctor.SurvivorMadnessEffect.Multicast_MadnessIntermittentScream
	// void Multicast_MadnessIntermittentScream();                                                                           // [0x5916d10] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/TheDoctor.SurvivorMadnessEffect.GetMadnessTier
	// int32_t GetMadnessTier();                                                                                             // [0x5a5b370] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDoctor.SurvivorMadnessEffect.Authority_AddMadness
	// void Authority_AddMadness(float amountToAdd);                                                                         // [0x5a5b2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheDoctor.SurvivorMadnessEffect.ActivateMadnessBubbleIndicator
	// void ActivateMadnessBubbleIndicator();                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheDoctor.TheDoctorUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UTheDoctorUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheDoctor.TheDoctorUtilities.IsTotallyInsane
	// bool IsTotallyInsane(class ADBDPlayer* Player);                                                                       // [0x5a5b860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect
	// class USurvivorMadnessEffect* GetSurvivorMadnessEffect(class ADBDPlayer* Player);                                     // [0x5a5b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheDoctor.TheDoctorUtilities.GetMadnessTier
	// int32_t GetMadnessTier(class ADBDPlayer* Player);                                                                     // [0x5a5b740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheDoctor.TheDoctorUtilities.CanGainInsanity
	// bool CanGainInsanity(class ADBDPlayer* Player);                                                                       // [0x5a5b6b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

