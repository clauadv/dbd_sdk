
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AkAudio
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DeadByDaylight
/// dependency: Engine

/// Enum /Script/TheDemogorgon.EDemogorgonPortalState
/// Size: 0x04
enum class EDemogorgonPortalState : uint8_t
{
	EDemogorgonPortalState__Hidden                                                   = 0,
	EDemogorgonPortalState__InUse                                                    = 1,
	EDemogorgonPortalState__Exposed                                                  = 2,
	EDemogorgonPortalState__EDemogorgonPortalState_MAX                               = 3
};

/// Class /Script/TheDemogorgon.DemogorgonAnimInstance
/// Size: 0x0030 (0x000610 - 0x000640)
class UDemogorgonAnimInstance : public UKillerAnimInstance
{ 
public:
	float                                              _leftArmPushback;                                           // 0x0610   (0x0004)  
	float                                              _rightArmPushback;                                          // 0x0614   (0x0004)  
	bool                                               _isDemogorgonCharging;                                      // 0x0618   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0619   (0x0003)  MISSED
	float                                              _demogorgonChargingPercent;                                 // 0x061C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0620   (0x0020)  MISSED
};

/// Class /Script/TheDemogorgon.DemogorgonAnimProxyComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UDemogorgonAnimProxyComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00B8   (0x0020)  MISSED
};

/// Class /Script/TheDemogorgon.DemogorgonHuskAnimInstance
/// Size: 0x0080 (0x0002C0 - 0x000340)
class UDemogorgonHuskAnimInstance : public UAnimInstance
{ 
public:
	class APawn*                                       _owningPawn;                                                // 0x02C0   (0x0008)  
	float                                              _teleportDuration;                                          // 0x02C8   (0x0004)  
	float                                              _teleportExitPlayRate;                                      // 0x02CC   (0x0004)  
	bool                                               _isSlowerExit;                                              // 0x02D0   (0x0001)  
	bool                                               _isTeleporting;                                             // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02D2   (0x0006)  MISSED
	class UAnimSequence*                               _huskPortalSlowerExit;                                      // 0x02D8   (0x0008)  
	class UAnimSequence*                               _huskPortalExit;                                            // 0x02E0   (0x0008)  
	class UAnimMontage*                                _demogorgonPortalExit;                                      // 0x02E8   (0x0008)  
	class UAnimMontage*                                _demogorgonPortalEntry;                                     // 0x02F0   (0x0008)  
	SDK_UNDEFINED(8,3109) /* TWeakObjectPtr<UDemogorgonPortalPlacerStateComponent*> */ __um(_demogorgonPortalPlacerState); // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0300   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5a3d360] Final|Native|Private 
};

/// Class /Script/TheDemogorgon.DemogorgonPortal
/// Size: 0x00C0 (0x000338 - 0x0003F8)
class ADemogorgonPortal : public AInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0338   (0x0010)  MISSED
	class UPrimitiveComponent*                         _portalAreaCollider;                                        // 0x0348   (0x0008)  
	class UChargeableComponent*                        _destroyChargeable;                                         // 0x0350   (0x0008)  
	class UChargeableComponent*                        _teleportChargeable;                                        // 0x0358   (0x0008)  
	EDemogorgonPortalState                             _portalState;                                               // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	class UAkAudioEvent*                               _portalIdleSound;                                           // 0x0368   (0x0008)  
	class UAkAudioEvent*                               _portalDestroyingStart;                                     // 0x0370   (0x0008)  
	class UAkAudioEvent*                               _portalTeleportingSound;                                    // 0x0378   (0x0008)  
	class UParticleSystem*                             _destroyParticleSystem;                                     // 0x0380   (0x0008)  
	float                                              _destroyDuration;                                           // 0x0388   (0x0004)  
	unsigned char                                      UnknownData02_5[0x24];                                      // 0x038C   (0x0024)  MISSED
	TArray<class ADBDPlayer*>                          _destroyingPlayers;                                         // 0x03B0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x30];                                      // 0x03C0   (0x0030)  MISSED
	class UAIPerceptionStimuliSourceComponent*         _perceptionStimuliComponent;                                // 0x03F0   (0x0008)  


	/// Functions
	// Function /Script/TheDemogorgon.DemogorgonPortal.TriggerDirtExplosion
	// void TriggerDirtExplosion();                                                                                          // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.ShowPortalTeleportInteractionStartVFX
	// void ShowPortalTeleportInteractionStartVFX();                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.ShowPortalActiveVFX
	// void ShowPortalActiveVFX();                                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.RemovePortalTeleportInteractionStartVFX
	// void RemovePortalTeleportInteractionStartVFX();                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.RemovePortalActiveVFX
	// void RemovePortalActiveVFX();                                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.PlaySoundFromPortal
	// void PlaySoundFromPortal(class UAkAudioEvent* SoundEvent);                                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.OnTeleportAbilityCooldownChangedVFX
	// void OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown);                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.OnTargetedChanged
	// void OnTargetedChanged();                                                                                             // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.OnPortalStateChanged
	// void OnPortalStateChanged(EDemogorgonPortalState State);                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.OnPortalDestroyed
	// void OnPortalDestroyed(class ADBDPlayer* Player);                                                                     // [0x5a3e200] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheDemogorgon.DemogorgonPortal.OnEndOverlapPortalArea
	// void OnEndOverlapPortalArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5a3e0a0] Final|Native|Protected 
	// Function /Script/TheDemogorgon.DemogorgonPortal.OnBeginOverlapPortalArea
	// void OnBeginOverlapPortalArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5a3de80] Final|Native|Protected|HasOutParms 
	// Function /Script/TheDemogorgon.DemogorgonPortal.MakePortalDisappearVFX
	// void MakePortalDisappearVFX();                                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPortal.IsTargeted
	// bool IsTargeted();                                                                                                    // [0x5a3de60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDemogorgon.DemogorgonPortal.Authority_StopDestroyingPlayers
	// void Authority_StopDestroyingPlayers();                                                                               // [0x5a3de40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheDemogorgon.DemogorgonPortal.Authority_OnTeleportChargePercentChanged
	// void Authority_OnTeleportChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5a3dd30] Final|Native|Public  
	// Function /Script/TheDemogorgon.DemogorgonPortal.Authority_OnDestroyChargePercentChanged
	// void Authority_OnDestroyChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5a3dc20] Final|Native|Public  
};

/// Class /Script/TheDemogorgon.DemogorgonPortalOutlineUpdateStrategy
/// Size: 0x0030 (0x0000E0 - 0x000110)
class UDemogorgonPortalOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _survivorAuraColor;                                         // 0x00E0   (0x0010)  
	FLinearColor                                       _killerHiddenAuraColor;                                     // 0x00F0   (0x0010)  
	FLinearColor                                       _killerExposedAuraColor;                                    // 0x0100   (0x0010)  
};

/// Class /Script/TheDemogorgon.DemogorgonPortalPlacementValidationStrategy
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UDemogorgonPortalPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{ 
public:
	class UDemogorgonPortalPlacerStateComponent*       _portalPlacerState;                                         // 0x00E0   (0x0008)  
	class UChargedAttackStateComponent*                _chargedAttackState;                                        // 0x00E8   (0x0008)  
	float                                              _distanceForWorldCollisionDetection;                        // 0x00F0   (0x0004)  
	float                                              _numberOfGroundTest;                                        // 0x00F4   (0x0004)  
	float                                              _portalEdgeTestRadius;                                      // 0x00F8   (0x0004)  
	float                                              _maxElevationDifferentialOnPortalEdge;                      // 0x00FC   (0x0004)  
};

/// Struct /Script/TheDemogorgon.PortalRestrictedLocation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPortalRestrictedLocation
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	float                                              DistanceSquared;                                            // 0x000C   (0x0004)  
};

/// Class /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UDemogorgonPortalPlacerStateComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3110) /* FMulticastInlineDelegate */ __um(OnTeleportCooldownComplete);                        // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C8   (0x000C)  MISSED
	int32_t                                            _remainingPortals;                                          // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x00D8   (0x0048)  MISSED
	TArray<class ADemogorgonPortal*>                   _placedPortals;                                             // 0x0120   (0x0010)  
	TArray<FPortalRestrictedLocation>                  _restrictedPortalLocations;                                 // 0x0130   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0140   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent.UpdateRemainingPortalCount
	// void UpdateRemainingPortalCount();                                                                                    // [0x5a3ebf0] Final|Native|Private 
	// Function /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5a3ebd0] Final|Native|Public  
	// Function /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent.OnDemogorgonTeleportCooldownComplete__DelegateSignature
	// void OnDemogorgonTeleportCooldownComplete__DelegateSignature();                                                       // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent.IsUsePortalCooldownDone
	// bool IsUsePortalCooldownDone();                                                                                       // [0x5a3eba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent.InitializeTunableValues
	// void InitializeTunableValues(class ASlasherPlayer* killer);                                                           // [0x5a3eb10] Final|Native|Private 
	// Function /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetTeleportDuration
	// float GetTeleportDuration();                                                                                          // [0x5a3eaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheDemogorgon.DemogorgonPortalPlacerStateComponent.GetRemainingPortalCount
	// int32_t GetRemainingPortalCount();                                                                                    // [0x5a3ead0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheDemogorgon.DemogorgonPortalRadiusDetectorComponent
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UDemogorgonPortalRadiusDetectorComponent : public UActorComponent
{ 
public:
	TArray<class ADemogorgonPortal*>                   Portals;                                                    // 0x00B8   (0x0010)  
	TArray<class ADBDPlayer*>                          _playersInsideRadius;                                       // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x38];                                      // 0x00D8   (0x0038)  MISSED
	class UClass*                                      _portalContactEffect;                                       // 0x0110   (0x0008)  
	class UClass*                                      _portalProximityHuntingCamperEffect;                        // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnRep_PlayersInsideRadius
	// void OnRep_PlayersInsideRadius();                                                                                     // [0x5a3ef80] Final|Native|Private 
	// Function /Script/TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.OnPortalEffectsAppliedMultiDelegate__DelegateSignature
	// void OnPortalEffectsAppliedMultiDelegate__DelegateSignature();                                                        // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5a3ef60] Final|Native|Private 
	// Function /Script/TheDemogorgon.DemogorgonPortalRadiusDetectorComponent.Authority_CallOnPortalEffectsApplied
	// void Authority_CallOnPortalEffectsApplied(FDelegateProperty Callback);                                                // [0x5a3eeb0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/TheDemogorgon.DemogorgonPortalTargetingComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UDemogorgonPortalTargetingComponent : public UActorComponent
{ 
public:
	class ADemogorgonPortal*                           _targetedPortal;                                            // 0x00B8   (0x0008)  
	class UDemogorgonPortalPlacerStateComponent*       _portalPlacerState;                                         // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00C8   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheDemogorgon.DemogorgonPortalTargetingComponent.SetIsPorting
	// void SetIsPorting(bool isPorting);                                                                                    // [0x5a3f400] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheDemogorgon.DemogorgonPortalTargetingComponent.Server_SetTargetedPortal
	// void Server_SetTargetedPortal(class ADemogorgonPortal* targetedPortal);                                               // [0x5a3f340] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheDemogorgon.DemogorgonPortalTargetingComponent.Multicast_SetTargetedPortal
	// void Multicast_SetTargetedPortal(class ADemogorgonPortal* targetedPortal);                                            // [0x5a3f280] Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate 
	// Function /Script/TheDemogorgon.DemogorgonPortalTargetingComponent.GetTargetedPortal
	// class ADemogorgonPortal* GetTargetedPortal();                                                                         // [0x5a3f260] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheDemogorgon.DemogorgonPounceAttack
/// Size: 0x0070 (0x000390 - 0x000400)
class UDemogorgonPounceAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0390   (0x0070)  MISSED
};

/// Class /Script/TheDemogorgon.DemogorgonPounceAttackOpenSubstate
/// Size: 0x0000 (0x000130 - 0x000130)
class UDemogorgonPounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
};

/// Class /Script/TheDemogorgon.DemogorgonPounceAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UDemogorgonPounceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheDemogorgon.DemogorgonPounceAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UDemogorgonPounceAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheDemogorgon.DemogorgonPounceAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UDemogorgonPounceAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheDemogorgon.DemogorgonPounceInteraction
/// Size: 0x00B0 (0x000790 - 0x000840)
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0790   (0x0068)  MISSED
	class UChargedAttackStateComponent*                _chargedAttackState;                                        // 0x07F8   (0x0008)  
	class ASlasherPlayer*                              _owningSlasher;                                             // 0x0800   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0808   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
	// void TriggerHuntingAudioEvent(bool isHunting);                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
	// void TriggerChargeCancelAudioEvent();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
	// void OnChargedAttackReadyChanged(bool Ready);                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
	// void OnCancelCooldownComplete();                                                                                      // [0x5a3fe00] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheDemogorgon.DemogorgonPower
/// Size: 0x0010 (0x0004C8 - 0x0004D8)
class ADemogorgonPower : public ACollectable
{ 
public:
	class UClass*                                      _demogorgonHuskClass;                                       // 0x04C8   (0x0008)  
	class AActor*                                      _demogorgonHusk;                                            // 0x04D0   (0x0008)  
};

/// Class /Script/TheDemogorgon.DemogorgonPowerItemProgressComponent
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UDemogorgonPortalPlacerStateComponent*       _portalPlacerState;                                         // 0x00C0   (0x0008)  
};

/// Class /Script/TheDemogorgon.DemogorgonScoreComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UDemogorgonScoreComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheDemogorgon.DemogorgonStealthComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UDemogorgonStealthComponent : public UActorComponent
{ 
public:
	class UStatusEffect*                               _stealthEffect;                                             // 0x00B8   (0x0008)  
	class UClass*                                      _stealthEffectClass;                                        // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00C8   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheDemogorgon.DemogorgonStealthComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5a40470] Final|Native|Private 
};

/// Class /Script/TheDemogorgon.DestroyDemogorgonPortalInteraction
/// Size: 0x0000 (0x000790 - 0x000790)
class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/TheDemogorgon.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
	// void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime); // [0x5a40600] Final|Native|Private 
};

/// Class /Script/TheDemogorgon.ElevensSodaAddon
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class UElevensSodaAddon : public UItemAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02B8   (0x0008)  MISSED
	TArray<class AGenerator*>                          _generatorsBeingRepaired;                                   // 0x02C0   (0x0010)  


	/// Functions
	// Function /Script/TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
	// void Multicast_UnhighlightGenerator(class AGenerator* Generator);                                                     // [0x5a40b50] Final|Net|NetReliableNative|Event|NetMulticast|Private|Const 
	// Function /Script/TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
	// void Multicast_HighlightGenerator(class AGenerator* Generator);                                                       // [0x5a40ac0] Final|Net|NetReliableNative|Event|NetMulticast|Private|Const 
};

/// Class /Script/TheDemogorgon.LeproseLichenAddon
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class ULeproseLichenAddon : public UItemAddon
{ 
public:
	class UClass*                                      _timedRevealSurvivorEffectClass;                            // 0x02B8   (0x0008)  
	float                                              _revealDuration;                                            // 0x02C0   (0x0004)  
	float                                              _portalSurvivorRange;                                       // 0x02C4   (0x0004)  
	class UClass*                                      _revealSurvivorsWhenTeleportingClass;                       // 0x02C8   (0x0008)  
};

/// Class /Script/TheDemogorgon.PortalSurvivorSubAnimInstance
/// Size: 0x0040 (0x000550 - 0x000590)
class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0550   (0x0038)  MISSED
	bool                                               _isDestroyingPortal;                                        // 0x0588   (0x0001)  
	bool                                               _isSpooked;                                                 // 0x0589   (0x0001)  
	bool                                               _hasSkillCheckFailed;                                       // 0x058A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x058B   (0x0005)  MISSED
};

/// Class /Script/TheDemogorgon.SetGroundPortalInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class USetGroundPortalInteraction : public UChargeableInteractionDefinition
{ 
public:
	class UDemogorgonPortalPlacerStateComponent*       _portalPlacerState;                                         // 0x0788   (0x0008)  
	class UObjectPlacerComponent*                      _trapPlacerComponent;                                       // 0x0790   (0x0008)  
	class UClass*                                      _portalClassToSpawn;                                        // 0x0798   (0x0008)  
};

/// Class /Script/TheDemogorgon.TeleportToDemogorgonPortalInteraction
/// Size: 0x00C0 (0x000790 - 0x000850)
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              _teleportToPortalSoundRange;                                // 0x0788   (0x0004)  
	float                                              _inputReleaseChargePercentAllowance;                        // 0x078C   (0x0004)  
	float                                              _enterPortalPhaseDuration;                                  // 0x0790   (0x0004)  
	float                                              _cancelTeleportingPhaseDuration;                            // 0x0794   (0x0004)  
	class UClass*                                      _redMossStatusEffectClass;                                  // 0x0798   (0x0008)  
	class UDemogorgonPortalTargetingComponent*         _portalTargetingComponent;                                  // 0x07A0   (0x0008)  
	class UDemogorgonPortalPlacerStateComponent*       _portalPlacerState;                                         // 0x07A8   (0x0008)  
	class ADemogorgonPortal*                           _startingPortal;                                            // 0x07B0   (0x0008)  
	class ADemogorgonPortal*                           _targetedPortal;                                            // 0x07B8   (0x0008)  
	class ADBDPlayer*                                  _interactingPlayer;                                         // 0x07C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x07C8   (0x0088)  MISSED


	/// Functions
	// Function /Script/TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
	// void OnTeleportInteractionCanceledVFX();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* killer);                                                                      // [0x5a41310] Final|Native|Private 
	// Function /Script/TheDemogorgon.TeleportToDemogorgonPortalInteraction.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(bool isKillerLocallyObserved);                                                          // [0x5a41280] Final|Native|Private 
};

