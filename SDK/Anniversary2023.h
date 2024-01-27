
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Anniversary2021
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NetworkUtilities
/// dependency: SpecialEventUtilities

/// Class /Script/Anniversary2023.Anniversary2023EventComponent
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UAnniversary2023EventComponent : public UAnniversary2021EventComponent
{ 
public:
	class UClass*                                      _fragilePalletTrackerClass;                                 // 0x00F0   (0x0008)  
	FName                                              EditorPalletAssetPathName;                                  // 0x00F8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0104   (0x001C)  MISSED


	/// Functions
	// Function /Script/Anniversary2023.Anniversary2023EventComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4db0cf0] Final|Native|Private 
};

/// Struct /Script/Anniversary2023.MarionetteMeshData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMarionetteMeshData
{ 
	class UStaticMesh*                                 DancingMesh;                                                // 0x0000   (0x0008)  
	class UMaterialInstance*                           DancerMaterials;                                            // 0x0008   (0x0010)  
};

/// Class /Script/Anniversary2023.Anniversary2023Marionette
/// Size: 0x0068 (0x000230 - 0x000298)
class AAnniversary2023Marionette : public AActor
{ 
public:
	class URespawnableComponent*                       _respawnableComponent;                                      // 0x0230   (0x0008)  
	class AActor*                                      _dancerMask1;                                               // 0x0238   (0x0008)  
	class AActor*                                      _dancerMask2;                                               // 0x0240   (0x0008)  
	float                                              _rotationRate;                                              // 0x0248   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	class USphereComponent*                            _playerTracker;                                             // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        _dancingCharacter;                                          // 0x0258   (0x0008)  
	TArray<FMarionetteMeshData>                        _potentialMarionetteMeshes;                                 // 0x0260   (0x0010)  
	TArray<class UClass*>                              _potentialMasks;                                            // 0x0270   (0x0010)  
	FName                                              _maskLSocketName;                                           // 0x0280   (0x000C)  
	FName                                              _maskRSocketName;                                           // 0x028C   (0x000C)  
};

/// Class /Script/Anniversary2023.InvitationInteractionDefinition
/// Size: 0x0000 (0x000650 - 0x000650)
class UInvitationInteractionDefinition : public UInteractionDefinition
{ 
public:
};

/// Class /Script/Anniversary2023.BloodlustExpose
/// Size: 0x0030 (0x000650 - 0x000680)
class UBloodlustExpose : public UInvitationInteractionDefinition
{ 
public:
	class UClass*                                      _effectToApply;                                             // 0x0648   (0x0008)  
	FDBDTunableRowHandle                               _bloodlustExposeDuration;                                   // 0x0650   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0678   (0x0008)  MISSED


	/// Functions
	// Function /Script/Anniversary2023.BloodlustExpose.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.BloodlustExposeInteraction
/// Size: 0x0030 (0x000650 - 0x000680)
class UBloodlustExposeInteraction : public UInvitationInteractionDefinition
{ 
public:
	class UClass*                                      _effectToApply;                                             // 0x0648   (0x0008)  
	FDBDTunableRowHandle                               _bloodlustExposeDuration;                                   // 0x0650   (0x0028)  
	class ACamperPlayer*                               _camper;                                                    // 0x0678   (0x0008)  


	/// Functions
	// Function /Script/Anniversary2023.BloodlustExposeInteraction.Multicast_BloodlustExpose
	// void Multicast_BloodlustExpose(class ADBDPlayer* Player, class ACamperPlayer* Target);                                // [0x4db1420] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Anniversary2023.BloodlustExposeInteraction.Cosmetic_BloodlustExpose
	// void Cosmetic_BloodlustExpose(class ADBDPlayer* Player, class ACamperPlayer* Target);                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.FragilePalletComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UFragilePalletComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3536) /* FMulticastInlineDelegate */ __um(Cosmetic_OnFragilePalletSpawnBegin);                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3537) /* FMulticastInlineDelegate */ __um(Cosmetic_OnFragilePalletSpawnEnd);                  // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FDBDTunableRowHandle                               _fragilePalletSpawnTime;                                    // 0x00E0   (0x0028)  
};

/// Class /Script/Anniversary2023.FragilePalletInteractionDefinition
/// Size: 0x0000 (0x000650 - 0x000650)
class UFragilePalletInteractionDefinition : public UInvitationInteractionDefinition
{ 
public:
};

/// Class /Script/Anniversary2023.FragilePalletTrackerVisibilityComponent
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UFragilePalletTrackerVisibilityComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x00B8   (0x0038)  MISSED
	FDBDTunableRowHandle                               _visibilityDistance;                                        // 0x00F0   (0x0028)  


	/// Functions
	// Function /Script/Anniversary2023.FragilePalletTrackerVisibilityComponent.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x4db1a20] Final|Native|Private 
};

/// Class /Script/Anniversary2023.InvitationPlayerComponent
/// Size: 0x02B8 (0x0000B8 - 0x000370)
class UInvitationPlayerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8A];                                      // 0x00B8   (0x008A)  MISSED
	bool                                               _isInEndGame;                                               // 0x0142   (0x0001)  
	unsigned char                                      UnknownData01_5[0xD];                                       // 0x0143   (0x000D)  MISSED
	FSpeedBasedNetSyncedValue                          _invitationCharges;                                         // 0x0150   (0x0038)  
	int32_t                                            _invitationChargesInt;                                      // 0x0188   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	class UTimerObject*                                _cooldownTimer;                                             // 0x0190   (0x0008)  
	unsigned char                                      UnknownData03_5[0x68];                                      // 0x0198   (0x0068)  MISSED
	FGameplayTagQuery                                  _particleVFXDeactivateTags;                                 // 0x0200   (0x0048)  
	FDBDTunableRowHandle                               _invitationChargeGain;                                      // 0x0248   (0x0028)  
	FDBDTunableRowHandle                               _maxNumberOfCharges;                                        // 0x0270   (0x0028)  
	FDBDTunableRowHandle                               _chargeRechargeRate;                                        // 0x0298   (0x0028)  
	FDBDTunableRowHandle                               _abilityCooldown;                                           // 0x02C0   (0x0028)  
	FDBDTunableRowHandle                               _chargesForReward;                                          // 0x02E8   (0x0028)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x0310   (0x0018)  MISSED
	FGameplayTagQuery                                  _disablingPlayerTargetComponentTagsQuery;                   // 0x0328   (0x0048)  


	/// Functions
	// Function /Script/Anniversary2023.InvitationPlayerComponent.OnRep_InvitationChargesInt
	// void OnRep_InvitationChargesInt();                                                                                    // [0x4db2a50] Final|Native|Protected 
	// Function /Script/Anniversary2023.InvitationPlayerComponent.OnRep_CooldownTimer
	// void OnRep_CooldownTimer();                                                                                           // [0x4db2a30] Final|Native|Protected 
	// Function /Script/Anniversary2023.InvitationPlayerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4db2a10] Native|Protected     
	// Function /Script/Anniversary2023.InvitationPlayerComponent.Multicast_CosmeticOnInvitationInteractionActivate
	// void Multicast_CosmeticOnInvitationInteractionActivate(class ADBDPlayer* Player, class AActor* Target);               // [0x4db2940] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Anniversary2023.InvitationPlayerComponent.Cosmetic_SetVFXParticlesVisibility
	// void Cosmetic_SetVFXParticlesVisibility(bool IsVisible);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary2023.InvitationPlayerComponent.Cosmetic_OnPlayerInChaseStateChanged
	// void Cosmetic_OnPlayerInChaseStateChanged(bool inChase);                                                              // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary2023.InvitationPlayerComponent.Cosmetic_OnInvitationInteractionReady
	// void Cosmetic_OnInvitationInteractionReady(bool IsReady);                                                             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary2023.InvitationPlayerComponent.Cosmetic_OnInvitationInteractionActivate
	// void Cosmetic_OnInvitationInteractionActivate(class ADBDPlayer* abilityCaster, class AActor* Target);                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary2023.InvitationPlayerComponent.Cosmetic_OnInvitationChargesIntChanged
	// void Cosmetic_OnInvitationChargesIntChanged(int32_t invitationCharge);                                                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.InvitationKillerComponent
/// Size: 0x0060 (0x000370 - 0x0003D0)
class UInvitationKillerComponent : public UInvitationPlayerComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0370   (0x0008)  MISSED
	class UClass*                                      _bloodlustExposeClass;                                      // 0x0378   (0x0008)  
	class UClass*                                      _remoteDestroyClass;                                        // 0x0380   (0x0008)  
	class UClass*                                      _negateStunClass;                                           // 0x0388   (0x0008)  
	class UBloodlustExposeInteraction*                 _bloodlustExposeInteraction;                                // 0x0390   (0x0008)  
	class URemoteDestroyInteraction*                   _remoteDestroyInteraction;                                  // 0x0398   (0x0008)  
	class UKillerNegateStunInteraction*                _negateStunInteraction;                                     // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x03A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Anniversary2023.InvitationKillerComponent.OnRep_NegateStunInteraction
	// void OnRep_NegateStunInteraction(class UKillerNegateStunInteraction* prevNegateStunInteraction);                      // [0x4db1fc0] Final|Native|Protected 
	// Function /Script/Anniversary2023.InvitationKillerComponent.Cosmetic_SetVignetteVisibility
	// void Cosmetic_SetVignetteVisibility(bool IsVisible);                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Anniversary2023.InvitationKillerComponent.Cosmetic_ActivateVFXOnKillerStunned
	// void Cosmetic_ActivateVFXOnKillerStunned();                                                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.InvitationTargetComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UInvitationTargetComponent : public UActorComponent
{ 
public:
	float                                              _interactionAngleInDegrees;                                 // 0x00B8   (0x0004)  
	FLinearColor                                       _revealColor;                                               // 0x00BC   (0x0010)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00CC   (0x000C)  MISSED
	class AActor*                                      _targetGameObject;                                          // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/Anniversary2023.InvitationTargetComponent.OnRep_TargetGameObject
	// void OnRep_TargetGameObject(class AActor* previousTarget);                                                            // [0x4db31c0] Final|Native|Private 
	// Function /Script/Anniversary2023.InvitationTargetComponent.Cosmetic_OnTargetObjectChanged
	// void Cosmetic_OnTargetObjectChanged(class AActor* Target, class AActor* lastTarget);                                  // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.InvitationKillerTargetComponent
/// Size: 0x0078 (0x0000E0 - 0x000158)
class UInvitationKillerTargetComponent : public UInvitationTargetComponent
{ 
public:
	FDBDTunableRowHandle                               _bloodlustExposeDistance;                                   // 0x00E0   (0x0028)  
	FDBDTunableRowHandle                               _remoteDestroyDistance;                                     // 0x0108   (0x0028)  
	FDBDTunableRowHandle                               _negateStunDistance;                                        // 0x0130   (0x0028)  
};

/// Class /Script/Anniversary2023.InvitationSurvivorComponent
/// Size: 0x0038 (0x000370 - 0x0003A8)
class UInvitationSurvivorComponent : public UInvitationPlayerComponent
{ 
public:
	class UClass*                                      _reverseBamboozleInteraction;                               // 0x0370   (0x0008)  
	class UClass*                                      _fragilePalletInteraction;                                  // 0x0378   (0x0008)  
	class UInteractionDefinition*                      _reverseBamboozle;                                          // 0x0380   (0x0008)  
	class UInteractionDefinition*                      _fragilePallet;                                             // 0x0388   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0390   (0x0018)  MISSED
};

/// Class /Script/Anniversary2023.InvitationSurvivorTargetComponent
/// Size: 0x0058 (0x0000E0 - 0x000138)
class UInvitationSurvivorTargetComponent : public UInvitationTargetComponent
{ 
public:
	FDBDTunableRowHandle                               _vaultBlockerDistance;                                      // 0x00E0   (0x0028)  
	FDBDTunableRowHandle                               _fragilePalletDistance;                                     // 0x0108   (0x0028)  
	class UClass*                                      _masqueradeRevealStatusEffect;                              // 0x0130   (0x0008)  
};

/// Class /Script/Anniversary2023.KillerNegateStunInteraction
/// Size: 0x00B0 (0x000650 - 0x000700)
class UKillerNegateStunInteraction : public UInvitationInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0650   (0x0010)  MISSED
	class UClass*                                      _negateStunEffect;                                          // 0x0660   (0x0008)  
	class UClass*                                      _negateStunEffectIconShow;                                  // 0x0668   (0x0008)  
	FDBDTunableRowHandle                               _negateStunPower;                                           // 0x0670   (0x0028)  
	FDBDTunableRowHandle                               _negateStunDuration;                                        // 0x0698   (0x0028)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x06C0   (0x0020)  MISSED
	class UStatusEffect*                               _negateStunStatusEffect;                                    // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x06E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Anniversary2023.KillerNegateStunInteraction.OnRep_StatusEffect
	// void OnRep_StatusEffect(class UStatusEffect* previousStatusEffect);                                                   // [0x4db35e0] Final|Native|Private 
	// Function /Script/Anniversary2023.KillerNegateStunInteraction.Cosmetic_OnInteractionUpdateStart
	// void Cosmetic_OnInteractionUpdateStart(class ADBDPlayer* interactingPlayer, class AInteractable* Interactable);       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.RemoteDestroyInteraction
/// Size: 0x0060 (0x000650 - 0x0006B0)
class URemoteDestroyInteraction : public UInvitationInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _remoteDestroyDuration;                                     // 0x0648   (0x0028)  
	class AInteractable*                               _interactable;                                              // 0x0670   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0678   (0x0038)  MISSED


	/// Functions
	// Function /Script/Anniversary2023.RemoteDestroyInteraction.Multicast_RemoteDestroy
	// void Multicast_RemoteDestroy(class ADBDPlayer* Player, class AInteractable* Interactable);                            // [0x4db1420] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Anniversary2023.RemoteDestroyInteraction.ExplodeInteractable
	// void ExplodeInteractable(class ADBDPlayer* Player, class AInteractable* Interactable);                                // [0x4db3900] Final|Native|Protected|Const 
	// Function /Script/Anniversary2023.RemoteDestroyInteraction.Cosmetic_OnRemoteDestroy
	// void Cosmetic_OnRemoteDestroy(class ADBDPlayer* interactingPlayer, class AInteractable* Interactable);                // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.ReverseBamboozleInteractionDefinition
/// Size: 0x0050 (0x000650 - 0x0006A0)
class UReverseBamboozleInteractionDefinition : public UInvitationInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _vaultBlockerDuration;                                      // 0x0648   (0x0028)  
	TArray<class UClass*>                              _windowBlockSelfFeedbackClasses;                            // 0x0670   (0x0010)  
	TArray<class UClass*>                              _windowBlockOtherFeedbackClasses;                           // 0x0680   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0690   (0x0008)  MISSED
	class AWindow*                                     _authorityWindow;                                           // 0x0698   (0x0008)  


	/// Functions
	// Function /Script/Anniversary2023.ReverseBamboozleInteractionDefinition.Multicast_OnWindowBlockBegin
	// void Multicast_OnWindowBlockBegin(class ADBDPlayer* abilityCaster, class AWindow* Window);                            // [0x4db1420] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Anniversary2023.ReverseBamboozleInteractionDefinition.Cosmetic_OnWindowBlockBegin
	// void Cosmetic_OnWindowBlockBegin(class ADBDPlayer* abilityCaster, class AWindow* Window, float Duration);             // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Anniversary2023.ShortenStunDurationEffect
/// Size: 0x0018 (0x000350 - 0x000368)
class UShortenStunDurationEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0350   (0x0018)  MISSED
};

/// Class /Script/Anniversary2023.SpawnedPalletTracker
/// Size: 0x0050 (0x000230 - 0x000280)
class ASpawnedPalletTracker : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0230   (0x0018)  MISSED
	class USceneComponent*                             _indicatorLocation;                                         // 0x0248   (0x0008)  
	class APallet*                                     _trackedPallet;                                             // 0x0250   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0258   (0x0028)  MISSED


	/// Functions
	// Function /Script/Anniversary2023.SpawnedPalletTracker.SetIndicatorOutlineVisibility
	// void SetIndicatorOutlineVisibility(bool activated);                                                                   // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/Anniversary2023.SpawnedPalletTracker.OnRep_TrackedPallet
	// void OnRep_TrackedPallet();                                                                                           // [0x4db4510] Final|Native|Private 
};

