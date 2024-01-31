
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationUtilities
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/DBDInteraction.BaseLockerInteraction
/// Size: 0x0030 (0x000650 - 0x000680)
class UBaseLockerInteraction : public UInteractionDefinition
{ 
public:
	class ALocker*                                     _owningLocker;                                              // 0x0648   (0x0008)  
	FGameplayTagContainer                              _lockerPreventingTags;                                      // 0x0650   (0x0020)  
	bool                                               _lockerIsMontageFollower;                                   // 0x0670   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0671   (0x000F)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.BaseLockerInteraction.GetLocker
	// class ALocker* GetLocker();                                                                                           // [0x50924b0] Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.SearchLockerInteraction
/// Size: 0x0000 (0x000680 - 0x000680)
class USearchLockerInteraction : public UBaseLockerInteraction
{ 
public:
};

/// Class /Script/DBDInteraction.AntiCampSelfUnhook
/// Size: 0x00B0 (0x000790 - 0x000840)
class UAntiCampSelfUnhook : public UChargeableInteractionDefinition
{ 
public:
	FAnimationMontageDescriptor                        _selfUnhookMontage;                                         // 0x0790   (0x0020)  
	FDBDTunableRowHandle                               _enduranceEffectDuration;                                   // 0x07B0   (0x0028)  
	FDBDTunableRowHandle                               _movementSpeedBonusDuration;                                // 0x07D8   (0x0028)  
	class UClass*                                      _enduranceEffectClass;                                      // 0x0800   (0x0008)  
	class UClass*                                      _movementSpeedBonusEffectClass;                             // 0x0808   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0810   (0x0030)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.AntiCampSelfUnhook.GetAntiCampTrapImmunityDuration
	// float GetAntiCampTrapImmunityDuration();                                                                              // [0x5092360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.BaseStalkModeInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UBaseStalkModeInteraction : public UInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent
	// class UStalkerComponent* GetStalkerComponent();                                                                       // [0x5092570] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.BaseStalkModeInteraction.CanStalk
	// bool CanStalk();                                                                                                      // [0x5092210] Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.BaseTotemInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class UBaseTotemInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0790   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.BaseTotemInteraction.GetTotem
	// class ATotem* GetTotem();                                                                                             // [0x50925d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.BasicChargeableInteraction
/// Size: 0x0040 (0x000790 - 0x0007D0)
class UBasicChargeableInteraction : public UChargeableInteractionDefinition
{ 
public:
	bool                                               AutoSpawnChargeableComponent;                               // 0x0790   (0x0001)  
	bool                                               ResetProgressWhenStoppingInteraction;                       // 0x0791   (0x0001)  
	bool                                               AutoAddCharge;                                              // 0x0792   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0793   (0x0005)  MISSED
	class UChargeableComponent*                        _spawnedChargeable;                                         // 0x0798   (0x0008)  
	FDBDTunableRowHandle                               _chargeTime;                                                // 0x07A0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x07C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.BasicChargeableInteraction.OnRep_SpawnedChargeable
	// void OnRep_SpawnedChargeable();                                                                                       // [0x5092940] Final|Native|Private 
};

/// Class /Script/DBDInteraction.BlessTotem
/// Size: 0x0030 (0x0007A0 - 0x0007D0)
class UBlessTotem : public UBaseTotemInteraction
{ 
public:
	FDBDTunableRowHandle                               _blessHexTotemSpeedPenalty;                                 // 0x07A0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x07C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.BlessTotem.Cosmetic_OnInteractionStarted
	// void Cosmetic_OnInteractionStarted();                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDInteraction.BlessTotem.Cosmetic_OnInteractionFinished
	// void Cosmetic_OnInteractionFinished();                                                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDInteraction.CleanseTotem
/// Size: 0x0000 (0x0007A0 - 0x0007A0)
class UCleanseTotem : public UBaseTotemInteraction
{ 
public:
};

/// Class /Script/DBDInteraction.CollectItemInteraction
/// Size: 0x0020 (0x000650 - 0x000670)
class UCollectItemInteraction : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,3114) /* FMulticastInlineDelegate */ __um(OnCollectUpdateStart);                              // 0x0648   (0x0010)  
	SDK_UNDEFINED(16,3115) /* FMulticastInlineDelegate */ __um(OnCollectUpdateEnd);                                // 0x0658   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0668   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.CollectItemInteraction.GetItem
	// class ACollectable* GetItem();                                                                                        // [0x50924b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.CollectItemFromSearchableInteraction
/// Size: 0x0010 (0x000670 - 0x000680)
class UCollectItemFromSearchableInteraction : public UCollectItemInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0670   (0x0010)  MISSED
};

/// Class /Script/DBDInteraction.CollectItemInCrateInteraction
/// Size: 0x0020 (0x000670 - 0x000690)
class UCollectItemInCrateInteraction : public UCollectItemInteraction
{ 
public:
	class ASupplyCrateInteractable*                    _owningSupplyCrate;                                         // 0x0670   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0678   (0x0018)  MISSED
};

/// Class /Script/DBDInteraction.DestroyBreakableWallWithPowerInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UDestroyBreakableWallWithPowerInteraction : public UInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/DBDInteraction.DestroyBreakableWallWithPowerInteraction.CustomizePropertiesForBlight
	// void CustomizePropertiesForBlight(class ADBDPlayer* killer);                                                          // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDInteraction.DestroyPalletDefinition
/// Size: 0x0040 (0x000650 - 0x000690)
class UDestroyPalletDefinition : public UInteractionDefinition
{ 
public:
	float                                              _interactionTimePercentForDestroyEvent;                     // 0x0648   (0x0004)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x064C   (0x0044)  MISSED
};

/// Class /Script/DBDInteraction.DropItemInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UDropItemInteraction : public UInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/DBDInteraction.DropItemInteraction.GetItem
	// class ACollectable* GetItem();                                                                                        // [0x50924e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.EscapeMapInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UEscapeMapInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/DBDInteraction.GeneratorDamageInteraction
/// Size: 0x0050 (0x000790 - 0x0007E0)
class UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{ 
public:
	SDK_UNDEFINED(80,3116) /* TMap<FGameplayTag, UAkAudioEvent*> */ __um(_canceledSfxBasedOnKiller);               // 0x0790   (0x0050)  
};

/// Class /Script/DBDInteraction.GeneratorRepairInteraction
/// Size: 0x0080 (0x000790 - 0x000810)
class UGeneratorRepairInteraction : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _penaltyPerRepairPlayerCount;                               // 0x0790   (0x0078)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0808   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.GeneratorRepairInteraction.SetIsObstructed
	// void SetIsObstructed(bool obstructed);                                                                                // [0x5092960] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDInteraction.GeneratorRepairInteraction.IsObstructed
	// bool IsObstructed();                                                                                                  // [0x5092850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.GeneratorRepairInteraction.IsInteractionPossibleInternal
	// bool IsInteractionPossibleInternal(class ADBDPlayer* Player);                                                         // [0x50927b0] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.GeneratorRepairInteraction.IsBeingRepaired
	// bool IsBeingRepaired();                                                                                               // [0x5092780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator
	// class AGenerator* GetOwningGenerator();                                                                               // [0x5092540] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.GeneratorRepairInteraction.GetInteractionChargeSpeedMultiplier_Implementation
	// float GetInteractionChargeSpeedMultiplier_Implementation(class ADBDPlayer* Character);                                // [0x5092390] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.GeneratorRepairInteraction.Authority_OnSkillCheckResponseAuthority
	// void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType Type); // [0x5092050] Final|Native|Private 
};

/// Class /Script/DBDInteraction.GeneratorToolboxRepairInteraction
/// Size: 0x0080 (0x000810 - 0x000890)
class UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction
{ 
public:
	SDK_UNDEFINED(24,3117) /* FText */                 __um(_interactionTextWhenEmpty);                            // 0x0810   (0x0018)  
	FDBDTunableRowHandle                               _repairSkillCheckDurationWhenEmpty;                         // 0x0828   (0x0028)  
	FDBDTunableRowHandle                               _repairSkillCheckChanceWhenEmpty;                           // 0x0850   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0878   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox
	// bool HasChargedToolBox(class ADBDPlayer* Player);                                                                     // [0x5092660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty
	// FString GetInteractionTextWhenEmpty();                                                                                // [0x5092430] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.GenericStunInteractionDefinition
/// Size: 0x0000 (0x000650 - 0x000650)
class UGenericStunInteractionDefinition : public UInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/DBDInteraction.GenericStunInteractionDefinition.DispatchStunEvent
	// void DispatchStunEvent(class ADBDPlayer* Player);                                                                     // [0x5092240] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDInteraction.HealInteraction
/// Size: 0x0000 (0x000790 - 0x000790)
class UHealInteraction : public UChargeableInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/DBDInteraction.HealInteraction.GetTargetSurvivor
	// class ACamperPlayer* GetTargetSurvivor();                                                                             // [0x50925a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.HealInteraction.Authority_OnChargeApplied
	// void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime); // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDInteraction.HookSurvivorDefinition
/// Size: 0x0040 (0x000790 - 0x0007D0)
class UHookSurvivorDefinition : public UChargeableInteractionDefinition
{ 
public:
	class ACamperPlayer*                               _survivorBeingHooked;                                       // 0x0790   (0x0008)  
	float                                              _smallestScreamTime;                                        // 0x0798   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x079C   (0x0034)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.HookSurvivorDefinition.GetMeatHook
	// class AMeatHook* GetMeatHook();                                                                                       // [0x5092510] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.InstallBrandNewPartInteraction
/// Size: 0x0060 (0x000890 - 0x0008F0)
class UInstallBrandNewPartInteraction : public UGeneratorToolboxRepairInteraction
{ 
public:
	class ACollectable*                                _toolbox;                                                   // 0x0890   (0x0008)  
	float                                              _permanentProgressPercent;                                  // 0x0898   (0x0004)  
	float                                              _existingSkillCheckDelay;                                   // 0x089C   (0x0004)  
	SDK_UNDEFINED(24,3118) /* FText */                 __um(_repairToolboxText);                                   // 0x08A0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x08B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.InstallBrandNewPartInteraction.Multicast_OnTriggerSkillCheck
	// void Multicast_OnTriggerSkillCheck(class ADBDPlayer* Player);                                                         // [0x50928b0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/DBDInteraction.ItemCraftInteraction
/// Size: 0x0020 (0x000650 - 0x000670)
class UItemCraftInteraction : public UInteractionDefinition
{ 
public:
	FName                                              _attachToSocketName;                                        // 0x0648   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0654   (0x0004)  MISSED
	class UClass*                                      _collectableClass;                                          // 0x0658   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0660   (0x0010)  MISSED
};

/// Class /Script/DBDInteraction.LinkedVomitInteraction
/// Size: 0x0030 (0x000790 - 0x0007C0)
class ULinkedVomitInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0790   (0x0030)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.LinkedVomitInteraction.IsVomiting
	// bool IsVomiting();                                                                                                    // [0x5092880] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
	// class UVomitStateComponent* GetVomitStateComponent();                                                                 // [0x5092600] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.LockerFakeEnterInteraction
/// Size: 0x0030 (0x000680 - 0x0006B0)
class ULockerFakeEnterInteraction : public UBaseLockerInteraction
{ 
public:
	float                                              _lockerInteractionBlockTime;                                // 0x0678   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x067C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _fakeEnterLoudNoiseRange;                                   // 0x0680   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x06A8   (0x0008)  MISSED
};

/// Class /Script/DBDInteraction.SearchChestInteractionBase
/// Size: 0x0020 (0x000790 - 0x0007B0)
class USearchChestInteractionBase : public UChargeableInteractionDefinition
{ 
public:
	bool                                               _handleCompletionScoreEvents;                               // 0x0790   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0791   (0x0003)  MISSED
	FGameplayTag                                       _searchableCompleteContributionPercentTag;                  // 0x0794   (0x000C)  
	bool                                               _scoreEventFired;                                           // 0x07A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x07A1   (0x0007)  MISSED
	class ASearchable*                                 _owningChest;                                               // 0x07A8   (0x0008)  


	/// Functions
	// Function /Script/DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent
	// void FireChestScoreEvent(class ADBDPlayer* Player);                                                                   // [0x50922d0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DBDInteraction.OpenChestInteraction
/// Size: 0x0020 (0x0007B0 - 0x0007D0)
class UOpenChestInteraction : public USearchChestInteractionBase
{ 
public:
	FGameplayTag                                       _camperSearchablePercentTag;                                // 0x07B0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x07BC   (0x0004)  MISSED
	class UAnimSequence*                               _successExitTimeAnimSequenceReference;                      // 0x07C0   (0x0008)  
	float                                              _startTime;                                                 // 0x07C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x07CC   (0x0004)  MISSED
};

/// Class /Script/DBDInteraction.OpenEscapeInteraction
/// Size: 0x0020 (0x000790 - 0x0007B0)
class UOpenEscapeInteraction : public UChargeableInteractionDefinition
{ 
public:
	class AEscapeDoor*                                 _escapeDoor;                                                // 0x0790   (0x0008)  
	FName                                              _jointCrankTargetName;                                      // 0x0798   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x07A4   (0x000C)  MISSED
};

/// Class /Script/DBDInteraction.OpenHatchInteraction
/// Size: 0x0050 (0x000790 - 0x0007E0)
class UOpenHatchInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              SnapToEscapeLocationDuration;                               // 0x0790   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0794   (0x0004)  MISSED
	FAnimationMontageDescriptor                        InteractionStoppedMontage;                                  // 0x0798   (0x0020)  
	FAnimationMontageDescriptor                        InteractionSucceedMontage;                                  // 0x07B8   (0x0020)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x07D8   (0x0008)  MISSED
};

/// Class /Script/DBDInteraction.PalletPullUpInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class UPalletPullUpInteraction : public UChargeableInteractionDefinition
{ 
public:
	EPalletSide                                        _side;                                                      // 0x0790   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0791   (0x0007)  MISSED
	class APallet*                                     _owningPallet;                                              // 0x0798   (0x0008)  
};

/// Class /Script/DBDInteraction.SacrificeSurvivorInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class USacrificeSurvivorInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/DBDInteraction.SearchOpenedChestInteraction
/// Size: 0x0000 (0x0007B0 - 0x0007B0)
class USearchOpenedChestInteraction : public USearchChestInteractionBase
{ 
public:
};

/// Class /Script/DBDInteraction.SelfUnhook
/// Size: 0x00C0 (0x000790 - 0x000850)
class USelfUnhook : public UChargeableInteractionDefinition
{ 
public:
	FAnimationMontageDescriptor                        _selfUnhookMontage;                                         // 0x0790   (0x0020)  
	SDK_UNDEFINED(16,3119) /* FString */               __um(_guaranteedUnhookAttemptText);                         // 0x07B0   (0x0010)  
	FDBDTunableRowHandle                               _enduranceEffectDuration;                                   // 0x07C0   (0x0028)  
	FDBDTunableRowHandle                               _movementSpeedBonusDuration;                                // 0x07E8   (0x0028)  
	class UClass*                                      _enduranceEffectClass;                                      // 0x0810   (0x0008)  
	class UClass*                                      _movementSpeedBonusEffectClass;                             // 0x0818   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0820   (0x0030)  MISSED
};

/// Class /Script/DBDInteraction.SetTrapInteraction
/// Size: 0x0060 (0x000790 - 0x0007F0)
class USetTrapInteraction : public UChargeableInteractionDefinition
{ 
public:
	FSocketOrBoneCache                                 _dropSocket;                                                // 0x0790   (0x0060)  
};

/// Class /Script/DBDInteraction.SnuffTotem
/// Size: 0x0000 (0x000650 - 0x000650)
class USnuffTotem : public UInteractionDefinition
{ 
public:
};

/// Class /Script/DBDInteraction.StunSurvivorInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UStunSurvivorInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/DBDInteraction.ThrowInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class UThrowInteraction : public UChargeableInteractionDefinition
{ 
public:
	class UCurveFloat*                                 _throwCancelledSpeedCurve;                                  // 0x0790   (0x0008)  
	float                                              _throwCancellationExitTime;                                 // 0x0798   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x079C   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
	// void InitThrowCancellationExitTime(float value);                                                                      // [0x5092700] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDInteraction.ThrowInteraction.HasCancelledThrow
	// bool HasCancelledThrow();                                                                                             // [0x5092630] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDInteraction.TrapInteractableInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UTrapInteractableInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/DBDInteraction.Unhook
/// Size: 0x00C0 (0x000790 - 0x000850)
class UUnhook : public UChargeableInteractionDefinition
{ 
public:
	TArray<class USceneComponent*>                     _snapPoints;                                                // 0x0790   (0x0010)  
	FDBDTunableRowHandle                               _unhookLoudNoiseRange;                                      // 0x07A0   (0x0028)  
	FDBDTunableRowHandle                               _enduranceEffectDuration;                                   // 0x07C8   (0x0028)  
	FDBDTunableRowHandle                               _movementSpeedBonusDuration;                                // 0x07F0   (0x0028)  
	class UClass*                                      _enduranceEffectClass;                                      // 0x0818   (0x0008)  
	class UClass*                                      _movementSpeedBonusEffectClass;                             // 0x0820   (0x0008)  
	class UClass*                                      _survivorRecentlyUnhookedEffectClass;                       // 0x0828   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0830   (0x0008)  MISSED
	class ADBDPlayer*                                  _unhookingPlayer;                                           // 0x0838   (0x0008)  
	float                                              _hookedCharacterSnapTime;                                   // 0x0840   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0844   (0x0004)  MISSED
	class ACamperPlayer*                               _playerBeingUnhooked;                                       // 0x0848   (0x0008)  
};

/// Class /Script/DBDInteraction.UnhookReplicationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UUnhookReplicationComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked
	// void Multicast_SetPlayerBeingUnhooked(class UUnhook* unhookInteraction, class ACamperPlayer* playerBeingUnhooked);    // [0x4d828a0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

