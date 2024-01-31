
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: Lunar2022
/// dependency: SpecialEventUtilities

/// Class /Script/Lunar2023.Lunar2023EventComponent
/// Size: 0x0070 (0x0001C0 - 0x000230)
class ULunar2023EventComponent : public ULunar2022EventComponent
{ 
public:
	FDBDTunableRowHandle                               _paperLanternSwitchTimerMin;                                // 0x01C0   (0x0028)  
	FDBDTunableRowHandle                               _paperLanternSwitchTimerMax;                                // 0x01E8   (0x0028)  
	class UTimedInteractionRespawnableTrigger*         _timedInteractionRespawnableTrigger;                        // 0x0210   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0218   (0x0018)  MISSED


	/// Functions
	// Function /Script/Lunar2023.Lunar2023EventComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x4d73010] Final|Native|Private 
};

/// Class /Script/Lunar2023.PaperLantern
/// Size: 0x0128 (0x000360 - 0x000488)
class APaperLantern : public ARespawnableInteractable
{ 
public:
	class UPaperLanternInteraction*                    _paperLanternInteractionSurvivor;                           // 0x0360   (0x0008)  
	class UPaperLanternInteraction*                    _paperLanternInteractionKiller;                             // 0x0368   (0x0008)  
	class UChargeableComponent*                        _paperLanternInteractionChargeableSurvivor;                 // 0x0370   (0x0008)  
	class UChargeableComponent*                        _paperLanternInteractionChargeableKiller;                   // 0x0378   (0x0008)  
	class UInteractor*                                 _paperLanternInteractor;                                    // 0x0380   (0x0008)  
	class UPrimitiveComponent*                         _paperLanternInteractionZone;                               // 0x0388   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0390   (0x0008)  
	class UStaticMeshComponent*                        _paperLanternStaticMesh;                                    // 0x0398   (0x0008)  
	FDBDTunableRowHandle                               _paperLanternInteractionSecondsToChargeSurvivor;            // 0x03A0   (0x0028)  
	FDBDTunableRowHandle                               _paperLanternInteractionSecondsToChargeKiller;              // 0x03C8   (0x0028)  
	FDBDTunableRowHandle                               _paperLanternSpeedBoost;                                    // 0x03F0   (0x0028)  
	FDBDTunableRowHandle                               _paperLanternVaultSpeedBoost;                               // 0x0418   (0x0028)  
	FDBDTunableRowHandle                               _paperLanternBuffDuration;                                  // 0x0440   (0x0028)  
	FLinearColor                                       _auraColorWhileInteracting;                                 // 0x0468   (0x0010)  
	class UClass*                                      _paperLanternSpeedEffect;                                   // 0x0478   (0x0008)  
	class UClass*                                      _paperLanternVaultSpeedEffect;                              // 0x0480   (0x0008)  


	/// Functions
	// Function /Script/Lunar2023.PaperLantern.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Lunar2023.PaperLantern.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Lunar2023.PaperLantern.Cosmetic_OnInteractionCancelled
	// void Cosmetic_OnInteractionCancelled(class ADBDPlayer* interactingPlayer);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Lunar2023.PaperLanternInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class UPaperLanternInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0790   (0x0010)  MISSED
};

