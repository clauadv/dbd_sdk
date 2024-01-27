
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
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: NetworkUtilities

/// Class /Script/TheNightmare.BlackBox
/// Size: 0x0040 (0x0002B8 - 0x0002F8)
class UBlackBox : public UItemAddon
{ 
public:
	FDBDTunableRowHandle                               _blockDuration;                                             // 0x02B8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02E0   (0x0018)  MISSED
};

/// Class /Script/TheNightmare.BloodWarden
/// Size: 0x0070 (0x0003C8 - 0x000438)
class UBloodWarden : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x03C8   (0x0050)  MISSED
	class UClass*                                      _bloodWardenBlockerStatusEffectClass;                       // 0x0418   (0x0008)  
	class UClass*                                      _revealPlayerStatusEffectClass;                             // 0x0420   (0x0008)  
	float                                              _perkLevelSpikeDurations;                                   // 0x0428   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0434   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheNightmare.BloodWarden.GetPerkLevelSpikeDurationsAtLevel
	// float GetPerkLevelSpikeDurationsAtLevel();                                                                            // [0x5d80a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheNightmare.DreamInducerComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UDreamInducerComponent : public UActorComponent
{ 
public:
	class UClass*                                      _generatorDreamworldClass;                                  // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5d80c10] Final|Native|Private 
};

/// Class /Script/TheNightmare.DreamSnare
/// Size: 0x0008 (0x000230 - 0x000238)
class ADreamSnare : public AActor
{ 
public:
	bool                                               _isActive;                                                  // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Class /Script/TheNightmare.DreamSnareEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UDreamSnareEffect : public UStatusEffect
{ 
public:


	/// Functions
	// Function /Script/TheNightmare.DreamSnareEffect.OnActorEndOverlap
	// void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                      // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheNightmare.DreamSnareEffect.OnActorBeginOverlap
	// void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/TheNightmare.FireUp
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UFireUp : public UPerk
{ 
public:
	float                                              _speedBonuses;                                              // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheNightmare.FireUp.GetSpeedBonusAtLevel
	// float GetSpeedBonusAtLevel();                                                                                         // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheNightmare.GeneratorDreamworldComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UGeneratorDreamworldComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	TArray<FName>                                      _beamSocketsForBloodEffect;                                 // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed
	// void OnRepairSkillCheckFailed(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange); // [0x5d81260] Final|Native|Private 
	// Function /Script/TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck
	// void Cosmetic_OnPlayerFailSkillCheck(class ADBDPlayer* Player);                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheNightmare.GeneratorTeleportInteraction
/// Size: 0x00C0 (0x000790 - 0x000850)
class UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              OnBloodSpurtsAINoiseEventRange;                             // 0x0788   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x078C   (0x0004)  MISSED
	class UTimerObject*                                _teleportCooldownTimer;                                     // 0x0790   (0x0008)  
	unsigned char                                      UnknownData01_5[0x40];                                      // 0x0798   (0x0040)  MISSED
	class AGenerator*                                  _selectedGenerator;                                         // 0x07D8   (0x0008)  
	class AGenerator*                                  _locallySelectedGenerator;                                  // 0x07E0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x07E8   (0x0008)  MISSED
	FTransform                                         _selectedTeleportLocation;                                  // 0x07F0   (0x0030)  
	bool                                               _isInteractionOngoing;                                      // 0x0820   (0x0001)  
	bool                                               _teleportFailed;                                            // 0x0821   (0x0001)  
	bool                                               _noTeleportableGenerators;                                  // 0x0822   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0823   (0x0001)  MISSED
	float                                              _bloodSpurtInterval;                                        // 0x0824   (0x0004)  
	float                                              _collisionCheckCapsuleHalfHeight;                           // 0x0828   (0x0004)  
	float                                              _collisionCheckCapsuleRadius;                               // 0x082C   (0x0004)  
	FVector                                            _collisionCheckLocationOffset;                              // 0x0830   (0x000C)  
	float                                              _capsuleTraceAngleIncrement;                                // 0x083C   (0x0004)  
	float                                              _generatorTeleportMaxAngle;                                 // 0x0840   (0x0004)  
	float                                              _downRaycastLength;                                         // 0x0844   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0848   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts
	// void StopBloodSpurts();                                                                                               // [0x5d82560] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts
	// void StartBloodSpurts();                                                                                              // [0x5d82540] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX
	// void ShowBloodSpurtsVFX();                                                                                            // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator
	// void Server_SetSelectedGenerator(class AGenerator* Generator);                                                        // [0x5d82480] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnTeleportReady
	// void OnTeleportReady();                                                                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen
	// void OnTeleportLocationChosen(class AGenerator* Generator, FTransform Location);                                      // [0x61c32d0] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnTeleported
	// void OnTeleported(FTransform transformBeforeTeleport);                                                                // [0x61c32d0] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet
	// void OnSelectedGeneratorSet(class AGenerator* selectedGenerator);                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer
	// void OnRep_TeleportCooldownTimer();                                                                                   // [0x5d82460] Final|Native|Private 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator
	// void OnRep_SelectedGenerator();                                                                                       // [0x5d82440] Final|Native|Private 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet
	// void OnLocallySelectedGeneratorSet(class AGenerator* selectedGenerator);                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5d82420] Final|Native|Protected 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts
	// void OnBloodSpurts();                                                                                                 // [0x5d82400] Final|Native|Protected 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer
	// void Multicast_TeleportPlayer(FVector Location, FRotator Rotation);                                                   // [0x5b6f650] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen
	// void Multicast_OnTeleportLocationChosen(class AGenerator* Generator, FTransform Location);                            // [0x5d822b0] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable
	// bool IsTeleportAvailable();                                                                                           // [0x5d82280] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues
	// void InitializeTunableValues(class ASlasherPlayer* killer);                                                           // [0x5d821f0] Final|Native|Private 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.HasTeleportFailed
	// bool HasTeleportFailed();                                                                                             // [0x5d821c0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer
	// class ADBDPlayer* GetOwningPlayer();                                                                                  // [0x5d82190] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator
	// class AGenerator* GetInlineGenerator(class ADBDPlayer* Player);                                                       // [0x5d820f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator
	// bool CanTeleportAtGenerator(class AGenerator* Generator);                                                             // [0x5d82050] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator
	// bool Authority_TeleportPlayerToGenerator(class ADBDPlayer* playerToTeleport, class AGenerator* Generator);            // [0x5d81f80] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown
	// void Authority_StartTeleportCooldown(bool teleported);                                                                // [0x5d81ef0] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheNightmare.InDreamSurvivorSubAnimInstance
/// Size: 0x0020 (0x000550 - 0x000570)
class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _shouldLookSleepy;                                          // 0x0550   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0551   (0x0001)  
	bool                                               _isBeingCarried;                                            // 0x0552   (0x0001)  
	bool                                               _isDead;                                                    // 0x0553   (0x0001)  
	bool                                               _isHooked;                                                  // 0x0554   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0555   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0556   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0557   (0x0001)  MISSED
	float                                              _walkAnimSpeed;                                             // 0x0558   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x055C   (0x0014)  MISSED
};

/// Class /Script/TheNightmare.NightmareAnimInstance
/// Size: 0x0000 (0x000610 - 0x000610)
class UNightmareAnimInstance : public UKillerAnimInstance
{ 
public:
};

/// Class /Script/TheNightmare.NightmareCheatComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UNightmareCheatComponent : public UActorComponent
{ 
public:
	bool                                               _allowWakeUpAnyClock;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheNightmare.NightmareCheatComponent.OnRep_AllowWakeUpAnyClock
	// void OnRep_AllowWakeUpAnyClock();                                                                                     // [0x45fe020] Final|Native|Private 
	// Function /Script/TheNightmare.NightmareCheatComponent.DBD_AllowWakeUpAtAnyClock
	// void DBD_AllowWakeUpAtAnyClock(bool allow);                                                                           // [0x5818260] Final|Exec|Native|Public 
};

/// Class /Script/TheNightmare.PlaceDreamPalletInteraction
/// Size: 0x0020 (0x000650 - 0x000670)
class UPlaceDreamPalletInteraction : public UInteractionDefinition
{ 
public:
	TArray<class APalletTracker*>                      _palletTrackers;                                            // 0x0648   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0658   (0x0008)  MISSED
	class APalletTracker*                              _closestTracker;                                            // 0x0660   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0668   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet
	// void SpawnDreamPallet(class APalletTracker* trackerAtLocation);                                                       // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues
	// void InitializeTunableValues(class ASlasherPlayer* killer);                                                           // [0x5d82d60] Final|Native|Private 
	// Function /Script/TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet
	// class APalletTracker* GetTargetedPallet();                                                                            // [0x5d82d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker
	// bool CanSpawnDreamPalletAtTracker(class APalletTracker* tracker);                                                     // [0x5d82c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheNightmare.PresentationGeneratorTeleportProgressComponent
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Class /Script/TheNightmare.RememberMe
/// Size: 0x0000 (0x0003C8 - 0x0003C8)
class URememberMe : public UPerk
{ 
public:


	/// Functions
	// Function /Script/TheNightmare.RememberMe.DidLoseHealthState
	// bool DidLoseHealthState(class AActor* DamagedActor, int32_t oldHealthStateCount);                                     // [0x5d830a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheNightmare.SetDreamSnareInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class USetDreamSnareInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              MinPitch;                                                   // 0x0788   (0x0004)  
	float                                              MinPlacementDistance;                                       // 0x078C   (0x0004)  
	float                                              MaxPlacementDistance;                                       // 0x0790   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0794   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare
	// bool HasCancelledDreamSnare();                                                                                        // [0x50ae880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation
	// float GetTrapDistanceFromControlRotation();                                                                           // [0x5d83370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheNightmare.TheNightmareUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UTheNightmareUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheNightmare.TheNightmareUtilities.GetDreamSnareStatusEffect
	// class UDreamSnareEffect* GetDreamSnareStatusEffect(class ADBDPlayer* Player);                                         // [0x5d83530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheNightmare.WakerObjectOutlineStrategy
/// Size: 0x0000 (0x000158 - 0x000158)
class UWakerObjectOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
};

