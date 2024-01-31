
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
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/TheHag.HagAnimInstance
/// Size: 0x0000 (0x000610 - 0x000610)
class UHagAnimInstance : public UKillerAnimInstance
{ 
public:
};

/// Class /Script/TheHag.HagDynamicAccessoryAnimInstance
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class UHagDynamicAccessoryAnimInstance : public UDynamicAccessoryAnimInstance
{ 
public:
};

/// Class /Script/TheHag.HagScoreComponent
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class UHagScoreComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _trapAttackDuration;                                        // 0x00B8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x00E0   (0x0088)  MISSED


	/// Functions
	// Function /Script/TheHag.HagScoreComponent.Authority_OnActorEndPlay
	// void Authority_OnActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                        // [0x5acb0f0] Final|Native|Private 
};

/// Class /Script/TheHag.HasActivePhantomTrap
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UHasActivePhantomTrap : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00F0   (0x0020)  MISSED
};

/// Class /Script/TheHag.K05AnimInstance
/// Size: 0x0000 (0x000610 - 0x000610)
class UK05AnimInstance : public UKillerAnimInstance
{ 
public:
};

/// Class /Script/TheHag.PhantomTrap
/// Size: 0x0100 (0x000338 - 0x000438)
class APhantomTrap : public AInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0338   (0x0018)  MISSED
	bool                                               _phantomHasCollision;                                       // 0x0350   (0x0001)  
	bool                                               _silentTrapTrigger;                                         // 0x0351   (0x0001)  
	bool                                               _isDeactivating;                                            // 0x0352   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0353   (0x0005)  MISSED
	class ADBDPlayer*                                  _slasherOwner;                                              // 0x0358   (0x0008)  
	class UClass*                                      _slowdownInTrapZoneEffect;                                  // 0x0360   (0x0008)  
	class UTerrorRadiusEmitterComponent*               _terrorRadiusEmitter;                                       // 0x0368   (0x0008)  
	float                                              _camperOutlineDuration;                                     // 0x0370   (0x0004)  
	float                                              _lineOfSightTraceMinInterval;                               // 0x0374   (0x0004)  
	float                                              _speedTolerance;                                            // 0x0378   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	class USceneComponent*                             _trapLocation;                                              // 0x0380   (0x0008)  
	class USphereComponent*                            _triggerZone;                                               // 0x0388   (0x0008)  
	TArray<class UStatusEffect*>                       _survivorSlowdownEffects;                                   // 0x0390   (0x0010)  
	class UChargeableComponent*                        _wipeAwayInteractionChargeable;                             // 0x03A0   (0x0008)  
	class UWipeAwayPhantomTrapInteraction*             _wipeAwayInteraction;                                       // 0x03A8   (0x0008)  
	class UInteractor*                                 _wipeAwayInteractor;                                        // 0x03B0   (0x0008)  
	class UPrimitiveComponent*                         _wipeAwayInteractionZone;                                   // 0x03B8   (0x0008)  
	FDBDTunableRowHandle                               _wipeAwayTimeDuration;                                      // 0x03C0   (0x0028)  
	unsigned char                                      UnknownData03_5[0xD];                                       // 0x03E8   (0x000D)  MISSED
	bool                                               _hasTrapBeenSetOff;                                         // 0x03F5   (0x0001)  
	bool                                               _hasTrapBeenDestroyed;                                      // 0x03F6   (0x0001)  
	bool                                               _isInUse;                                                   // 0x03F7   (0x0001)  
	FDBDTimer                                          _activeTimer;                                               // 0x03F8   (0x0028)  
	bool                                               _isSlasherHere;                                             // 0x0420   (0x0001)  
	unsigned char                                      UnknownData04_6[0x17];                                      // 0x0421   (0x0017)  MISSED


	/// Functions
	// Function /Script/TheHag.PhantomTrap.SetIsInUse
	// void SetIsInUse(bool InUse);                                                                                          // [0x5acc520] Final|Native|Private|BlueprintCallable 
	// Function /Script/TheHag.PhantomTrap.RetrievePerkFlags
	// void RetrievePerkFlags(FGameplayTag silentTrapTag, FGameplayTag phantomCollisionTag);                                 // [0x5acc420] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheHag.PhantomTrap.OnTrapReset
	// void OnTrapReset();                                                                                                   // [0x5acc400] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheHag.PhantomTrap.OnTrapActivated
	// void OnTrapActivated();                                                                                               // [0x5acc3e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheHag.PhantomTrap.Multicast_DestroyTrap
	// void Multicast_DestroyTrap(class ACamperPlayer* playerDestroyingTrap);                                                // [0x58005f0] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheHag.PhantomTrap.IsTrapSet
	// bool IsTrapSet();                                                                                                     // [0x58b2ff0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/TheHag.PhantomTrap.IsTrapDeactivating
	// bool IsTrapDeactivating();                                                                                            // [0x5acc3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHag.PhantomTrap.IsTrapActive
	// bool IsTrapActive();                                                                                                  // [0x5acc390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHag.PhantomTrap.IsSilentTrigger
	// bool IsSilentTrigger();                                                                                               // [0x5acc360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHag.PhantomTrap.InitializeTerrorRadiusEmitter
	// void InitializeTerrorRadiusEmitter(class ASlasherPlayer* owningSlasher);                                              // [0x5acc2d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheHag.PhantomTrap.HasKillerTeleported
	// bool HasKillerTeleported();                                                                                           // [0x5acc2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHag.PhantomTrap.GetPhantomTransform
	// class USceneComponent* GetPhantomTransform();                                                                         // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/TheHag.PhantomTrap.GetMesh
	// class USkeletalMeshComponent* GetMesh();                                                                              // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/TheHag.PhantomTrap.CanActivateTrap
	// bool CanActivateTrap(class ACamperPlayer* camper, bool IsInUse);                                                      // [0x5acc1e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheHag.PhantomTrap.BP_OnTrapDestroyed
	// void BP_OnTrapDestroyed(class ACamperPlayer* playerDestroyingTrap);                                                   // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/TheHag.PhantomTrap.BP_OnTrapActivate
	// void BP_OnTrapActivate(class ACamperPlayer* triggerer);                                                               // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheHag.PhantomTrap.Authority_OnTriggerZoneEndOverlap
	// void Authority_OnTriggerZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5acc080] Final|Native|Private 
	// Function /Script/TheHag.PhantomTrap.Authority_OnTriggerZoneBeginOverlap
	// void Authority_OnTriggerZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5acbe60] Final|Native|Private|HasOutParms 
	// Function /Script/TheHag.PhantomTrap.ActivateSlasher
	// void ActivateSlasher(class ASlasherPlayer* Slasher);                                                                  // [0x5acbdd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheHag.PhantomTrapOutlineStrategy
/// Size: 0x0020 (0x000158 - 0x000178)
class UPhantomTrapOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
	SDK_UNDEFINED(8,5480) /* TWeakObjectPtr<APhantomTrap*> */ __um(_cachedOwningPhantomTrap);                      // 0x0158   (0x0008)  
	FLinearColor                                       _colorWhenTeleportationIsAvailable;                         // 0x0160   (0x0010)  
	class UCurveFloat*                                 _colorAlphaBasedOnDistance;                                 // 0x0170   (0x0008)  
};

/// Class /Script/TheHag.TeleportToPhantomTrap
/// Size: 0x0050 (0x000650 - 0x0006A0)
class UTeleportToPhantomTrap : public UInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _teleportMaxDistance;                                       // 0x0648   (0x0028)  
	FDBDTunableRowHandle                               _slowdownTimeAfterTeleport;                                 // 0x0670   (0x0028)  
	class UClass*                                      _hagSlowdownAfterTeleportStatusEffect;                      // 0x0698   (0x0008)  


	/// Functions
	// Function /Script/TheHag.TeleportToPhantomTrap.IsTeleportationPossible
	// bool IsTeleportationPossible(class ADBDPlayer* Player);                                                               // [0x61d2f50] Event|Public|BlueprintEvent|Const 
	// Function /Script/TheHag.TeleportToPhantomTrap.GetTeleportMaxDistance
	// float GetTeleportMaxDistance(class ASlasherPlayer* Slasher);                                                          // [0x5accbe0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHag.TeleportToPhantomTrap.GetPhantomTrap
	// class APhantomTrap* GetPhantomTrap();                                                                                 // [0x5accbb0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheHag.TeleportToPhantomTrap.Cosmetic_OnTeleport
	// void Cosmetic_OnTeleport(class ASlasherPlayer* Slasher, class APhantomTrap* trap);                                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheHag.TeleportToPhantomTrap.Cosmetic_OnInteractionFinished
	// void Cosmetic_OnInteractionFinished(class ADBDPlayer* Slasher, bool hasInteractionStarted);                           // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheHag.TeleportToPhantomTrap.BP_OnTeleport
	// void BP_OnTeleport(class ASlasherPlayer* Slasher, class APhantomTrap* trap);                                          // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheHag.WipeAwayPhantomTrapInteraction
/// Size: 0x0000 (0x0007D0 - 0x0007D0)
class UWipeAwayPhantomTrapInteraction : public UBasicChargeableInteraction
{ 
public:


	/// Functions
	// Function /Script/TheHag.WipeAwayPhantomTrapInteraction.CancelInteraction
	// void CancelInteraction(class ADBDPlayer* Player);                                                                     // [0x5acce20] Final|Native|Private 
};

