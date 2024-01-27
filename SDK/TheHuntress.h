
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
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: Projectile

/// Enum /Script/TheHuntress.EThrowHatchetInteractionState
/// Size: 0x05
enum class EThrowHatchetInteractionState : uint8_t
{
	EThrowHatchetInteractionState__None                                              = 0,
	EThrowHatchetInteractionState__Aiming                                            = 1,
	EThrowHatchetInteractionState__Launching                                         = 2,
	EThrowHatchetInteractionState__Cancelled                                         = 3,
	EThrowHatchetInteractionState__EThrowHatchetInteractionState_MAX                 = 4
};

/// Class /Script/TheHuntress.DeadHard
/// Size: 0x00C8 (0x0003C8 - 0x000490)
class UDeadHard : public UPerk
{ 
public:
	class UClass*                                      _deadHardAnimInstance;                                      // 0x03C8   (0x0008)  
	class UClass*                                      _deadHardInteraction;                                       // 0x03D0   (0x0008)  
	float                                              _deadHardCooldownDuration;                                  // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	TArray<FStatusEffectSpawnData>                     _effectsToSpawn;                                            // 0x03E0   (0x0010)  
	FPlayerStatusEffectSpawnerHelper                   _spawnerHelper;                                             // 0x03F0   (0x0088)  
	float                                              _exhaustedCooldownPerLevel;                                 // 0x0478   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0484   (0x0004)  MISSED
	class UInteractionAttacherComponent*               _interactionAttacherComponent;                              // 0x0488   (0x0008)  


	/// Functions
	// Function /Script/TheHuntress.DeadHard.GetExhaustedDuration
	// float GetExhaustedDuration();                                                                                         // [0x5ad2f20] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHuntress.DeadHard.GetDeadHardCooldownDuration
	// float GetDeadHardCooldownDuration();                                                                                  // [0x500f6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheHuntress.DeadHardEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class UDeadHardEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/TheHuntress.DeadHardInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class UDeadHardInteraction : public UInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0650   (0x0010)  MISSED
};

/// Class /Script/TheHuntress.HatchetCooldown
/// Size: 0x0000 (0x000650 - 0x000650)
class UHatchetCooldown : public UInteractionDefinition
{ 
public:
};

/// Class /Script/TheHuntress.HatchetLauncher
/// Size: 0x0120 (0x000190 - 0x0002B0)
class UHatchetLauncher : public UKillerProjectileLauncher
{ 
public:
	FRotator                                           _angleOffset;                                               // 0x0190   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	class UCurveFloat*                                 _angleOffsetCurve;                                          // 0x01A0   (0x0008)  
	class UCurveFloat*                                 _speedCurve;                                                // 0x01A8   (0x0008)  
	float                                              _hatchetSpeedWhenThrowFullyCharged;                         // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	class UCurveFloat*                                 _hatchetPitchCurve;                                         // 0x01B8   (0x0008)  
	FDBDTunableRowHandle                               _hatchetMinAngleOffset;                                     // 0x01C0   (0x0028)  
	FDBDTunableRowHandle                               _hatchetMaxAngleOffset;                                     // 0x01E8   (0x0028)  
	FDBDTunableRowHandle                               _hatchetMinSpeed;                                           // 0x0210   (0x0028)  
	FDBDTunableRowHandle                               _hatchetMaxSpeed;                                           // 0x0238   (0x0028)  
	FDBDTunableRowHandle                               _hatchetLaunchPitchMin;                                     // 0x0260   (0x0028)  
	FDBDTunableRowHandle                               _hatchetLaunchPitchMax;                                     // 0x0288   (0x0028)  


	/// Functions
	// Function /Script/TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
	// bool IsLaunchedHatchetFullyCharged();                                                                                 // [0x5ad35e0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheHuntress.HatchetProjectile
/// Size: 0x0000 (0x000338 - 0x000338)
class AHatchetProjectile : public AKillerProjectile
{ 
public:
};

/// Class /Script/TheHuntress.HatchetRack
/// Size: 0x0000 (0x000248 - 0x000248)
class AHatchetRack : public ABaseLockerItem
{ 
public:


	/// Functions
	// Function /Script/TheHuntress.HatchetRack.SetMovableHatchetVisibility
	// void SetMovableHatchetVisibility(bool visible);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/TheHuntress.HatchetThrow
/// Size: 0x0030 (0x0007A0 - 0x0007D0)
class UHatchetThrow : public UThrowInteraction
{ 
public:
	FDBDTunableRowHandle                               _hatchetThrowCancellationCooldown;                          // 0x0798   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x07C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheHuntress.HatchetThrow.GetOwningHatchetSpawner
	// class ATheHuntressPower* GetOwningHatchetSpawner();                                                                   // [0x5ad3c10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheHuntress.HexHuntressLullabyEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UHexHuntressLullabyEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED
};

/// Class /Script/TheHuntress.HexHuntressLullabyPerk
/// Size: 0x0050 (0x000448 - 0x000498)
class UHexHuntressLullabyPerk : public UHexPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0448   (0x0018)  MISSED
	class UClass*                                      _huntressLullabyStatusEffect;                               // 0x0460   (0x0008)  
	FGameplayTagContainer                              _possiblePlayerStateTagsInProgress;                         // 0x0468   (0x0020)  
	TArray<class UStatusEffect*>                       _huntressLullabyStatusEffects;                              // 0x0488   (0x0010)  
};

/// Class /Script/TheHuntress.HuntressPowerSubAnimInstance
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UHuntressPowerSubAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _powerIsActive;                                             // 0x02C0   (0x0001)  
	bool                                               _powerIsReleased;                                           // 0x02C1   (0x0001)  
	bool                                               _powerIsCancelled;                                          // 0x02C2   (0x0001)  
	bool                                               _powerIsInCooldown;                                         // 0x02C3   (0x0001)  
	float                                              _aimingPlayRate;                                            // 0x02C4   (0x0004)  
	float                                              _launchPlayRate;                                            // 0x02C8   (0x0004)  
	float                                              _cancelPlayRate;                                            // 0x02CC   (0x0004)  
	float                                              _cooldownPlayRate;                                          // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	class UAnimSequence*                               _aimingAnimationSequence;                                   // 0x02D8   (0x0008)  
	class UAnimSequence*                               _launchAnimationSequence;                                   // 0x02E0   (0x0008)  
	class UAnimSequence*                               _cancelAnimationSequence;                                   // 0x02E8   (0x0008)  
	class UAnimSequence*                               _cooldownAnimationSequence;                                 // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02F8   (0x0008)  MISSED
};

/// Class /Script/TheHuntress.ReloadHatchet
/// Size: 0x0000 (0x000680 - 0x000680)
class UReloadHatchet : public UBaseLockerInteraction
{ 
public:


	/// Functions
	// Function /Script/TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
	// bool IsInteractionPossible_Shared(class ADBDPlayer* Player);                                                          // [0x5ad4300] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheHuntress.TerritorialImperative
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UTerritorialImperative : public UPerk
{ 
public:
	class UClass*                                      _revealSurvivorStatusEffect;                                // 0x03C8   (0x0008)  
	float                                              _survivorRevealedTime;                                      // 0x03D0   (0x000C)  
	float                                              _killerMinimumDistance;                                     // 0x03DC   (0x0004)  
	float                                              _perkCooldown;                                              // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x03E4   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheHuntress.TerritorialImperative.Multicast_OnPerkTriggered
	// void Multicast_OnPerkTriggered(class ADBDPlayer* triggerer);                                                          // [0x501b930] Net|Native|Event|NetMulticast|Public 
};

/// Class /Script/TheHuntress.TheHuntressPower
/// Size: 0x0010 (0x0004C8 - 0x0004D8)
class ATheHuntressPower : public ACollectable
{ 
public:
	class UClass*                                      _reloadHatchetClass;                                        // 0x04C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x04D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
	// void StartHatchetShineCosmetic();                                                                                     // [0x5ad4c90] BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheHuntress.TheHuntressPower.SetPercentThrowStrength
	// void SetPercentThrowStrength(float percentStrength);                                                                  // [0x5a29c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheHuntress.TheHuntressPower.SetHatchetVisible
	// void SetHatchetVisible(bool visible);                                                                                 // [0x5ad4c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheHuntress.TheHuntressPower.PrintDebugThrowInfo
	// void PrintDebugThrowInfo();                                                                                           // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
	// bool IsHatchetThrowFullyCharged();                                                                                    // [0x5ad4bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHuntress.TheHuntressPower.HasHatchet
	// bool HasHatchet();                                                                                                    // [0x5ad4ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHuntress.TheHuntressPower.GetOwningKiller
	// class ASlasherPlayer* GetOwningKiller();                                                                              // [0x5ad4b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
	// class UBaseProjectileLauncher* GetHatchetProjectileLauncher();                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/TheHuntress.TheHuntressPower.GetHatchetCooldown
	// class UHatchetCooldown* GetHatchetCooldown();                                                                         // [0x61c32d0] Event|Public|BlueprintEvent|Const 
	// Function /Script/TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
	// class UAkComponent* GetAkAudioHatchetSpawner();                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
	// void Cosmetic_OnThrowInteractionStart();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
	// void Cosmetic_OnThrowInteractionCancelled();                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

