
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: SpecialEventUtilities

/// Enum /Script/Barrel2023.EBarrelType
/// Size: 0x05
enum class EBarrelType : uint8_t
{
	EBarrelType__None                                                                = 0,
	EBarrelType__RedBarrel                                                           = 1,
	EBarrelType__BlueBarrel                                                          = 2,
	EBarrelType__GreenBarrel                                                         = 3,
	EBarrelType__EBarrelType_MAX                                                     = 4
};

/// Class /Script/Barrel2023.Barrel
/// Size: 0x00F0 (0x000360 - 0x000450)
class ABarrel : public ARespawnableInteractable
{ 
public:
	class UBarrelInteraction*                          _barrelInteraction;                                         // 0x0360   (0x0008)  
	class UBarrelInteraction*                          _barrelInteractionKiller;                                   // 0x0368   (0x0008)  
	class UChargeableComponent*                        _barrelInteractionChargeable;                               // 0x0370   (0x0008)  
	class UChargeableComponent*                        _barrelInteractionChargeableKiller;                         // 0x0378   (0x0008)  
	class UPrimitiveComponent*                         _barrelInteractionZone;                                     // 0x0380   (0x0008)  
	class UInteractor*                                 _barrelInteractor;                                          // 0x0388   (0x0008)  
	class UStaticMeshComponent*                        _barrelStaticMesh;                                          // 0x0390   (0x0008)  
	class UStaticMeshComponent*                        _extractorStaticMesh;                                       // 0x0398   (0x0008)  
	FDBDTunableRowHandle                               _barrelInteractionSecondsToCharge;                          // 0x03A0   (0x0028)  
	FDBDTunableRowHandle                               _barrelInteractionSecondsToChargeKiller;                    // 0x03C8   (0x0028)  
	EBarrelType                                        _barrelType;                                                // 0x03F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03F1   (0x0007)  MISSED
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x03F8   (0x0008)  
	FGameplayTag                                       _scoreTag;                                                  // 0x0400   (0x000C)  
	unsigned char                                      UnknownData01_5[0x34];                                      // 0x040C   (0x0034)  MISSED
	FVector                                            _barrelLocation;                                            // 0x0440   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x044C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Barrel2023.Barrel.SetDissolveStarted
	// void SetDissolveStarted(bool isDissolveStarted);                                                                      // [0x4de1480] Final|Native|Public|BlueprintCallable 
	// Function /Script/Barrel2023.Barrel.OnRep_OnLocationChanged
	// void OnRep_OnLocationChanged();                                                                                       // [0x4de1460] Final|Native|Private 
	// Function /Script/Barrel2023.Barrel.OnBarrelDespawnCosmeticsComplete
	// void OnBarrelDespawnCosmeticsComplete();                                                                              // [0x4de1440] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Barrel2023.Barrel.Cosmetic_OnStoppedInteracting
	// void Cosmetic_OnStoppedInteracting();                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/Barrel2023.Barrel.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/Barrel2023.Barrel.Cosmetic_OnInteractionInterruptedByPlayer
	// void Cosmetic_OnInteractionInterruptedByPlayer();                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/Barrel2023.Barrel.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/Barrel2023.Barrel.Cosmetic_OnFirstBarrelSpawn
	// void Cosmetic_OnFirstBarrelSpawn();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/Barrel2023.Barrel.Cosmetic_OnBarrelRespawn
	// void Cosmetic_OnBarrelRespawn();                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/Barrel2023.Barrel.Cosmetic_OnBarrelDespawn
	// void Cosmetic_OnBarrelDespawn(bool wasInteractionCompleted);                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Barrel2023.BarrelEventComponent
/// Size: 0x01A8 (0x0000B8 - 0x000260)
class UBarrelEventComponent : public UActorComponent
{ 
public:
	TArray<class UClass*>                              _spawnableBarrelClasses;                                    // 0x00B8   (0x0010)  
	FDBDTunableRowHandle                               _barrelSwitchTimerMin;                                      // 0x00C8   (0x0028)  
	FDBDTunableRowHandle                               _barrelSwitchTimerMax;                                      // 0x00F0   (0x0028)  
	FDBDTunableRowHandle                               _redBarrelSpawnDelay;                                       // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _numberOfGeneratorsToComplete;                              // 0x0140   (0x0028)  
	FDBDTunableRowHandle                               _numberOfHooksToComplete;                                   // 0x0168   (0x0028)  
	unsigned char                                      UnknownData00_5[0x38];                                      // 0x0190   (0x0038)  MISSED
	SDK_UNDEFINED(80,3682) /* TMap<ABarrel*, FVector> */ __um(_barrelLocations);                                   // 0x01C8   (0x0050)  
	unsigned char                                      UnknownData01_5[0x40];                                      // 0x0218   (0x0040)  MISSED
	float                                              _collisionCapsuleHalfHeight;                                // 0x0258   (0x0004)  
	float                                              _collisionCapsuleRadius;                                    // 0x025C   (0x0004)  


	/// Functions
	// Function /Script/Barrel2023.BarrelEventComponent.DBD_BarrelSpawnRedBarrel
	// void DBD_BarrelSpawnRedBarrel();                                                                                      // [0x4de1ad0] Final|Exec|Native|Private 
	// Function /Script/Barrel2023.BarrelEventComponent.DBD_BarrelSpawnGreenBarrel
	// void DBD_BarrelSpawnGreenBarrel();                                                                                    // [0x4de1ab0] Final|Exec|Native|Private 
	// Function /Script/Barrel2023.BarrelEventComponent.DBD_BarrelSpawnBlueBarrel
	// void DBD_BarrelSpawnBlueBarrel();                                                                                     // [0x4de1a90] Final|Exec|Native|Private 
	// Function /Script/Barrel2023.BarrelEventComponent.DBD_BarrelPauseAllTimers
	// void DBD_BarrelPauseAllTimers(bool shouldPause);                                                                      // [0x4de1a00] Final|Exec|Native|Private 
	// Function /Script/Barrel2023.BarrelEventComponent.DBD_BarrelDebugBarrelSpawnPositions
	// void DBD_BarrelDebugBarrelSpawnPositions(float Duration);                                                             // [0x4de1980] Final|Exec|Native|Private|Const 
	// Function /Script/Barrel2023.BarrelEventComponent.Authority_OnIntroComplete
	// void Authority_OnIntroComplete();                                                                                     // [0x4de1960] Final|Native|Private 
	// Function /Script/Barrel2023.BarrelEventComponent.Authority_OnBarrelTimerDone
	// void Authority_OnBarrelTimerDone(class ARespawnableInteractable* RespawnableInteractable);                            // [0x4de18d0] Final|Native|Private 
	// Function /Script/Barrel2023.BarrelEventComponent.Authority_OnBarrelInteractionChanged
	// void Authority_OnBarrelInteractionChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting); // [0x4de1800] Final|Native|Private 
};

/// Class /Script/Barrel2023.BarrelInteraction
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UBarrelInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0790   (0x0018)  MISSED
	float                                              _facingTolerance;                                           // 0x07A8   (0x0004)  
	float                                              _facingHeightUpOffset;                                      // 0x07AC   (0x0004)  
	float                                              _facingHeightDownOffset;                                    // 0x07B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x07B4   (0x000C)  MISSED
};

/// Class /Script/Barrel2023.BarrelPlayerComponent
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UBarrelPlayerComponent : public UActorComponent
{ 
public:
	TArray<EBarrelType>                                _interactedBarrels;                                         // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00C8   (0x0058)  MISSED


	/// Functions
	// Function /Script/Barrel2023.BarrelPlayerComponent.Server_SetCharmInfo
	// void Server_SetCharmInfo(bool isRedUnlocked, bool isGreenUnlocked, bool isBlueUnlocked);                              // [0x4de2130] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/Barrel2023.BarrelPlayerComponent.GetInteractedBarrels
	// TArray<EBarrelType> GetInteractedBarrels();                                                                           // [0x4de20a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Barrel2023.BarrelPlayerComponent.DBD_BarrelResetInteractedBarrels
	// void DBD_BarrelResetInteractedBarrels();                                                                              // [0x4de2080] Final|Exec|Native|Private 
	// Function /Script/Barrel2023.BarrelPlayerComponent.Cosmetic_TriggerPlayerVignette
	// void Cosmetic_TriggerPlayerVignette(class ADBDPlayer* Player, EBarrelType BarrelType);                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/Barrel2023.BarrelCharmInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBarrelCharmInfo
{ 
	EBarrelType                                        BarrelType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,3683) /* FString */               __um(RewardId);                                             // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

