
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
	SDK_UNDEFINED(80,5588) /* TMap<ABearTrap*, ACamperPlayer*> */ __um(_disarmedTrapMap);                          // 0x02C8   (0x0050)  
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
	SDK_UNDEFINED(16,5589) /* FMulticastInlineDelegate */ __um(_onIsTrapSetChanged);                               // 0x0518   (0x0010)  
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
	// void TrySetTrappedPlayer(class ADBDPlayer* Player);                                                                   // [0x5e1e560] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.SetTrappedPlayerSinceMoved
	// void SetTrappedPlayerSinceMoved(bool didTrap);                                                                        // [0x5e1e4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.SetTrappedPlayer
	// void SetTrappedPlayer(class ADBDPlayer* trappedPlayer);                                                               // [0x5e1e440] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.PlayMontage
	// void PlayMontage(class UAnimMontage* Montage);                                                                        // [0x5e1e3b0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TheTrapper.BearTrap.OnTrappedPlayerPickedUp
	// void OnTrappedPlayerPickedUp(class ADBDPlayer* picker);                                                               // [0x5e1e320] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnTrapDetectionZoneOverlapEnd
	// void OnTrapDetectionZoneOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5e1e1c0] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnTrapDetectionZoneOverlapBegin
	// void OnTrapDetectionZoneOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5e1dfa0] Final|Native|Private|HasOutParms 
	// Function /Script/TheTrapper.BearTrap.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* Slasher);                                                                     // [0x5e1df10] Final|Native|Protected 
	// Function /Script/TheTrapper.BearTrap.OnSafetyZoneEndOverlap
	// void OnSafetyZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5e1ddb0] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnLevelReadyToPlay_Implementation
	// void OnLevelReadyToPlay_Implementation();                                                                             // [0x5e1dd90] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnCollectUpdateStart
	// void OnCollectUpdateStart();                                                                                          // [0x5e1dd70] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.OnCollectUpdateEnd
	// void OnCollectUpdateEnd();                                                                                            // [0x5e1dd50] Final|Native|Private 
	// Function /Script/TheTrapper.BearTrap.IsTrapperOutOfSafetyZone
	// bool IsTrapperOutOfSafetyZone();                                                                                      // [0x5e1dd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.InitializeTrapSurvivorInteraction
	// void InitializeTrapSurvivorInteraction(class UInteractionDefinition* Interaction);                                    // [0x5e1dc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.InitializeTrapKillerInteraction
	// void InitializeTrapKillerInteraction(class UInteractionDefinition* Interaction);                                      // [0x5e1dc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.InitializeMainInteractor
	// void InitializeMainInteractor(class UInteractor* Interactor);                                                         // [0x5e1db70] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrap.HasTrappedPlayerSinceMoved
	// bool HasTrappedPlayerSinceMoved();                                                                                    // [0x5e1db40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.HasTrappedPlayer
	// bool HasTrappedPlayer();                                                                                              // [0x5e1db10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetTrappedPlayer
	// class ADBDPlayer* GetTrappedPlayer();                                                                                 // [0x5e1dae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetSelfUntrapAttemptsRemaining
	// int32_t GetSelfUntrapAttemptsRemaining();                                                                             // [0x5e1dac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetMaximumAttemptsForSelfUntrap
	// int32_t GetMaximumAttemptsForSelfUntrap();                                                                            // [0x5e1daa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetAnimInstance
	// class UBearTrapAnimInstance* GetAnimInstance();                                                                       // [0x5e1da70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.GetAkAudioComponent
	// class UAkComponent* GetAkAudioComponent();                                                                            // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/TheTrapper.BearTrap.Cosmetic_OnPlayerTrapped
	// void Cosmetic_OnPlayerTrapped(class ADBDPlayer* trappedPlayer);                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheTrapper.BearTrap.Authority_ImposeRevealAuraEffect
	// void Authority_ImposeRevealAuraEffect(class ACamperPlayer* Survivor);                                                 // [0x5e1d9e0] Final|Native|Protected 
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
	// void SetWasJustDisarmed(bool wasJustDisarmed);                                                                        // [0x5e1e950] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrapAnimInstance.SetIsTrapSet
	// void SetIsTrapSet(bool IsTrapSet);                                                                                    // [0x5e1e8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
	// void SetIsBeingCollected(bool isBeingCollected);                                                                      // [0x5872ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
	// void SetContainsSurvivor(bool containsSurvivor);                                                                      // [0x5e1e830] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheTrapper.BearTrapKillerComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBearTrapKillerComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheTrapper.BearTrapKillerComponent.Server_TryDisarmTrap
	// void Server_TryDisarmTrap(class ABearTrap* trapToDisarm);                                                             // [0x505fd60] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/TheTrapper.BearTrapKillerComponent.Multicast_DisarmTrap
	// void Multicast_DisarmTrap(class ABearTrap* trapToDisarm);                                                             // [0x58cbe00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheTrapper.DisarmBearTrapInteraction
/// Size: 0x0020 (0x000790 - 0x0007B0)
class UDisarmBearTrapInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              _averageMaxVelocity;                                        // 0x0790   (0x0004)  
	float                                              _averageMaxVelocitySquared;                                 // 0x0794   (0x0004)  
	FName                                              _updateMontageID;                                           // 0x0798   (0x000C)  
	FName                                              _loudNoiseAudibleRangeTunable;                              // 0x07A4   (0x000C)  
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
	FName                                              _enterMontageIDForBeartrap;                                 // 0x0790   (0x000C)  
	FName                                              _udpateMontageIDForBeartrap;                                // 0x079C   (0x000C)  
	class UAnimSequence*                               _updateSequenceForBeartrap;                                 // 0x07A8   (0x0008)  
	FName                                              _exitMontageForIDBeartrap;                                  // 0x07B0   (0x000C)  
	FName                                              _cancelExitMontage;                                         // 0x07BC   (0x000C)  
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x07C8   (0x0008)  
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x07D0   (0x0004)  
	float                                              _hasteEffectDurationSeconds;                                // 0x07D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x07D8   (0x0048)  MISSED
};

/// Class /Script/TheTrapper.SelfUntrap
/// Size: 0x00B0 (0x000790 - 0x000840)
class USelfUntrap : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _trapImmunityDuration;                                      // 0x0790   (0x0028)  
	FAnimationMontageDescriptor                        _successfulEscapeHealthy;                                   // 0x07B8   (0x0020)  
	FAnimationMontageDescriptor                        _successfulEscapeInjured;                                   // 0x07D8   (0x0020)  
	FAnimationMontageDescriptor                        _successfulEscapeCrawling;                                  // 0x07F8   (0x0020)  
	FAnimationMontageDescriptor                        _failedEscape;                                              // 0x0818   (0x0020)  
	bool                                               _canEscape;                                                 // 0x0838   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0839   (0x0007)  MISSED
};

/// Class /Script/TheTrapper.SetBearTrap
/// Size: 0x0060 (0x0007F0 - 0x000850)
class USetBearTrap : public USetTrapInteraction
{ 
public:
	FName                                              _enterMontageIDForBeartrap;                                 // 0x07F0   (0x000C)  
	FName                                              _udpateMontageIDForBeartrap;                                // 0x07FC   (0x000C)  
	class UAnimSequence*                               _updateSequenceForBeartrap;                                 // 0x0808   (0x0008)  
	FName                                              _exitMontageForIDBeartrap;                                  // 0x0810   (0x000C)  
	FName                                              _cancelExitMontage;                                         // 0x081C   (0x000C)  
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x0828   (0x0008)  
	float                                              _hasteEffectMovementSpeedIncrease;                          // 0x0830   (0x0004)  
	float                                              _hasteEffectDurationSeconds;                                // 0x0834   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0838   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheTrapper.SetBearTrap.GetHasteEffectMovementSpeedIncrease
	// float GetHasteEffectMovementSpeedIncrease();                                                                          // [0x5e1f2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheTrapper.SetBearTrap.GetHasteEffectDurationSeconds
	// float GetHasteEffectDurationSeconds();                                                                                // [0x5e1f280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheTrapper.SlashedOutOfBearTrapInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class USlashedOutOfBearTrapInteraction : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,5590) /* TArray<FString> */       __um(_overridableInteractions);                             // 0x0648   (0x0010)  
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
	SDK_UNDEFINED(16,5591) /* TArray<FString> */       __um(_nonOverridableInteractions);                          // 0x0648   (0x0010)  
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
	SDK_UNDEFINED(16,5592) /* TArray<FString> */       __um(_overridableInteractions);                             // 0x0648   (0x0010)  
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
	SDK_UNDEFINED(16,5593) /* TArray<FString> */       __um(_overridableInteractions);                             // 0x0790   (0x0010)  
	FName                                              _bearTrapUpdateMontageID;                                   // 0x07A0   (0x000C)  
	FName                                              _bearTrapFinishMontageID;                                   // 0x07AC   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x07B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheTrapper.Untrap.GetTrap
	// class ABearTrap* GetTrap();                                                                                           // [0x5e1fe50] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

