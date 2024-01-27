
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
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: StatSystem

/// Class /Script/TheSpirit.ActivePhaseWalkInteraction
/// Size: 0x0170 (0x000790 - 0x000900)
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
{ 
public:
	FTunableStat                                       _fullyChargedSpeed;                                         // 0x0788   (0x0080)  
	float                                              _accelerationMultiplier;                                    // 0x0808   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x080C   (0x0004)  MISSED
	class UCurveFloat*                                 _chargingSpeedCurve;                                        // 0x0810   (0x0008)  
	FDBDTunableRowHandle                               _phaseWalkPenaltyThreshold;                                 // 0x0818   (0x0028)  
	FDBDTunableRowHandle                               _phaseWalkPenaltyValue;                                     // 0x0840   (0x0028)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0868   (0x0008)  MISSED
	FTunableStat                                       _activePhaseWalkChargeDuration;                             // 0x0870   (0x0080)  
	class UAnimMontage*                                _activePhaseWalkChargingMontage;                            // 0x08F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x08F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheSpirit.ActivePhaseWalkInteraction.OnPowerCollected
	// void OnPowerCollected(class ADBDPlayer* collector);                                                                   // [0x5df8630] Final|Native|Private 
	// Function /Script/TheSpirit.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged
	// void OnPlayerLocallyObservedChanged(class ADBDPlayer* Player);                                                        // [0x5df85a0] Final|Native|Private 
	// Function /Script/TheSpirit.ActivePhaseWalkInteraction.GetChargeTime
	// float GetChargeTime();                                                                                                // [0x5df8570] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX
	// void Cosmetic_ResetChargeVFX(class ADBDPlayer* Player);                                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheSpirit.Autodidact
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UAutodidact : public UPerk
{ 
public:
	int32_t                                            _maxTokenCountPerLevel;                                     // 0x03C8   (0x000C)  
	float                                              _progressionBonusPerToken;                                  // 0x03D4   (0x0004)  
	float                                              _initialSkillCheckProgressionPenalty;                       // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x03DC   (0x000C)  MISSED
};

/// Class /Script/TheSpirit.Deliverance
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UDeliverance : public UPerk
{ 
public:
	float                                              _brokenEffectDurationPerLevel;                              // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _selfUnhookAlwaysSucceedEffectClass;                        // 0x03D8   (0x0008)  
	class UStatusEffect*                               _selfUnhookAlwaysSucceedEffect;                             // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/TheSpirit.Deliverance.GetBrokenEffectDurationAtLevel
	// float GetBrokenEffectDurationAtLevel();                                                                               // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheSpirit.Diversion
/// Size: 0x0080 (0x0003C8 - 0x000448)
class UDiversion : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x03C8   (0x0060)  MISSED
	float                                              _diversionActivationTimePerLevel;                           // 0x0428   (0x000C)  
	float                                              _throwPebbleDistance;                                       // 0x0434   (0x0004)  
	class UClass*                                      _throwPebbleInteraction;                                    // 0x0438   (0x0008)  
	class UInteractionAttacherComponent*               _interactionAttacherComponent;                              // 0x0440   (0x0008)  


	/// Functions
	// Function /Script/TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged
	// void Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState); // [0x5df8ab0] Final|Native|Private 
};

/// Class /Script/TheSpirit.DriedCherryBlossom
/// Size: 0x0008 (0x0002D8 - 0x0002E0)
class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02D8   (0x0008)  MISSED
};

/// Class /Script/TheSpirit.KatsumoriTalisman
/// Size: 0x0020 (0x0002B8 - 0x0002D8)
class UKatsumoriTalisman : public UItemAddon
{ 
public:
	TArray<class AActor*>                              _blockableWindows;                                          // 0x02B8   (0x0010)  
	float                                              _explosionRadius;                                           // 0x02C8   (0x0004)  
	float                                              _blockDuration;                                             // 0x02CC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02D0   (0x0008)  MISSED
};

/// Class /Script/TheSpirit.MotherDaughterRing
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UMotherDaughterRing : public UItemAddon
{ 
public:
	class UClass*                                      _hideFootstepsEffect;                                       // 0x02B8   (0x0008)  
};

/// Class /Script/TheSpirit.OwningPlayerInSpiritHuskRange
/// Size: 0x0010 (0x000108 - 0x000118)
class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0108   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5df91f0] Final|Native|Public  
};

/// Class /Script/TheSpirit.PhaseWalkingComponent
/// Size: 0x0598 (0x0000B8 - 0x000650)
class UPhaseWalkingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,4153) /* FMulticastInlineDelegate */ __um(OnPhaseWalkInfoReceived);                           // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,4154) /* FMulticastInlineDelegate */ __um(OnGameEndedVFX);                                    // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,4155) /* FMulticastInlineDelegate */ __um(TriggerSurvivorVisibilityVFX);                      // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,4156) /* FMulticastInlineDelegate */ __um(TriggerKillerVisibilityVFX);                        // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,4157) /* FMulticastInlineDelegate */ __um(OnMaxActivePhaseWalkCharges);                       // 0x0100   (0x0010)  
	class UClass*                                      _huskClass;                                                 // 0x0110   (0x0008)  
	FTagStateBool                                      _isActivePhaseWalking;                                      // 0x0118   (0x0030)  
	FTagStateBool                                      _isPassivePhaseWalking;                                     // 0x0148   (0x0030)  
	FTagStateBool                                      _isInPostActivePhaseWalk;                                   // 0x0178   (0x0030)  
	bool                                               _isInteractionPhaseWalking;                                 // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x01A9   (0x0007)  MISSED
	class AActor*                                      _husk;                                                      // 0x01B0   (0x0008)  
	FDBDBidirectionalTimer                             _activePhaseWalkCharges;                                    // 0x01B8   (0x0028)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x01E0   (0x0028)  MISSED
	bool                                               _survivorsAreVisible;                                       // 0x0208   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3F];                                      // 0x0209   (0x003F)  MISSED
	int32_t                                            _passivePhaseWalkHusksCount;                                // 0x0248   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	TArray<FGameplayTag>                               _isVisibleDuringPhaseWalkTags;                              // 0x0250   (0x0010)  
	FTunableStat                                       _activePhaseWalkChargeGainRate;                             // 0x0260   (0x0080)  
	FTunableStat                                       _passivePhaseWalkDuration;                                  // 0x02E0   (0x0080)  
	FDBDTunableRowHandle                               _passivePhaseWalkFirstCooldownDuration;                     // 0x0360   (0x0028)  
	FTunableStat                                       _passivePhaseWalkCooldownDurationMin;                       // 0x0388   (0x0080)  
	FTunableStat                                       _passivePhaseWalkCooldownDurationMax;                       // 0x0408   (0x0080)  
	FTunableStat                                       _activePhaseWalkMaxCharge;                                  // 0x0488   (0x0080)  
	FTunableStat                                       _postActivePhaseWalkDuration;                               // 0x0508   (0x0080)  
	FDBDTunableRowHandle                               _activePhaseWalkMaxAcceleration;                            // 0x0588   (0x0028)  
	FDBDTunableRowHandle                               _defaultMaxAcceleration;                                    // 0x05B0   (0x0028)  
	class UCurveFloat*                                 _postPhaseWalkSpeedCurve;                                   // 0x05D8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x70];                                      // 0x05E0   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheSpirit.PhaseWalkingComponent.UpdateSurvivorVisibility
	// void UpdateSurvivorVisibility(bool visible);                                                                          // [0x5dfa320] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheSpirit.PhaseWalkingComponent.UpdateKillerVisibility
	// void UpdateKillerVisibility();                                                                                        // [0x5dfa300] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheSpirit.PhaseWalkingComponent.SpawnPassivePhaseWalkHusks
	// void SpawnPassivePhaseWalkHusks();                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheSpirit.PhaseWalkingComponent.Server_Broadcast_PhaseWalk
	// void Server_Broadcast_PhaseWalk(FPhaseWalkInfo PhaseWalkInfo);                                                        // [0x5dfa210] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheSpirit.PhaseWalkingComponent.RefillActivePhaseWalkCharges
	// void RefillActivePhaseWalkCharges();                                                                                  // [0x5dfa1f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheSpirit.PhaseWalkingComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5dfa1d0] Final|Native|Private 
	// Function /Script/TheSpirit.PhaseWalkingComponent.Multicast_Broadcast_PhaseWalk
	// void Multicast_Broadcast_PhaseWalk(FPhaseWalkInfo PhaseWalkInfo);                                                     // [0x5dfa0e0] Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate 
	// Function /Script/TheSpirit.PhaseWalkingComponent.ModifyActivePhaseWalkCharges
	// void ModifyActivePhaseWalkCharges(float Delta);                                                                       // [0x5dfa060] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheSpirit.PhaseWalkingComponent.MakePassivePhaseWalkHusksVisible
	// void MakePassivePhaseWalkHusksVisible(FTransform& huskTransform, float opacityValue, float speedValue);               // [0x61c32d0] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheSpirit.PhaseWalkingComponent.Local_PhaseWalk
	// void Local_PhaseWalk(FPhaseWalkInfo& PhaseWalkInfo);                                                                  // [0x5df9f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TheSpirit.PhaseWalkingComponent.Local_EndPhaseWalks
	// void Local_EndPhaseWalks();                                                                                           // [0x5df9f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheSpirit.PhaseWalkingComponent.IsPhaseWalking
	// bool IsPhaseWalking();                                                                                                // [0x5df9f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.IsPassivePhaseWalking
	// bool IsPassivePhaseWalking();                                                                                         // [0x5df9f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.IsDecoyActive
	// bool IsDecoyActive();                                                                                                 // [0x5df9ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.IsActivePhaseWalking
	// bool IsActivePhaseWalking();                                                                                          // [0x5df9ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.GetSpiritPassivePhaseWalkHusksCountToSpawn
	// int32_t GetSpiritPassivePhaseWalkHusksCountToSpawn();                                                                 // [0x5df9e70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.GetPassivePhaseWalkTimer
	// FDBDTimer GetPassivePhaseWalkTimer();                                                                                 // [0x5df9e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.GetHusk
	// class AActor* GetHusk();                                                                                              // [0x5df9de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.GetDecoySlasherComponent
	// class UDecoySlasherComponent* GetDecoySlasherComponent();                                                             // [0x5df9db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkCharges
	// float GetActivePhaseWalkCharges();                                                                                    // [0x5df9d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkChargePercentage
	// float GetActivePhaseWalkChargePercentage();                                                                           // [0x5df9d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.DBD_RefillActivePhaseWalkCharges
	// void DBD_RefillActivePhaseWalkCharges();                                                                              // [0x45fe020] Final|Exec|Native|Private 
	// Function /Script/TheSpirit.PhaseWalkingComponent.CanStartActivePhaseWalk
	// bool CanStartActivePhaseWalk();                                                                                       // [0x5df9d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.PhaseWalkingComponent.Authority_SetIsInPostActivePhaseWalk
	// void Authority_SetIsInPostActivePhaseWalk(bool value);                                                                // [0x5df9c70] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/TheSpirit.Rancor
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class URancor : public UPerk
{ 
public:
	float                                              _survivorRevealDuration;                                    // 0x03C8   (0x0004)  
	float                                              _killerRevealToObsessionDuration;                           // 0x03CC   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x03D8   (0x0008)  MISSED
	class UStatusEffect*                               _exposedStatusEffect;                                       // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation
	// void SpawnBubbleAtSurvivorsLocation();                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheSpirit.Rancor.GetSurvivorRevealDuration
	// float GetSurvivorRevealDuration();                                                                                    // [0x501b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheSpirit.Rancor.GetKillerRevealToObsessionDurationAtLevel
	// float GetKillerRevealToObsessionDurationAtLevel();                                                                    // [0x500a950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheSpirit.SpiritFury
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class USpiritFury : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x03C8   (0x0004)  MISSED
	int32_t                                            _palletToBreakCountPerLevel;                                // 0x03CC   (0x000C)  


	/// Functions
	// Function /Script/TheSpirit.SpiritFury.GetPalletToBreakCountAtLevel
	// int32_t GetPalletToBreakCountAtLevel();                                                                               // [0x5dfa790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheSpirit.SpiritHuskAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class USpiritHuskAnimInstance : public UAnimInstance
{ 
public:
	class USkeletalMeshComponent*                      _killerMesh;                                                // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/TheSpirit.SpiritHuskActivePhaseWalkAnimInstance
/// Size: 0x0030 (0x0002D0 - 0x000300)
class USpiritHuskActivePhaseWalkAnimInstance : public USpiritHuskAnimInstance
{ 
public:
	float                                              _elapsedTimeSinceFakingRealKillerPose;                      // 0x02D0   (0x0004)  
	float                                              _idleAnimationExplicitTime;                                 // 0x02D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02D8   (0x0008)  MISSED
	class UAnimSequence*                               _idleAnimationSequence;                                     // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02E8   (0x0018)  MISSED
};

/// Class /Script/TheSpirit.SpiritHuskOutlineUpdateStrategy
/// Size: 0x0028 (0x0000E0 - 0x000108)
class USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00E0   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* Slasher);                                                                     // [0x5dfacf0] Final|Native|Private 
};

/// Class /Script/TheSpirit.ThrowRockInteraction
/// Size: 0x0070 (0x000650 - 0x0006C0)
class UThrowRockInteraction : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _loudNoiseAudioRange;                                       // 0x0648   (0x0028)  
	float                                              _scratchMarksApplicationDelay;                              // 0x0670   (0x0004)  
	int32_t                                            _scratchMarksCountToSpawn;                                  // 0x0674   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0678   (0x0004)  MISSED
	float                                              _diversionHeightOffset;                                     // 0x067C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0680   (0x0040)  MISSED
};

/// Struct /Script/TheSpirit.PhaseWalkInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhaseWalkInfo
{ 
	bool                                               IsActivePhaseWalking;                                       // 0x0000   (0x0001)  
	bool                                               IsPassivePhaseWalking;                                      // 0x0001   (0x0001)  
	bool                                               IsInteractionPhaseWalking;                                  // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FVector                                            HuskLocation;                                               // 0x0004   (0x000C)  
	FRotator                                           HuskRotation;                                               // 0x0010   (0x000C)  
	bool                                               TeleportToHusk;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

