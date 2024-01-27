
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: SpecialEventUtilities

/// Class /Script/Gnome2021.Gnome
/// Size: 0x00A0 (0x000360 - 0x000400)
class AGnome : public ARespawnableInteractable
{ 
public:
	class UGnomeInteraction*                           _gnomeInteraction;                                          // 0x0360   (0x0008)  
	class UGnomeInteraction*                           _gnomeInteractionKiller;                                    // 0x0368   (0x0008)  
	class UChargeableComponent*                        _gnomeInteractionChargeable;                                // 0x0370   (0x0008)  
	class UChargeableComponent*                        _gnomeInteractionChargeableKiller;                          // 0x0378   (0x0008)  
	class UInteractor*                                 _gnomeInteractor;                                           // 0x0380   (0x0008)  
	class UPrimitiveComponent*                         _gnomeInteractionZone;                                      // 0x0388   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0390   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _gnomeSkeletalMesh;                                         // 0x0398   (0x0008)  
	FDBDTunableRowHandle                               _gnomeInteractionSecondsToCharge;                           // 0x03A0   (0x0028)  
	FDBDTunableRowHandle                               _gnomeInteractionSecondsToChargeKiller;                     // 0x03C8   (0x0028)  
	FLinearColor                                       _auraColorWhileInteracting;                                 // 0x03F0   (0x0010)  


	/// Functions
	// Function /Script/Gnome2021.Gnome.Cosmetic_OnStoppedInteracting
	// void Cosmetic_OnStoppedInteracting();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Gnome2021.Gnome.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Gnome2021.Gnome.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Gnome2021.GnomeEventComponent
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
class UGnomeEventComponent : public URespawningEventComponent
{ 
public:
	class UInteractionRespawnableTrigger*              _interactionRespawnableTrigger;                             // 0x00C8   (0x0008)  
	class UTimedRespawnableTrigger*                    _timedRespawnableTrigger;                                   // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted
	// void Authority_OnEndGameStarted(FGameplayTag gameEventType, FGameEventData& GameEventData);                           // [0x5965d40] Final|Native|Private|HasOutParms 
};

/// Class /Script/Gnome2021.GnomeInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class UGnomeInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0790   (0x0010)  MISSED
};

/// Class /Script/Gnome2021.GnomePlayerComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UGnomePlayerComponent : public UActorComponent
{ 
public:
	bool                                               _hasInteractedWithGnomeThisGame;                            // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x00B9   (0x0027)  MISSED
};

