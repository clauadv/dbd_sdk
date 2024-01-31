
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

/// Enum /Script/Lunar2022.ERedEnvelopeState
/// Size: 0x04
enum class ERedEnvelopeState : uint32_t
{
	ERedEnvelopeState__AuraVisibleToOwner                                            = 0,
	ERedEnvelopeState__AuraVisibleToNonOwners                                        = 1,
	ERedEnvelopeState__Disappeared                                                   = 2,
	ERedEnvelopeState__ERedEnvelopeState_MAX                                         = 3
};

/// Class /Script/Lunar2022.Lunar2022EventComponent
/// Size: 0x00F8 (0x0000C8 - 0x0001C0)
class ULunar2022EventComponent : public URespawningEventComponent
{ 
public:
	FName                                              _eventTag;                                                  // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,5268) /* TArray<TWeakObjectPtr<ARedEnvelope*>> */ __um(_redEnvelopes);                        // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_5[0xB4];                                      // 0x00E8   (0x00B4)  MISSED
	FGameplayTag                                       _scoreNormal;                                               // 0x019C   (0x000C)  
	FGameplayTag                                       _scoreJackpot;                                              // 0x01A8   (0x000C)  
	FGameplayTag                                       _scoreOwner;                                                // 0x01B4   (0x000C)  


	/// Functions
	// Function /Script/Lunar2022.Lunar2022EventComponent.Authority_OnPlayerFinishPlaying
	// void Authority_OnPlayerFinishPlaying(class ADBDPlayerState* PlayerState);                                             // [0x59cd020] Final|Native|Private 
};

/// Struct /Script/Lunar2022.RedEnvelopeData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRedEnvelopeData
{ 
	ERedEnvelopeState                                  RedEnvelopeState;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class ADBDPlayer*                                  LastInteractingPlayer;                                      // 0x0008   (0x0008)  
	bool                                               IsJackpot;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/Lunar2022.RedEnvelope
/// Size: 0x00D0 (0x000338 - 0x000408)
class ARedEnvelope : public AInteractable
{ 
public:
	class ADBDPlayerState*                             _ownerPlayerState;                                          // 0x0338   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0340   (0x0008)  MISSED
	FRedEnvelopeData                                   _redEnvelopeData;                                           // 0x0348   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0360   (0x0008)  MISSED
	class URedEnvelopeInteraction*                     _redEnvelopeInteraction;                                    // 0x0368   (0x0008)  
	class URedEnvelopeInteraction*                     _redEnvelopeInteractionKiller;                              // 0x0370   (0x0008)  
	class UChargeableComponent*                        _redEnvelopeInteractionChargeable;                          // 0x0378   (0x0008)  
	class UChargeableComponent*                        _redEnvelopeInteractionChargeableKiller;                    // 0x0380   (0x0008)  
	class UInteractor*                                 _redEnvelopeInteractor;                                     // 0x0388   (0x0008)  
	class UPrimitiveComponent*                         _redEnvelopeInteractionZone;                                // 0x0390   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0398   (0x0008)  
	class UStaticMeshComponent*                        _redEnvelopeMesh;                                           // 0x03A0   (0x0008)  
	FDBDTunableRowHandle                               _redEnvelopeInteractionSecondsToCharge;                     // 0x03A8   (0x0028)  
	FDBDTunableRowHandle                               _redEnvelopeInteractionSecondsToChargeKiller;               // 0x03D0   (0x0028)  
	SDK_UNDEFINED(8,5269) /* TWeakObjectPtr<ULunar2022EventComponent*> */ __um(_eventComponent);                   // 0x03F8   (0x0008)  
	class URedEnvelopeOutlineUpdateStrategy*           _redEnvelopeOutlineUpdateStrategy;                          // 0x0400   (0x0008)  


	/// Functions
	// Function /Script/Lunar2022.RedEnvelope.OnRep_RedEnvelopeData
	// void OnRep_RedEnvelopeData();                                                                                         // [0x59cd7e0] Final|Native|Private 
	// Function /Script/Lunar2022.RedEnvelope.OnRep_OwnerPlayerState
	// void OnRep_OwnerPlayerState();                                                                                        // [0x59cd7c0] Final|Native|Private 
	// Function /Script/Lunar2022.RedEnvelope.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x59cd7a0] Final|Native|Public  
	// Function /Script/Lunar2022.RedEnvelope.Cosmetic_SetBackgroundVFX
	// void Cosmetic_SetBackgroundVFX(bool isOwner);                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Lunar2022.RedEnvelope.Cosmetic_OnTriggerDisappearingVFX
	// void Cosmetic_OnTriggerDisappearingVFX(class ADBDPlayer* interactingPlayer, bool isOwner, bool IsJackpot);            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Lunar2022.RedEnvelope.Cosmetic_OnInteractionUpdate
	// void Cosmetic_OnInteractionUpdate(class ADBDPlayer* interactingPlayer, float ChargePercent, bool isOwner);            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Lunar2022.RedEnvelope.Cosmetic_OnInteractionStopped
	// void Cosmetic_OnInteractionStopped(class ADBDPlayer* interactingPlayer, bool isOwner);                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Lunar2022.RedEnvelope.Cosmetic_OnInteractionStart
	// void Cosmetic_OnInteractionStart(class ADBDPlayer* interactingPlayer, bool isOwner);                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Lunar2022.RedEnvelope.Cosmetic_OnAddEmberEffect
	// void Cosmetic_OnAddEmberEffect(class ADBDPlayer* OwningPlayer);                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Lunar2022.RedEnvelopeInteraction
/// Size: 0x0020 (0x000790 - 0x0007B0)
class URedEnvelopeInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0790   (0x0020)  MISSED
};

/// Class /Script/Lunar2022.RedEnvelopeOutlineUpdateStrategy
/// Size: 0x0020 (0x0000E0 - 0x000100)
class URedEnvelopeOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _auraColorOwner;                                            // 0x00E0   (0x0010)  
	FLinearColor                                       _auraColorNonOwner;                                         // 0x00F0   (0x0010)  
};

