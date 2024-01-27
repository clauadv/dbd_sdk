
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Archives
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: SpecialEventUtilities

/// Class /Script/Anniversary.AnniversaryPlayerComponentInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnniversaryPlayerComponentInterface : public UInterface
{ 
public:
};

/// Class /Script/Anniversary.CrownPickupInteraction
/// Size: 0x0050 (0x000790 - 0x0007E0)
class UCrownPickupInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0790   (0x0028)  MISSED
	FName                                              _attachToSocketName;                                        // 0x07B8   (0x000C)  
	FGameplayTag                                       _pickupScoreEvent;                                          // 0x07C4   (0x000C)  
	bool                                               _isInteractionChargeComplete;                               // 0x07D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x07D1   (0x000F)  MISSED
};

/// Class /Script/Anniversary.CrownPillarInteractable
/// Size: 0x0100 (0x000360 - 0x000460)
class ACrownPillarInteractable : public ARespawnableInteractable
{ 
public:
	FDBDTunableRowHandle                               _crownPillarInteractionSecondsToCharge;                     // 0x0360   (0x0028)  
	FDBDTunableRowHandle                               _crownPillarInteractionSecondsToChargeKiller;               // 0x0388   (0x0028)  
	FDBDTunableRowHandle                               _offeringEnabledAuraVisibilityDistance;                     // 0x03B0   (0x0028)  
	FDBDTunableRowHandle                               _defaultAuraVisibilityDistance;                             // 0x03D8   (0x0028)  
	FName                                              _anniversaryOfferingTag;                                    // 0x0400   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x040C   (0x0004)  MISSED
	class UCrownPickupInteraction*                     _crownPillarInteraction;                                    // 0x0410   (0x0008)  
	class UCrownPickupInteraction*                     _crownPillarInteractionKiller;                              // 0x0418   (0x0008)  
	class UChargeableComponent*                        _crownPillarInteractionChargeable;                          // 0x0420   (0x0008)  
	class UChargeableComponent*                        _crownPillarInteractionChargeableKiller;                    // 0x0428   (0x0008)  
	class UInteractor*                                 _crownPillarInteractor;                                     // 0x0430   (0x0008)  
	class UPrimitiveComponent*                         _crownPillarInteractionZone;                                // 0x0438   (0x0008)  
	class UStaticMeshComponent*                        _crownPillarStaticMesh;                                     // 0x0440   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0448   (0x0008)  
	class UNearTrackedActorComponent*                  _nearTrackedActorComponent;                                 // 0x0450   (0x0008)  
	class UCrownPillarOutlineUpdateStrategy*           _crownPillarOutlineUpdateStrategy;                          // 0x0458   (0x0008)  


	/// Functions
	// Function /Script/Anniversary.CrownPillarInteractable.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x4da1f60] Final|Native|Private 
	// Function /Script/Anniversary.CrownPillarInteractable.Local_OnIntroCompleted
	// void Local_OnIntroCompleted();                                                                                        // [0x4da1f40] Final|Native|Private 
	// Function /Script/Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
	// bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering();                                                        // [0x4da1f10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting
	// void Cosmetic_OnStoppedInteracting();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled
	// void Cosmetic_OnInteractionCancelled();                                                                               // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary.CrownPillarOutlineUpdateStrategy
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UCrownPillarOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _offeringEnabledAuraColor;                                  // 0x00E0   (0x0010)  
};

/// Class /Script/Anniversary.CrownPlayerComponent
/// Size: 0x00C0 (0x000220 - 0x0002E0)
class UCrownPlayerComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0220   (0x0008)  MISSED
	FGameplayTagContainer                              _crownVFXParticleDeactivateTags;                            // 0x0228   (0x0020)  
	FGameplayTagContainer                              _unhookGameEvents;                                          // 0x0248   (0x0020)  
	FTagStateBool                                      _isCrownEventActive;                                        // 0x0268   (0x0030)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0298   (0x0048)  MISSED


	/// Functions
	// Function /Script/Anniversary.CrownPlayerComponent.Cosmetic_SetVFXParticlesVisibility
	// void Cosmetic_SetVFXParticlesVisibility(bool IsVisible);                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
};

