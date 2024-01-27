
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

/// Enum /Script/Halloween2021.EPumpkinType
/// Size: 0x05
enum class EPumpkinType : uint8_t
{
	EPumpkinType__None                                                               = 0,
	EPumpkinType__Trick                                                              = 1,
	EPumpkinType__Treat                                                              = 2,
	EPumpkinType__Neutral                                                            = 3,
	EPumpkinType__EPumpkinType_MAX                                                   = 4
};

/// Class /Script/Halloween2021.Pumpkin
/// Size: 0x01D0 (0x000378 - 0x000548)
class APumpkin : public ASpecialBehaviourInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0378   (0x0018)  MISSED
	FName                                              _specialBehaviourId;                                        // 0x0390   (0x000C)  
	EPumpkinType                                       _pumpkinType;                                               // 0x039C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x039D   (0x0003)  MISSED
	class UPumpkinInteraction*                         _pumpkinInteraction;                                        // 0x03A0   (0x0008)  
	class UPumpkinInteraction*                         _pumpkinInteractionKiller;                                  // 0x03A8   (0x0008)  
	class UChargeableComponent*                        _pumpkinInteractionChargeable;                              // 0x03B0   (0x0008)  
	class UChargeableComponent*                        _pumpkinInteractionChargeableKiller;                        // 0x03B8   (0x0008)  
	class UInteractor*                                 _pumpkinInteractor;                                         // 0x03C0   (0x0008)  
	class UPrimitiveComponent*                         _pumpkinInteractionZone;                                    // 0x03C8   (0x0008)  
	FDBDTunableRowHandle                               _pumpkinInteractionSecondsToCharge;                         // 0x03D0   (0x0028)  
	FDBDTunableRowHandle                               _pumpkinInteractionSecondsToChargeKiller;                   // 0x03F8   (0x0028)  
	FLinearColor                                       _auraColorWhileInteracting;                                 // 0x0420   (0x0010)  
	FDBDTunableRowHandle                               _pumpkinTreatChance;                                        // 0x0430   (0x0028)  
	FDBDTunableRowHandle                               _pumpkinTrickChance;                                        // 0x0458   (0x0028)  
	FDBDTunableRowHandle                               _pumpkinTreatDuration;                                      // 0x0480   (0x0028)  
	FDBDTunableRowHandle                               _pumpkinTrickDuration;                                      // 0x04A8   (0x0028)  
	FDBDTunableRowHandle                               _pumpkinSpeedBoost;                                         // 0x04D0   (0x0028)  
	FDBDTunableRowHandle                               _pumpkinSpeedDebuff;                                        // 0x04F8   (0x0028)  
	class UClass*                                      _pumpkinTreatEffect;                                        // 0x0520   (0x0008)  
	class UClass*                                      _pumpkinTrickEffect;                                        // 0x0528   (0x0008)  
	class UStatusEffect*                               _pumpkinStatusEffect;                                       // 0x0530   (0x0008)  
	float                                              _minDistanceToFollowPlayer;                                 // 0x0538   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x053C   (0x0004)  MISSED
	float                                              _maxDistanceToFollowPlayer;                                 // 0x0540   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0544   (0x0004)  MISSED


	/// Functions
	// Function /Script/Halloween2021.Pumpkin.OnInteractionCompleted
	// void OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2021.Pumpkin.Cosmetic_OnStoppedInteracting
	// void Cosmetic_OnStoppedInteracting();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2021.Pumpkin.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2021.Pumpkin.Cosmetic_OnIntroCompleted
	// void Cosmetic_OnIntroCompleted();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2021.Pumpkin.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2021.PumpkinInteraction
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UPumpkinInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0790   (0x0030)  MISSED
};

