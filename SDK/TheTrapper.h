
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: StatSystem

/// Class /Script/TheTrapper.Addon_Beartrap_05
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UAddon_Beartrap_05 : public UItemAddon
{ 
public:
};

/// Class /Script/TheTrapper.Addon_Beartrap_DisarmRevealer
/// Size: 0x0060 (0x0002B8 - 0x000318)
class UAddon_Beartrap_DisarmRevealer : public UItemAddon
{ 
public:
	float                                              _auraRevealDuration;                                        // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	class UClass*                                      _timedRevealToKillerStatusEffect;                           // 0x02C0   (0x0008)  
	SDK_UNDEFINED(80,5198) /* TMap<ABearTrap*, ACamperPlayer*> */ __um(_disarmedTrapMap);                          // 0x02C8   (0x0050)  
};

/// Class /Script/TheTrapper.BearTrap
/// Size: 0x01C0 (0x0004D0 - 0x000690)
class ABearTrap : public ABaseTrap
{ 
public:
	class UBoxPlayerOverlapComponent*                  _interactionVolume;                                         // 0x04D0   (0x0008)  
	class UCapsulePlayerOverlapComponent*              _trapPlayerDetectionZone;                                   // 0x04D8   (0x0008)  
	class UBoxComponent*                               _killerSafetyZoneComponent;                                 // 0x04E0   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x04E8   (0x0008)  
	class UBearTrapOutlineUpdateStrategy*              _outlineUpdateStrategy;                                     // 0x04F0   (0x0008)  
	class UMapActorComponent*                          _mapActorComponent;                                         // 0x04F8   (0x0008)  
	class USphereComponent*                            _mapActorCollision;                                         // 0x0500   (0x0008)  
	class USphereComponent*                            _trapBlocker;                                               // 0x0508   (0x0008)  
	class UMontagePlayer*                              _montagePlayer;                                             // 0x0510   (0x0008)  
	SDK_UNDEFINED(16,5199) /* FMulticastInlineDelegate */ __um(_onIsTrapSetChanged);                               // 0x0518   (0x0010)  
	class ADBDPlayer*                                  _ownerPlayer;                                               // 0x0528   (0x0008)  
	class UClass*                                      _revealWhileTrappedStatusEffectClass;                       // 0x0530   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0538   (0x0008)  MISSED
	class UDBDNavModifierComponent*                    _dangerNavModifierComponent;                                // 0x0540   (0x0008)  
	bool                                               _isTrapperOutOfSafetyZone;                                  // 0x0548   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0549   (0x0003)  MISSED
	int32_t                                            _maximumAttemptsForSelfUntrap;                              // 0x054C   (0x0004)  
	int32_t                                            _selfUntrapAttemptsRemaining;                               // 0x0550   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0554   (0x0004)  MISSED
	class UInteractor*                                 _mainInteractor;                                            // 0x0558   (0x0008)  
	class UInteractionDefinition*                      _trapSurvivor;                                              // 0x0560   (0x0008)  
	class UInteractionDefinition*                      _trapKiller;                                                // 0x0568   (0x0008)  
	class ADBDPlayer*                                  _trappedPlayer;                                             // 0x0570   (0x0008)  
	unsigned char                                      UnknownData03_5[0x68];                                      // 0x0578   (0x0068)  MISSED
	class UAnimationMontageSlave*                      _animationMontageSlave;                                     // 0x05E0   (0x0008)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x05E8   (0x0020)  MISSED
	FTunableStat                                       _baseBearTrapCarryCapacity;                                 // 0x0608   (0x0080)  
	class UStatusEffect*                               _honingStoneStatusEffect;                                   // 0x0688   (0x0008)  


	/// Functions
	// Function /Script/TheTrapper.BearTrap.TrySetTrappedPlayer
	// void TrySetTrappedPlayer(class ADBDPlayer* Player);                                                                   // [0x5e0d820] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.SetTrappedPlayerSinceMoved
	// void SetTrappedPlayerSinceMoved(bool didTrap);                                                                        // [0x5e0d790] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.SetTrappedPlayer
	// void SetTrappedPlayer(class ADBDPlayer* trappedPlayer);                                                               // [0x5e0d700] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.PlayMontage
	// void PlayMontage(class UAnimMontage* Montage);                                                                        // [0x5e0d670] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TheTrapper.BearTrap.OnTrappedPlayerPickedUp
	// void OnTrappedPlayerPickedUp(class ADBDPlayer* picker);                                                               // [0x5e0d5e0] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnTrapDetectionZoneOverlapEnd
	// void OnTrapDetectionZoneOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5e0d480] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnTrapDetectionZoneOverlapBegin
	// void OnTrapDetectionZoneOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5e0d260] Final|Native|Private|HasOutParms 
	// Function /Script/TheTrapper.BearTrap.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* Slasher);                                                                     // [0x5e0d1d0] Final|Native|Protected 
	// Function /Script/TheTrapper.BearTrap.OnSafetyZoneEndOverlap
	// void OnSafetyZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5e0d070] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnLevelReadyToPlay_Implementation
	// void OnLevelReadyToPlay_Implementation();                                                                             // [0x5e0d050] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnCollectUpdateStart
	// void OnCollectUpdateStart();                                                                                          // [0x5e0d030] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnCollectUpdateEnd
	// void OnCollectUpdateEnd();                                                                                            // [0x5e0d010] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.IsTrapperOutOfSafetyZone
	// bool IsTrapperOutOfSafetyZone();                                                                                      // [0x5e0cfe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.InitializeTrapSurvivorInteraction
	// void InitializeTrapSurvivorInteraction(class UInteractionDefinition* Interaction);                                    // [0x5e0cf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.InitializeTrapKillerInteraction
	// void InitializeTrapKillerInteraction(class UInteractionDefinition* Interaction);                                      // [0x5e0cec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.InitializeMainInteractor
	// void InitializeMainInteractor(class UInteractor* Interactor);                                                         // [0x5e0ce30] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.HasTrappedPlayerSinceMoved
	// bool HasTrappedPlayerSinceMoved();                                                                                    // [0x5e0ce00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.HasTrappedPlayer
	// bool HasTrappedPlayer();                                                                                              // [0x5e0cdd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetTrappedPlayer
	// class ADBDPlayer* GetTrappedPlayer();                                                                                 // [0x5e0cda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetSelfUntrapAttemptsRemaining
	// int32_t GetSelfUntrapAttemptsRemaining();                                                                             // [0x5e0cd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetMaximumAttemptsForSelfUntrap
	// int32_t GetMaximumAttemptsForSelfUntrap();                                                                            // [0x5e0cd60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetAnimInstance
	// class UBearTrapAnimInstance* GetAnimInstance();                                                                       // [0x5e0cd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetAkAudioComponent
	// class UAkComponent* GetAkAudioComponent();                                                                            // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.Cosmetic_OnPlayerTrapped
	// void Cosmetic_OnPlayerTrapped(class ADBDPlayer* trappedPlayer);                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTrapper.BearTrap.Authority_ImposeRevealAuraEffect
	// void Authority_ImposeRevealAuraEffect(class ACamperPlayer* Survivor);                                                 // [0x5e0cca0] Final|Native|Protected 
};

/// Class /Script/TheTrapper.BearTrapAnimInstance
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UBearTrapAnimInstance : public USleepingAnimInstance
{ 
public:
	bool                                               _isBeingCollected;                                          // 0x02D0   (0x0001)  
	bool                                               _containsSurvivor;                                          // 0x02D1   (0x0001)  
	bool                                               _isTrapSet;                                                 // 0x02D2   (0x0001)  
	bool                                               _wasJustDisarmed;                                           // 0x02D3   (0x0001)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x02D4   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
	// void SetWasJustDisarmed(bool wasJustDisarmed);                                                                        // [0x5e0dc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrapAnimInstance.SetIsTrapSet
	// void SetIsTrapSet(bool IsTrapSet);                                                                                    // [0x5e0db80] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
	// void SetIsBeingCollected(bool isBeingCollected);                                                                      // [0x586f610] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
	// void SetContainsSurvivor(bool containsSurvivor);                                                                      // [0x5e0daf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheTrapper.BearTrapKillerComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBearTrapKillerComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheTrapper.BearTrapKillerComponent.Server_TryDisarmTrap
	// void Server_TryDisarmTrap(class ABearTrap* trapToDisarm);                                                             // [0x507e2f0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheTrapper.BearTrapKillerComponent.Multicast_DisarmTrap
	// void Multicast_DisarmTrap(class ABearTrap* trapToDisarm);                                                             // [0x58c5550] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheTrapper.DisarmBearTrapInteraction
/// Size: 0x0020 (0x000790 - 0x0007B0)
class UDisarmBearTrapInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              _averageMaxVelocity;                                        // 0x0788   (0x0004)  
	float                                              _averageMaxVelocitySquared;                                 // 0x078C   (0x0004)  
	FName                                              _updateMontageID;                                           // 0x0790   (0x000C)  
	FName                                              _loudNoiseAudibleRangeTunable;                              // 0x079C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x07A8   (0x0008)  MISSED
};

/// Class /Script/TheTrapper.IridescentStone
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UIridescentStone : public UItemAddon
{ 
public:
};

/// Class /Script/TheTrapper.ResetBearTrapInteraction
/// Size: 0x0090 (0x000790 - 0x000820)
class UResetBearTrapInteraction : public UChargeableInteractionDefinition
{ 
public:
	FName                                              _enterMontageIDForBeartrap;                                 // 0x0788   (0x000C)  
	FName                                              _udpateMontageIDForBeartrap;                                // 0x0794   (0x000C)  
	class UAnimSequence*                               _updateSequenceForBeartrap;                                 // 0x07A0   (0x0008)  
	FName                                              _exitMontageForIDBeartrap;                                  // 0x07A8   (0x000C)  
	FName                                              _cancelExitMontage;                                         // 0x07B4   (0x000C)  
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x07C0   (0x0008)  
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x07C8   (0x0004)  
	float                                              _hasteEffectDurationSeconds;                                // 0x07CC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x07D0   (0x0050)  MISSED
};

/// Class /Script/TheTrapper.SelfUntrap
/// Size: 0x00B0 (0x000790 - 0x000840)
class USelfUntrap : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _trapImmunityDuration;                                      // 0x0788   (0x0028)  
	FAnimationMontageDescriptor                        _successfulEscapeHealthy;                                   // 0x07B0   (0x0020)  
	FAnimationMontageDescriptor                        _successfulEscapeInjured;                                   // 0x07D0   (0x0020)  
	FAnimationMontageDescriptor                        _successfulEscapeCrawling;                                  // 0x07F0   (0x0020)  
	FAnimationMontageDescriptor                        _failedEscape;                                              // 0x0810   (0x0020)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0830   (0x0001)  MISSED
	bool                                               _canEscape;                                                 // 0x0831   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0832   (0x000E)  MISSED
};

/// Class /Script/TheTrapper.SetBearTrap
/// Size: 0x0060 (0x0007F0 - 0x000850)
class USetBearTrap : public USetTrapInteraction
{ 
public:
	FName                                              _enterMontageIDForBeartrap;                                 // 0x07E8   (0x000C)  
	FName                                              _udpateMontageIDForBeartrap;                                // 0x07F4   (0x000C)  
	class UAnimSequence*                               _updateSequenceForBeartrap;                                 // 0x0800   (0x0008)  
	FName                                              _exitMontageForIDBeartrap;                                  // 0x0808   (0x000C)  
	FName                                              _cancelExitMontage;                                         // 0x0814   (0x000C)  
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x0820   (0x0008)  
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x0828   (0x0004)  
	float                                              _hasteEffectDurationSeconds;                                // 0x082C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0830   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheTrapper.SetBearTrap.GetHasteEffectMovementSpeedIncrease
	// float GetHasteEffectMovementSpeedIncrease();                                                                          // [0x5e0ea00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.SetBearTrap.GetHasteEffectDurationSeconds
	// float GetHasteEffectDurationSeconds();                                                                                // [0x5e0e9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheTrapper.SlashedOutOfBearTrapInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class USlashedOutOfBearTrapInteraction : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,5200) /* TArray<FString> */       __um(_overridableInteractions);                             // 0x0648   (0x0010)  
	class UAnimMontage*                                _updateMontage;                                             // 0x0658   (0x0008)  
};

/// Class /Script/TheTrapper.SurvivorBearTrapAnimInstance
/// Size: 0x0010 (0x000550 - 0x000560)
class USurvivorBearTrapAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isTrapped;                                                 // 0x0550   (0x0001)  
	EInteractionAnimation                              _interactionType;                                           // 0x0551   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0552   (0x000E)  MISSED
};

/// Class /Script/TheTrapper.TrapCamperInteraction
/// Size: 0x00A0 (0x000650 - 0x0006F0)
class UTrapCamperInteraction : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,5201) /* TArray<FString> */       __um(_nonOverridableInteractions);                          // 0x0648   (0x0010)  
	FName                                              _trapAttachSocket;                                          // 0x0658   (0x000C)  
	FName                                              _updateMontageID;                                           // 0x0664   (0x000C)  
	FName                                              _updateNoScreamMontageID;                                   // 0x0670   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x067C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _loudNoiseRangeTunable;                                     // 0x0680   (0x0028)  
	FDBDTunableRowHandle                               _hemorrhageEffectDurationTunable;                           // 0x06A8   (0x0028)  
	class UClass*                                      _hemorrhageStatusEffect;                                    // 0x06D0   (0x0008)  
	class UClass*                                      _mangledStatusEffect;                                       // 0x06D8   (0x0008)  
	class UClass*                                      _honingStoneWarningStatusEffect;                            // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x06E8   (0x0008)  MISSED
};

/// Class /Script/TheTrapper.TrapKillerInteraction
/// Size: 0x0060 (0x000650 - 0x0006B0)
class UTrapKillerInteraction : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,5202) /* TArray<FString> */       __um(_overridableInteractions);                             // 0x0648   (0x0010)  
	FRotator                                           _caughtFootRotationOffset;                                  // 0x0658   (0x000C)  
	FName                                              _openNotifyID;                                              // 0x0664   (0x000C)  
	FName                                              _footSocketName;                                            // 0x0670   (0x000C)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x067C   (0x0034)  MISSED
};

/// Class /Script/TheTrapper.TrapperAnimInstance
/// Size: 0x0000 (0x000610 - 0x000610)
class UTrapperAnimInstance : public UKillerAnimInstance
{ 
public:
};

/// Class /Script/TheTrapper.Untrap
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UUntrap : public UChargeableInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,5203) /* TArray<FString> */       __um(_overridableInteractions);                             // 0x0788   (0x0010)  
	FName                                              _bearTrapUpdateMontageID;                                   // 0x0798   (0x000C)  
	FName                                              _bearTrapFinishMontageID;                                   // 0x07A4   (0x000C)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x07B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheTrapper.Untrap.GetTrap
	// class ABearTrap* GetTrap();                                                                                           // [0x5e0f6f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

