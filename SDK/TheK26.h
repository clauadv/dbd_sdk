
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
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDCompetence
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: Niagara
/// dependency: StatSystem

/// Enum /Script/TheK26.EK26ProjectileState
/// Size: 0x07
enum class EK26ProjectileState : uint8_t
{
	EK26ProjectileState__Invalid                                                     = 0,
	EK26ProjectileState__Summoning                                                   = 1,
	EK26ProjectileState__Idle                                                        = 2,
	EK26ProjectileState__FollowingPath                                               = 3,
	EK26ProjectileState__OffPath                                                     = 4,
	EK26ProjectileState__Destroyed                                                   = 5,
	EK26ProjectileState__EK26ProjectileState_MAX                                     = 6
};

/// Enum /Script/TheK26.EK26AmmoState
/// Size: 0x04
enum class EK26AmmoState : uint8_t
{
	EK26AmmoState__Available                                                         = 0,
	EK26AmmoState__Expiring                                                          = 1,
	EK26AmmoState__Recharging                                                        = 2,
	EK26AmmoState__EK26AmmoState_MAX                                                 = 3
};

/// Enum /Script/TheK26.EK26AmmoCooldownReason
/// Size: 0x03
enum class EK26AmmoCooldownReason : uint8_t
{
	EK26AmmoCooldownReason__Expired                                                  = 0,
	EK26AmmoCooldownReason__Fired                                                    = 1,
	EK26AmmoCooldownReason__EK26AmmoCooldownReason_MAX                               = 2
};

/// Enum /Script/TheK26.FK26AttachedCrowRemovalReason
/// Size: 0x09
enum class FK26AttachedCrowRemovalReason : uint8_t
{
	FK26AttachedCrowRemovalReason__Invalid                                           = 0,
	FK26AttachedCrowRemovalReason__LockerEnter                                       = 1,
	FK26AttachedCrowRemovalReason__SurvivorDamagedByCrow                             = 2,
	FK26AttachedCrowRemovalReason__SurvivorDowned                                    = 3,
	FK26AttachedCrowRemovalReason__SurvivorPickedUp                                  = 4,
	FK26AttachedCrowRemovalReason__CrowFlashlighted                                  = 5,
	FK26AttachedCrowRemovalReason__RemoveInteraction                                 = 6,
	FK26AttachedCrowRemovalReason__ForceRemove                                       = 7,
	FK26AttachedCrowRemovalReason__FK26AttachedCrowRemovalReason_MAX                 = 8
};

/// Class /Script/TheK26.CorrectiveAction
/// Size: 0x0058 (0x0003C8 - 0x000420)
class UCorrectiveAction : public UPerk
{ 
public:
	float                                              _startingTokens;                                            // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _correctiveActionStatusEffectClass;                         // 0x03D8   (0x0008)  
	FGameplayTagContainer                              _allowedInteractionSemanticsForToken;                       // 0x03E0   (0x0020)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0400   (0x0020)  MISSED
};

/// Class /Script/TheK26.HexPentimento
/// Size: 0x0030 (0x000448 - 0x000478)
class UHexPentimento : public UHexPerk
{ 
public:
	class UClass*                                      _rekindleInteractionClass;                                  // 0x0448   (0x0008)  
	TArray<class ATotem*>                              _blockedTotems;                                             // 0x0450   (0x0010)  
	TArray<class UClass*>                              _statusEffectClasses;                                       // 0x0460   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0470   (0x0008)  MISSED
};

/// Class /Script/TheK26.HinderOnCrowAttachStatusEffect
/// Size: 0x00B8 (0x0003B8 - 0x000470)
class UHinderOnCrowAttachStatusEffect : public UBaseLingeringStatusEffect
{ 
public:
	FGameplayTag                                       _onCrowAttachStateTag;                                      // 0x03B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03C4   (0x0004)  MISSED
	FTunableStat                                       _hinderOnIdleLingerTime;                                    // 0x03C8   (0x0080)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0448   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK26.HinderOnCrowAttachStatusEffect.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5ba65b0] Final|Native|Public  
};

/// Class /Script/TheK26.HinderOnIdleAndAttachStatusEffect
/// Size: 0x0038 (0x0003F0 - 0x000428)
class UHinderOnIdleAndAttachStatusEffect : public ULingeringStateTagStatusEffect
{ 
public:
	FGameplayTag                                       _onCrowAttachStateTag;                                      // 0x03F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x03FC   (0x002C)  MISSED
};

/// Class /Script/TheK26.K26AbilitySubAnimInstance
/// Size: 0x0090 (0x000560 - 0x0005F0)
class UK26AbilitySubAnimInstance : public UBaseKillerAnimInstance
{ 
public:
	float                                              _fireInteractionCooldownTime;                               // 0x0558   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x055C   (0x0004)  MISSED
	FTunableStat                                       _fireInteractionCooldownTimeTunable;                        // 0x0560   (0x0080)  
	bool                                               _hasChargingStarted;                                        // 0x05E0   (0x0001)  
	bool                                               _hasProjectileBeenSummoned;                                 // 0x05E1   (0x0001)  
	bool                                               _hasChargingEnded;                                          // 0x05E2   (0x0001)  
	bool                                               _hasProjectileFired;                                        // 0x05E3   (0x0001)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x05E4   (0x000C)  MISSED


	/// Functions
	// Function /Script/TheK26.K26AbilitySubAnimInstance.OnHasProjectileFired
	// void OnHasProjectileFired();                                                                                          // [0x5ba64a0] Final|Native|Public  
	// Function /Script/TheK26.K26AbilitySubAnimInstance.OnHasProjectileBeenSummoned
	// void OnHasProjectileBeenSummoned(int32_t remainingAmmo, int32_t maxAmmo);                                             // [0x5ba63d0] Final|Native|Public  
	// Function /Script/TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileFired
	// void ConsumeHasProjectileFired();                                                                                     // [0x5ba5d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileBeenSummoned
	// void ConsumeHasProjectileBeenSummoned();                                                                              // [0x5ba5d60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK26.K26AimingGuide
/// Size: 0x0000 (0x000230 - 0x000230)
class AK26AimingGuide : public AActor
{ 
public:
};

/// Class /Script/TheK26.K26AmmoHandlerComponent
/// Size: 0x0398 (0x0000B8 - 0x000450)
class UK26AmmoHandlerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	SDK_UNDEFINED(16,4197) /* FMulticastInlineDelegate */ __um(OnCurrentAmmoStateChanged);                         // 0x00C8   (0x0010)  
	FTagStateBool                                      _isAmmoOnCooldown;                                          // 0x00D8   (0x0030)  
	SDK_UNDEFINED(16,4198) /* FMulticastInlineDelegate */ __um(_onMaxAmmoSet);                                     // 0x0108   (0x0010)  
	float                                              _rechargeEndTime;                                           // 0x0118   (0x0004)  
	bool                                               _isTunableInit;                                             // 0x011C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	class UClass*                                      _projectileClass;                                           // 0x0120   (0x0008)  
	FTunableStat                                       _expirationCooldownTime;                                    // 0x0128   (0x0080)  
	TArray<FDBDTunableRowHandle>                       _firedCooldownTimesPerCrow;                                 // 0x01A8   (0x0010)  
	FTunableStat                                       _cooldownReductionPerCrowFired;                             // 0x01B8   (0x0080)  
	FTunableStat                                       _expirationTime;                                            // 0x0238   (0x0080)  
	FDBDTunableRowHandle                               _expirationWarningBufferTime;                               // 0x02B8   (0x0028)  
	FTunableStat                                       _maxAmmo;                                                   // 0x02E0   (0x0080)  
	int32_t                                            _currentAmmo;                                               // 0x0360   (0x0004)  
	EK26AmmoCooldownReason                             _lastCooldownReason;                                        // 0x0364   (0x0001)  
	EK26AmmoState                                      _currentAmmoState;                                          // 0x0365   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0366   (0x0002)  MISSED
	class UK26PathHandlerComponent*                    _pathHandler;                                               // 0x0368   (0x0008)  
	class UK26PowerStatusHandlerComponent*             _statusHandler;                                             // 0x0370   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _authoritativeActorPoolComponent;                           // 0x0378   (0x0008)  
	FTagStateBool                                      _isOutOfAmmo;                                               // 0x0380   (0x0030)  
	float                                              _fallbackFireCooldown;                                      // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x9C];                                      // 0x03B4   (0x009C)  MISSED


	/// Functions
	// Function /Script/TheK26.K26AmmoHandlerComponent.SetDependencies
	// void SetDependencies(class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent); // [0x5ba6980] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26AmmoHandlerComponent.SendHasExpiredDelegate
	// void SendHasExpiredDelegate();                                                                                        // [0x5ba6890] Final|Native|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.OnMaxAmmoSetDelegate__DelegateSignature
	// void OnMaxAmmoSetDelegate__DelegateSignature(int32_t maxAmmo);                                                        // [0x61d2f50] Public|Delegate      
	// Function /Script/TheK26.K26AmmoHandlerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5ba6780] Final|Native|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5ba6640] Final|Native|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Multicast_StartRecharging
	// void Multicast_StartRecharging(EK26AmmoCooldownReason lastCooldownReason);                                            // [0x581cdf0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Multicast_StartExpiring
	// void Multicast_StartExpiring();                                                                                       // [0x4dd4880] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Multicast_OnCurrentAmmoStateChanged
	// void Multicast_OnCurrentAmmoStateChanged(EK26AmmoState NewState, int32_t currentAmmo, int32_t maxAmmo);               // [0x5ba6110] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoHasBeenFired
	// void Multicast_OnAmmoHasBeenFired();                                                                                  // [0x4d82970] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoExpired
	// void Multicast_OnAmmoExpired();                                                                                       // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.GetMaxAmmo
	// int32_t GetMaxAmmo();                                                                                                 // [0x5ba5e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26AmmoHandlerComponent.GetCurrentCooldownReason
	// EK26AmmoCooldownReason GetCurrentCooldownReason();                                                                    // [0x5ba5e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26AmmoHandlerComponent.GetCurrentAmmoState
	// EK26AmmoState GetCurrentAmmoState();                                                                                  // [0x5ba5dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26AmmoHandlerComponent.GetCurrentAmmo
	// int32_t GetCurrentAmmo();                                                                                             // [0x5ba5da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Cosmetic_OnExpiringWarning
	// void Cosmetic_OnExpiringWarning();                                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoHasBeenFired
	// void Cosmetic_OnAmmoHasBeenFired();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoExpired
	// void Cosmetic_OnAmmoExpired();                                                                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AmmoHandlerComponent.CallOnMaxAmmoSet
	// void CallOnMaxAmmoSet(FDelegateProperty Callback);                                                                    // [0x5ba5c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Authority_OnAmmoInit
	// void Authority_OnAmmoInit(class AActor* initAmmo);                                                                    // [0x5ba4cc0] Final|Native|Private 
	// Function /Script/TheK26.K26AmmoHandlerComponent.Authority_InitializePoolComponent
	// void Authority_InitializePoolComponent(int32_t maxAmmo);                                                              // [0x5ba4c30] Final|Native|Private 
};

/// Class /Script/TheK26.K26AnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UK26AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isUsingPower;                                              // 0x0610   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0611   (0x000F)  MISSED
};

/// Struct /Script/TheK26.K26AttachmentStatus
/// Size: 0x0002 (0x000000 - 0x000002)
struct FK26AttachmentStatus
{ 
	FK26AttachedCrowRemovalReason                      LastRemovalReason;                                          // 0x0000   (0x0001)  
	bool                                               IsAttached;                                                 // 0x0001   (0x0001)  
};

/// Class /Script/TheK26.K26AttachedCrow
/// Size: 0x01C0 (0x000230 - 0x0003F0)
class AK26AttachedCrow : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0230   (0x0040)  MISSED
	FTunableStat                                       _lingerTime;                                                // 0x0270   (0x0080)  
	FDBDTunableRowHandle                               _infectionDelay;                                            // 0x02F0   (0x0028)  
	FDBDTunableRowHandle                               _infectRadius;                                              // 0x0318   (0x0028)  
	class UK26PowerOutlineUpdateStrategy*              _outlineUpdateStrategy;                                     // 0x0340   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0348   (0x0008)  
	class UStaticMeshComponent*                        _visualStaticMeshComponent;                                 // 0x0350   (0x0008)  
	class USceneComponent*                             _rootComponent;                                             // 0x0358   (0x0008)  
	class UK26PowerStatusHandlerComponent*             _statusHandler;                                             // 0x0360   (0x0008)  
	bool                                               _authority_isInfecting;                                     // 0x0368   (0x0001)  
	FK26AttachmentStatus                               _attachmentStatus;                                          // 0x0369   (0x0002)  
	unsigned char                                      UnknownData01_6[0x85];                                      // 0x036B   (0x0085)  MISSED


	/// Functions
	// Function /Script/TheK26.K26AttachedCrow.OnRep_AttachmentStatus
	// void OnRep_AttachmentStatus();                                                                                        // [0x5ba67a0] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Multicast_OnStopDetaching
	// void Multicast_OnStopDetaching();                                                                                     // [0x57ff130] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26AttachedCrow.Multicast_OnStartDetaching
	// void Multicast_OnStartDetaching();                                                                                    // [0x5ba6220] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26AttachedCrow.HideOutline
	// void HideOutline();                                                                                                   // [0x5ba5e90] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Cosmetic_OnStopDetaching
	// void Cosmetic_OnStopDetaching();                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AttachedCrow.Cosmetic_OnStartDetaching
	// void Cosmetic_OnStartDetaching();                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AttachedCrow.Cosmetic_OnCrowAttached
	// void Cosmetic_OnCrowAttached();                                                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AttachedCrow.Cosmetic_OnAuraShown
	// void Cosmetic_OnAuraShown();                                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AttachedCrow.Cosmetic_OnAuraHidden
	// void Cosmetic_OnAuraHidden();                                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AttachedCrow.Cosmetic_OnAttachedCrowRemoved
	// void Cosmetic_OnAttachedCrowRemoved(FK26AttachedCrowRemovalReason removalReason);                                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnSurvivorWasUnhooked
	// void Authority_OnSurvivorWasUnhooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                      // [0x5ba5a40] Final|Native|Private|HasOutParms 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnSurvivorStatusIndicatorSet
	// void Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* Survivor, class AK26AttachedCrow* attachedCrow);     // [0x5ba5b50] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnSurvivorExitLocker
	// void Authority_OnSurvivorExitLocker(FGameplayTag gameEventType, FGameEventData& GameEventData);                       // [0x5ba5a40] Final|Native|Private|HasOutParms 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnSurvivorDroppedEnd
	// void Authority_OnSurvivorDroppedEnd();                                                                                // [0x5ba53f0] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnSurvivorAdded
	// void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);                                                        // [0x5ba59b0] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnPlayerLeftGame
	// void Authority_OnPlayerLeftGame(FGameplayTag gameEventType, FGameEventData& GameEventData);                           // [0x5ba5500] Final|Native|Private|HasOutParms 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnOtherSurvivorPerkFlagsChanged
	// void Authority_OnOtherSurvivorPerkFlagsChanged(FGameplayTag GameplayTag, bool isAdded);                               // [0x5ba5410] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnOtherSurvivorGuidedActionChanged
	// void Authority_OnOtherSurvivorGuidedActionChanged();                                                                  // [0x5ba53f0] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnOtherSurvivorDamageStateChanged
	// void Authority_OnOtherSurvivorDamageStateChanged(ECamperDamageState before, ECamperDamageState after);                // [0x5ba5320] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnOtherAttachedCrowRemoved
	// void Authority_OnOtherAttachedCrowRemoved();                                                                          // [0x5ba5300] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnKillerSet
	// void Authority_OnKillerSet(class ASlasherPlayer* killer);                                                             // [0x5ba5270] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_OnIsWithinOtherSurvivorRangeChanged
	// void Authority_OnIsWithinOtherSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange);                      // [0x5ba51a0] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_DeactivateInfection
	// void Authority_DeactivateInfection();                                                                                 // [0x5ba4c10] Final|Native|Private 
	// Function /Script/TheK26.K26AttachedCrow.Authority_ActivateInfection
	// void Authority_ActivateInfection();                                                                                   // [0x5ba4bf0] Final|Native|Private 
};

/// Class /Script/TheK26.K26CooldownInteractionDefinition
/// Size: 0x0080 (0x000650 - 0x0006D0)
class UK26CooldownInteractionDefinition : public UInteractionDefinition
{ 
public:
	FTunableStat                                       _cooldownTime;                                              // 0x0648   (0x0080)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x06C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK26.K26CooldownInteractionDefinition.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5ba66d0] Final|Native|Protected 
};

/// Class /Script/TheK26.K26CrowAttachmentSubAnimInstance
/// Size: 0x0010 (0x000550 - 0x000560)
class UK26CrowAttachmentSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _hasCrowAttached;                                           // 0x0550   (0x0001)  
	bool                                               _isRemovingCrow;                                            // 0x0551   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0552   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0553   (0x0001)  
	bool                                               _isDead;                                                    // 0x0554   (0x0001)  
	bool                                               _isHooked;                                                  // 0x0555   (0x0001)  
	bool                                               _isInsideCloset;                                            // 0x0556   (0x0001)  
	bool                                               _isInteracting;                                             // 0x0557   (0x0001)  
	bool                                               _isHoldingSmallItem;                                        // 0x0558   (0x0001)  
	bool                                               _isUsingAimItem;                                            // 0x0559   (0x0001)  
	bool                                               _isCrouched;                                                // 0x055A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x055B   (0x0005)  MISSED
};

/// Class /Script/TheK26.K26CrowPlacementValidatorComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UK26CrowPlacementValidatorComponent : public UActorComponent
{ 
public:
	class UObjectPlacementValidationWithRestrictionStrategy* _objectPlacementValidationStrategyWithRestrictions;   // 0x00B8   (0x0008)  
};

/// Class /Script/TheK26.K26CrowProjectile
/// Size: 0x04D8 (0x000230 - 0x000708)
class AK26CrowProjectile : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0230   (0x0010)  MISSED
	SDK_UNDEFINED(16,4199) /* FMulticastInlineDelegate */ __um(OnCrowProjectileStateChanged);                      // 0x0240   (0x0010)  
	FVector                                            _originalFireLocation;                                      // 0x0250   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x025C   (0x0004)  MISSED
	SDK_UNDEFINED(80,4200) /* TMap<EK26ProjectileState, FK26ProjectileStateDetails> */ __um(_projectileStateDetails); // 0x0260   (0x0050)  
	FDBDTunableRowHandle                               _summonTime;                                                // 0x02B0   (0x0028)  
	FTunableStat                                       _detectionRadiusScaleX;                                     // 0x02D8   (0x0080)  
	FTunableStat                                       _detectionRadiusScaleY;                                     // 0x0358   (0x0080)  
	FTunableStat                                       _detectionRadiusScaleZ;                                     // 0x03D8   (0x0080)  
	FDBDTunableRowHandle                               _crowFireAuraVisibilityForSurvivorsTime;                    // 0x0458   (0x0028)  
	FDBDTunableRowHandle                               _crowSummonAuraVisibilityForSurvivorsTime;                  // 0x0480   (0x0028)  
	FDBDTunableRowHandle                               _detectionRadiusFromAbove;                                  // 0x04A8   (0x0028)  
	FDBDTunableRowHandle                               _baseSpeed;                                                 // 0x04D0   (0x0028)  
	FDBDTunableRowHandle                               _selfDestructTimeOnDestroyed;                               // 0x04F8   (0x0028)  
	FDBDTunableRowHandle                               _rangeToTriggerNearSurvivorSFX;                             // 0x0520   (0x0028)  
	class UCurveFloat*                                 _onPathMovementSpeedModifierCurve;                          // 0x0548   (0x0008)  
	class UCurveFloat*                                 _offPathMovementSpeedModifierCurve;                         // 0x0550   (0x0008)  
	float                                              _projectileOffPathCurveDuration;                            // 0x0558   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x055C   (0x0004)  MISSED
	TArray<FVector>                                    _path;                                                      // 0x0560   (0x0010)  
	int32_t                                            _pooledPathIndex;                                           // 0x0570   (0x0004)  
	EK26ProjectileState                                _currentProjectileState;                                    // 0x0574   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0575   (0x0003)  MISSED
	class UK26PowerOutlineUpdateStrategy*              _outlineUpdateStrategy;                                     // 0x0578   (0x0008)  
	class UK26PowerOutlineUpdateStrategy*              _crowFlockOutlineUpdateStrategy;                            // 0x0580   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0588   (0x0008)  
	class USplineComponent*                            _pathSplineComponent;                                       // 0x0590   (0x0008)  
	class UStaticMeshComponent*                        _collisionStaticMeshComponent;                              // 0x0598   (0x0008)  
	class UStaticMeshComponent*                        _killerInstinctStaticMeshComponent;                         // 0x05A0   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _visualSkeletalMeshComponent;                               // 0x05A8   (0x0008)  
	class USceneComponent*                             _rootComponent;                                             // 0x05B0   (0x0008)  
	class UDBDNavModifierComponent*                    _dangerNavModifierComponent;                                // 0x05B8   (0x0008)  
	SDK_UNDEFINED(16,4201) /* FMulticastInlineDelegate */ __um(_k26ProjectileStateChangeDelegate);                 // 0x05C0   (0x0010)  
	SDK_UNDEFINED(16,4202) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x05D0   (0x0010)  
	unsigned char                                      UnknownData04_5[0x10];                                      // 0x05E0   (0x0010)  MISSED
	TArray<class ALocker*>                             _lockersWithSurvivorsInitiallyOnKillerInstinctRadius;       // 0x05F0   (0x0010)  
	FVector                                            _forwardDirection;                                          // 0x0600   (0x000C)  
	float                                              _fireTime;                                                  // 0x060C   (0x0004)  
	float                                              _currentDistanceAlongSpline;                                // 0x0610   (0x0004)  
	float                                              _offPathTime;                                               // 0x0614   (0x0004)  
	class UK26PowerStatusHandlerComponent*             _statusHandlerComponent;                                    // 0x0618   (0x0008)  
	class UK26AmmoHandlerComponent*                    _ammoHandlerComponent;                                      // 0x0620   (0x0008)  
	class UK26PathHandlerComponent*                    _pathHandlerComponent;                                      // 0x0628   (0x0008)  
	unsigned char                                      UnknownData05_6[0xD8];                                      // 0x0630   (0x00D8)  MISSED


	/// Functions
	// Function /Script/TheK26.K26CrowProjectile.Server_OnSurvivorHit
	// void Server_OnSurvivorHit(EK26ProjectileState stateOnHit, class ACamperPlayer* hitSurvivor);                          // [0x5ba68b0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK26.K26CrowProjectile.ProjectileWentOutOfBoundsEvent
	// void ProjectileWentOutOfBoundsEvent();                                                                                // [0x5ba6870] Native|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26CrowProjectile.OnSurvivorAdded
	// void OnSurvivorAdded(class ACamperPlayer* survivorAdded);                                                             // [0x5ba67e0] Final|Native|Protected 
	// Function /Script/TheK26.K26CrowProjectile.OnRep_Path
	// void OnRep_Path();                                                                                                    // [0x5ba67c0] Final|Native|Private 
	// Function /Script/TheK26.K26CrowProjectile.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5ba6760] Final|Native|Protected 
	// Function /Script/TheK26.K26CrowProjectile.OnIsWithinSurvivorRangeChanged
	// void OnIsWithinSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange);                                     // [0x5ba64e0] Final|Native|Protected 
	// Function /Script/TheK26.K26CrowProjectile.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5ba64c0] Final|Native|Protected 
	// Function /Script/TheK26.K26CrowProjectile.Multicast_SetState
	// void Multicast_SetState(EK26ProjectileState NewState, int32_t pooledPathIndex);                                       // [0x5ba6300] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26CrowProjectile.Multicast_SetStartingPosition
	// void Multicast_SetStartingPosition(FVector position, FRotator Angle);                                                 // [0x5ba6240] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK26.K26CrowProjectile.Multicast_OnExpiration
	// void Multicast_OnExpiration();                                                                                        // [0x592b820] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26CrowProjectile.Local_OnSummonComplete
	// void Local_OnSummonComplete();                                                                                        // [0x5ba60f0] Final|Native|Private 
	// Function /Script/TheK26.K26CrowProjectile.Local_OnCollisionOverlapBegin
	// void Local_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, FHitResult& SweepResult); // [0x5ba5ed0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK26.K26CrowProjectile.IsHitboxBeingShown
	// bool IsHitboxBeingShown();                                                                                            // [0x44525f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26CrowProjectile.HideOutlineFromSurvivor
	// void HideOutlineFromSurvivor();                                                                                       // [0x5ba5eb0] Final|Native|Private 
	// Function /Script/TheK26.K26CrowProjectile.GetDistanceFromFirePosition
	// float GetDistanceFromFirePosition();                                                                                  // [0x5ba5e30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26CrowProjectile.Cosmetic_OnExpiration
	// void Cosmetic_OnExpiration();                                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26CrowProjectile.Cosmetic_OnEnteredNearAudioRangeOfSurvivor
	// void Cosmetic_OnEnteredNearAudioRangeOfSurvivor(class ACamperPlayer* Survivor);                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26CrowProjectile.Client_LocalKillerStartSummonTimer
	// void Client_LocalKillerStartSummonTimer(float killerLocalSummonTime);                                                 // [0x5ba5cd0] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/TheK26.K26CrowProjectile.Authority_OnSummonComplete
	// void Authority_OnSummonComplete();                                                                                    // [0x5ba5990] Final|Native|Private 
	// Function /Script/TheK26.K26CrowProjectile.Authority_OnScoutingOverlapEnd
	// void Authority_OnScoutingOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5ba5830] Final|Native|Private 
	// Function /Script/TheK26.K26CrowProjectile.Authority_OnScoutingOverlapBegin
	// void Authority_OnScoutingOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, FHitResult& SweepResult); // [0x5ba5610] Final|Native|Private|HasOutParms 
	// Function /Script/TheK26.K26CrowProjectile.Authority_OnDestroyTimerExpired
	// void Authority_OnDestroyTimerExpired();                                                                               // [0x5ba5180] Final|Native|Private 
	// Function /Script/TheK26.K26CrowProjectile.Authority_OnDestroyAttempt
	// void Authority_OnDestroyAttempt(TArray<AActor*>& instigatorsForCompletion);                                           // [0x5ba50d0] Final|Native|Private|HasOutParms 
	// Function /Script/TheK26.K26CrowProjectile.Authority_OnCollisionOverlapEnd
	// void Authority_OnCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5ba4f70] Final|Native|Private 
	// Function /Script/TheK26.K26CrowProjectile.Authority_OnCollisionOverlapBegin
	// void Authority_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, FHitResult& SweepResult); // [0x5ba4d50] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK26.K26CrowProjectileAnimInstance
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UK26CrowProjectileAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isInInvalidState;                                          // 0x02C0   (0x0001)  
	bool                                               _isInSummonState;                                           // 0x02C1   (0x0001)  
	bool                                               _isInIdleState;                                             // 0x02C2   (0x0001)  
	bool                                               _isInFollowPathState;                                       // 0x02C3   (0x0001)  
	bool                                               _isInOffPathState;                                          // 0x02C4   (0x0001)  
	bool                                               _isInDestroyedState;                                        // 0x02C5   (0x0001)  
	bool                                               _isBeingFlashlighted;                                       // 0x02C6   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02C7   (0x0001)  MISSED
	float                                              _flashlightProgress;                                        // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x24];                                      // 0x02CC   (0x0024)  MISSED
	class AK26CrowProjectile*                          _owningCrowProjectile;                                      // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02F8   (0x0008)  MISSED
};

/// Class /Script/TheK26.K26CrowProjectilePlacementValidationStrategy
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UK26CrowProjectilePlacementValidationStrategy : public URestrictedPlacementAreaStrategy
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00A0   (0x0018)  MISSED
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                               // 0x00B8   (0x0008)  
};

/// Class /Script/TheK26.K26DismissCrowChargeableInteractionDefinition
/// Size: 0x00A0 (0x000790 - 0x000830)
class UK26DismissCrowChargeableInteractionDefinition : public UChargeableInteractionDefinition
{ 
public:
	FTunableStat                                       _chargeTime;                                                // 0x0790   (0x0080)  
	class UK26PowerStatusHandlerComponent*             _k26PowerStatusHandlerComponent;                            // 0x0810   (0x0008)  
	bool                                               _isLevelReadyToPlay;                                        // 0x0818   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0819   (0x0017)  MISSED


	/// Functions
	// Function /Script/TheK26.K26DismissCrowChargeableInteractionDefinition.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5baa6d0] Final|Native|Protected 
	// Function /Script/TheK26.K26DismissCrowChargeableInteractionDefinition.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer, class UChargeableComponent* ChargeableComponent);                      // [0x5baa580] Final|Native|Private 
	// Function /Script/TheK26.K26DismissCrowChargeableInteractionDefinition.OnDamageStateChanged
	// void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);                  // [0x5baa490] Final|Native|Protected 
};

/// Class /Script/TheK26.K26FireCrowProjectileInteractionDefinition
/// Size: 0x0020 (0x000650 - 0x000670)
class UK26FireCrowProjectileInteractionDefinition : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,4203) /* FMulticastInlineDelegate */ __um(OnProjectileFired);                                 // 0x0648   (0x0010)  
	class UK26CooldownInteractionDefinition*           _cooldownInteraction;                                       // 0x0658   (0x0008)  
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                               // 0x0660   (0x0008)  
	class UK26PathHandlerComponent*                    _pathHandler;                                               // 0x0668   (0x0008)  


	/// Functions
	// Function /Script/TheK26.K26FireCrowProjectileInteractionDefinition.SetDependencies
	// void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26CooldownInteractionDefinition* cooldownInteraction); // [0x5baa7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26FireCrowProjectileInteractionDefinition.Server_RequestFireOnAmmo
	// void Server_RequestFireOnAmmo(class ASlasherPlayer* killer);                                                          // [0x59e2080] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK26.K26FireCrowProjectileInteractionDefinition.Multicast_OnProjectileFired
	// void Multicast_OnProjectileFired(class ASlasherPlayer* killer);                                                       // [0x5092240] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK26.K26IsLastCrowRemovalReasonDueToInteraction
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UK26IsLastCrowRemovalReasonDueToInteraction : public UEventDrivenModifierCondition
{ 
public:
	class AK26AttachedCrow*                            _owningAttachedCrow;                                        // 0x00F0   (0x0008)  
	class UK26PowerStatusHandlerComponent*             _statusHandlerComponent;                                    // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0100   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnSurvivorStatusIndicatorSet
	// void OnSurvivorStatusIndicatorSet(class AK26AttachedCrow* attachedCrow);                                              // [0x5baa750] Final|Native|Private 
	// Function /Script/TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnRep_OwningAttachedCrow
	// void OnRep_OwningAttachedCrow();                                                                                      // [0x5baa730] Final|Native|Private 
	// Function /Script/TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnLastRemovalReasonSet
	// void OnLastRemovalReasonSet(FK26AttachedCrowRemovalReason lastCrowRemovalReason);                                     // [0x5baa650] Final|Native|Private 
	// Function /Script/TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnSurvivorStatusIndicatorSet
	// void Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* Survivor, class AK26AttachedCrow* attachedCrow);     // [0x5baa110] Final|Native|Private 
	// Function /Script/TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnKillerSet
	// void Authority_OnKillerSet(class ASlasherPlayer* killer);                                                             // [0x5ba9e20] Final|Native|Private 
};

/// Class /Script/TheK26.K26IsSurvivorInRangeOfAnyIdleCrow
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UK26IsSurvivorInRangeOfAnyIdleCrow : public UEventDrivenModifierCondition
{ 
public:
	SDK_UNDEFINED(16,4204) /* FMulticastInlineDelegate */ __um(OnIsTrueChanged);                                   // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0100   (0x0008)  MISSED
	class ACamperPlayer*                               _trackedSurvivor;                                           // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0110   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Multicast_SetIsTrue
	// void Multicast_SetIsTrue(bool IsTrue);                                                                                // [0x5baa400] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_SetVariables
	// void Authority_SetVariables(class ACamperPlayer* trackedSurvivor, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent, float Range); // [0x5baa1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5ba9c50] Final|Native|Private 
	// Function /Script/TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowProjectileStateChanged
	// void Authority_OnCrowProjectileStateChanged(class AK26CrowProjectile* crowProjectile);                                // [0x5ba9bc0] Final|Native|Private 
	// Function /Script/TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowAddedToPool
	// void Authority_OnCrowAddedToPool(class AActor* crowProjectileActor);                                                  // [0x5ba9b30] Final|Native|Private 
};

/// Class /Script/TheK26.K26KillerInstinctStatusEffect
/// Size: 0x0090 (0x000350 - 0x0003E0)
class UK26KillerInstinctStatusEffect : public UStatusEffect
{ 
public:
	FTunableStat                                       _lingerDuration;                                            // 0x0350   (0x0080)  
	class UClass*                                      _openExitGateInteractionClass;                              // 0x03D0   (0x0008)  
	bool                                               _hasInitializedLingerDuration;                              // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x03D9   (0x0007)  MISSED
};

/// Class /Script/TheK26.K26OnCrowAttachLingeringStatusEffectBase
/// Size: 0x0060 (0x000350 - 0x0003B0)
class UK26OnCrowAttachLingeringStatusEffectBase : public UStatusEffect
{ 
public:
	FGameplayTag                                       _onCrowAttachStateTag;                                      // 0x0350   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x035C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _lingerTime;                                                // 0x0360   (0x0028)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0388   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK26.K26OnCrowAttachLingeringStatusEffectBase.GetLingerTime
	// float GetLingerTime();                                                                                                // [0x5baa300] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK26.K26P01
/// Size: 0x0098 (0x0003C8 - 0x000460)
class UK26P01 : public UPerk
{ 
public:
	float                                              _generatorBlockDuration;                                    // 0x03C8   (0x000C)  
	float                                              _hookedRange;                                               // 0x03D4   (0x000C)  
	float                                              _auraRevealDuration;                                        // 0x03E0   (0x0004)  
	float                                              _finalGeneratorBlockDuration;                               // 0x03E4   (0x0004)  
	FLinearColor                                       _generatorAuraColorForKiller;                               // 0x03E8   (0x0010)  
	int32_t                                            _survivorsToBeHooked;                                       // 0x03F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03FC   (0x0004)  MISSED
	class UClass*                                      _timedRevealToKillerClass;                                  // 0x0400   (0x0008)  
	TArray<class AGenerator*>                          _blockedGenerators;                                         // 0x0408   (0x0010)  
	TArray<class AActor*>                              _hookedSurvivors;                                           // 0x0418   (0x0010)  
	class UStatusEffect*                               _timedRevealToKillerEffect;                                 // 0x0428   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0430   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheK26.K26P01.OnRep_BlockedGenerators
	// void OnRep_BlockedGenerators();                                                                                       // [0x5baa710] Final|Native|Private 
	// Function /Script/TheK26.K26P01.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5ba9ce0] Final|Native|Private 
};

/// Class /Script/TheK26.K26P02
/// Size: 0x0070 (0x0003C8 - 0x000438)
class UK26P02 : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	float                                              _generatorRegressPercentage;                                // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	SDK_UNDEFINED(80,4205) /* TSet<ACamperPlayer*> */  __um(_hookedPlayers);                                       // 0x03E0   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0430   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK26.K26P02.GetGeneratorRegressPercentageAtLevel
	// float GetGeneratorRegressPercentageAtLevel();                                                                         // [0x4fe8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26P02.Authority_OnSurvivorHookedOnScourgeHook
	// void Authority_OnSurvivorHookedOnScourgeHook(FGameEventData& GameEventData);                                          // [0x5ba9fd0] Final|Native|Private|HasOutParms 
};

/// Struct /Script/TheK26.K26PathData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FK26PathData
{ 
	bool                                               IsInUse;                                                    // 0x0000   (0x0001)  
	bool                                               IsVisibleToKiller;                                          // 0x0001   (0x0001)  
	bool                                               IsVisibleForSurvivors;                                      // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            MaxVisibleIndex;                                            // 0x0004   (0x0004)  
	TArray<FVector>                                    PathPartLocations;                                          // 0x0008   (0x0010)  
	TArray<FRotator>                                   PathPartRotations;                                          // 0x0018   (0x0010)  
	FVector                                            PathEndLocation;                                            // 0x0028   (0x000C)  
	FRotator                                           PathEndRotation;                                            // 0x0034   (0x000C)  
};

/// Struct /Script/TheK26.K26Path
/// Size: 0x0018 (0x000000 - 0x000018)
struct FK26Path
{ 
	class AK26PathPart*                                PathEndArrow;                                               // 0x0000   (0x0008)  
	TArray<class AK26PathPart*>                        PathParts;                                                  // 0x0008   (0x0010)  
};

/// Class /Script/TheK26.K26PathHandlerComponent
/// Size: 0x0178 (0x0000B8 - 0x000230)
class UK26PathHandlerComponent : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _maxPathDistance;                                           // 0x00B8   (0x0028)  
	FDBDTunableRowHandle                               _survivorPathVisibilityTimeOnFire;                          // 0x00E0   (0x0028)  
	FDBDTunableRowHandle                               _defaultProjectileDistanceFromFloor;                        // 0x0108   (0x0028)  
	FDBDTunableRowHandle                               _maxPathIterations;                                         // 0x0130   (0x0028)  
	FDBDTunableRowHandle                               _maxGroundSearchingDistance;                                // 0x0158   (0x0028)  
	class UClass*                                      _visualPathPart;                                            // 0x0180   (0x0008)  
	class UClass*                                      _visualPathEndArrow;                                        // 0x0188   (0x0008)  
	FDBDTunableRowHandle                               _projectileSummonDistance;                                  // 0x0190   (0x0028)  
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                               // 0x01B8   (0x0008)  
	class UK26CrowPlacementValidatorComponent*         _placementValidator;                                        // 0x01C0   (0x0008)  
	TArray<FK26PathData>                               _availablePathData;                                         // 0x01C8   (0x0010)  
	TArray<FK26Path>                                   _availablePaths;                                            // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x01E8   (0x0048)  MISSED


	/// Functions
	// Function /Script/TheK26.K26PathHandlerComponent.SetDependencies
	// void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26CrowPlacementValidatorComponent* placementValidator); // [0x5baa8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26PathHandlerComponent.OnRep_AvailablePathData
	// void OnRep_AvailablePathData();                                                                                       // [0x5baa6f0] Final|Native|Private 
	// Function /Script/TheK26.K26PathHandlerComponent.OnIterativeAvailablePathUpdate
	// void OnIterativeAvailablePathUpdate();                                                                                // [0x5baa560] Final|Native|Private 
	// Function /Script/TheK26.K26PathHandlerComponent.Multicast_FillAvailablePathArray
	// void Multicast_FillAvailablePathArray(int32_t maxAmmo);                                                               // [0x5891be0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26PathHandlerComponent.Authority_OnMaxAmmoSet
	// void Authority_OnMaxAmmoSet(int32_t maxAmmo);                                                                         // [0x5ba9eb0] Final|Native|Private 
};

/// Class /Script/TheK26.K26PathPart
/// Size: 0x0038 (0x000230 - 0x000268)
class AK26PathPart : public AActor
{ 
public:
	class UStaticMeshComponent*                        _mesh;                                                      // 0x0230   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0238   (0x0008)  
	class UNiagaraComponent*                           _visualEffectKiller;                                        // 0x0240   (0x0008)  
	class UNiagaraComponent*                           _visualEffectSurvivor;                                      // 0x0248   (0x0008)  
	class UK26PowerOutlineUpdateStrategy*              _outlineUpdateStrategy;                                     // 0x0250   (0x0008)  
	class USceneComponent*                             _rootComponent;                                             // 0x0258   (0x0008)  
	bool                                               _isVisibleForSurvivor;                                      // 0x0260   (0x0001)  
	bool                                               _isVisibleForKiller;                                        // 0x0261   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0262   (0x0006)  MISSED
};

/// Class /Script/TheK26.K26PowerChargePresentationItemProgressComponent
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UK26PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                               // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/TheK26.K26PowerChargePresentationItemProgressComponent.SetDependencies
	// void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler);                                                    // [0x57eeff0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK26.K26PowerChargePresentationPowerFadeComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UK26PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{ 
public:
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                               // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/TheK26.K26PowerChargePresentationPowerFadeComponent.SetDependencies
	// void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler);                                                    // [0x57d4740] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK26.K26PowerOutlineUpdateStrategy
/// Size: 0x0018 (0x0000E0 - 0x0000F8)
class UK26PowerOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _k26ProjectileOutlineColour;                                // 0x00E0   (0x0010)  
	bool                                               _isOutlineEnabled;                                          // 0x00F0   (0x0001)  
	bool                                               _isOnlyVisibleForKiller;                                    // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00F2   (0x0006)  MISSED


	/// Functions
	// Function /Script/TheK26.K26PowerOutlineUpdateStrategy.SetOutlineVisibility
	// void SetOutlineVisibility(bool IsActive);                                                                             // [0x57afa20] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26PowerOutlineUpdateStrategy.IsOutlineVisible
	// bool IsOutlineVisible();                                                                                              // [0x4dc87d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TheK26.K26SurvivorStatus
/// Size: 0x0048 (0x000000 - 0x000048)
struct FK26SurvivorStatus
{ 
	bool                                               IsPowerAttached;                                            // 0x0000   (0x0001)  
	bool                                               IsAttachementAuraOn;                                        // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LastAttachmentTime;                                         // 0x0004   (0x0004)  
	float                                              LastDetachmentTime;                                         // 0x0008   (0x0004)  
	float                                              LastRemovalStarted;                                         // 0x000C   (0x0004)  
	float                                              LastRemovalStopped;                                         // 0x0010   (0x0004)  
	float                                              LastHitTime;                                                // 0x0014   (0x0004)  
	class AK26AttachedCrow*                            statusIndicator;                                            // 0x0018   (0x0008)  
	class ACamperPlayer*                               OwningSurvivor;                                             // 0x0020   (0x0008)  
	class UK26KillerInstinctStatusEffect*              K26KillerInstinctStatusEffect;                              // 0x0028   (0x0008)  
	TArray<class AActor*>                              IdleCrowsBeingTouched;                                      // 0x0030   (0x0010)  
	FTimerHandle                                       KillerInstinctTimeHandler;                                  // 0x0040   (0x0008)  
};

/// Class /Script/TheK26.K26PowerStatusHandlerComponent
/// Size: 0x00D0 (0x0000B8 - 0x000188)
class UK26PowerStatusHandlerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	TArray<class UClass*>                              _interactionsDuringWhichTheCrowIsIgnored;                   // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _invincibilityTime;                                         // 0x00F0   (0x0028)  
	FDBDTunableRowHandle                               _killerInstinctDelay;                                       // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _killerInstinctGracePeriod;                                 // 0x0140   (0x0028)  
	class UClass*                                      _statusIndicatorClass;                                      // 0x0168   (0x0008)  
	class UClass*                                      _k26KillerInstinctStatusEffectClass;                        // 0x0170   (0x0008)  
	TArray<FK26SurvivorStatus>                         _survivorStatusList;                                        // 0x0178   (0x0010)  


	/// Functions
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Multicast_OnStopRemovingCrow
	// void Multicast_OnStopRemovingCrow(class ACamperPlayer* Survivor);                                                     // [0x57e83c0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Multicast_OnStartRemovingCrow
	// void Multicast_OnStartRemovingCrow(class ACamperPlayer* Survivor);                                                    // [0x59e8a80] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Multicast_OnIdleCrowInterrupt
	// void Multicast_OnIdleCrowInterrupt(class ACamperPlayer* Survivor);                                                    // [0x58cbe00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDetached
	// void Multicast_OnCrowDetached(class ACamperPlayer* Survivor);                                                         // [0x58004b0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDamagedSurvivor
	// void Multicast_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* Survivor);                    // [0x5baa330] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowAttached
	// void Multicast_OnCrowAttached(class ACamperPlayer* Survivor);                                                         // [0x59c2dd0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowIdleInterrupt
	// void Cosmetic_OnCrowIdleInterrupt(class ACamperPlayer* Survivor);                                                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowDamagedSurvivor
	// void Cosmetic_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* Survivor);                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Authority_OnSurvivorRemoved
	// void Authority_OnSurvivorRemoved(class ACamperPlayer* Survivor);                                                      // [0x5baa080] Final|Native|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Authority_OnSurvivorAdded
	// void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);                                                        // [0x5ba9f40] Final|Native|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Authority_OnKillerInstinctTimePassed
	// void Authority_OnKillerInstinctTimePassed(class ACamperPlayer* Survivor);                                             // [0x5ba9d90] Final|Native|Private 
	// Function /Script/TheK26.K26PowerStatusHandlerComponent.Authority_OnIntroCompleted
	// void Authority_OnIntroCompleted();                                                                                    // [0x5ba9d70] Final|Native|Private 
};

/// Class /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition
/// Size: 0x0220 (0x000790 - 0x0009B0)
class UK26SpawnCrowProjectileChargeableInteractionDefinition : public UChargeableInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,4206) /* FMulticastInlineDelegate */ __um(OnChargingStarted);                                 // 0x0790   (0x0010)  
	SDK_UNDEFINED(16,4207) /* FMulticastInlineDelegate */ __um(OnChargingStopped);                                 // 0x07A0   (0x0010)  
	SDK_UNDEFINED(16,4208) /* FMulticastInlineDelegate */ __um(OnProjectileSummoned);                              // 0x07B0   (0x0010)  
	FDBDTunableRowHandle                               _chargeCooldownTime;                                        // 0x07C0   (0x0028)  
	FDBDTunableRowHandle                               _summonCooldownTime;                                        // 0x07E8   (0x0028)  
	FDBDTunableRowHandle                               _pathLength;                                                // 0x0810   (0x0028)  
	FDBDTunableRowHandle                               _projectileHeight;                                          // 0x0838   (0x0028)  
	FDBDTunableRowHandle                               _projectileSummonDistance;                                  // 0x0860   (0x0028)  
	FDBDTunableRowHandle                               _cooldownGracePeriodPercentage;                             // 0x0888   (0x0028)  
	FDBDTunableRowHandle                               _globalSpawnCooldownTime;                                   // 0x08B0   (0x0028)  
	FDBDTunableRowHandle                               _pathDistanceCheckAttempts;                                 // 0x08D8   (0x0028)  
	class UClass*                                      _aimingGuideClass;                                          // 0x0900   (0x0008)  
	class AK26AimingGuide*                             _local_aimingGuide;                                         // 0x0908   (0x0008)  
	bool                                               _isConfirmButtonPressed;                                    // 0x0910   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0911   (0x0007)  MISSED
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                               // 0x0918   (0x0008)  
	class UK26PathHandlerComponent*                    _pathHandler;                                               // 0x0920   (0x0008)  
	class UK26PowerStatusHandlerComponent*             _statusHandler;                                             // 0x0928   (0x0008)  
	bool                                               _firedFullyChargedEvent;                                    // 0x0930   (0x0001)  
	bool                                               _isWaitingForSummonAcknowledgement;                         // 0x0931   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0932   (0x0006)  MISSED
	class UCurveFloat*                                 _globalCooldownMovementSpeedCurve;                          // 0x0938   (0x0008)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x0940   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetSummonCooldown
	// void SetSummonCooldown();                                                                                             // [0x5babe20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetDependencies
	// void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler); // [0x5babd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Server_PlaceProjectileWithPath
	// void Server_PlaceProjectileWithPath(class ASlasherPlayer* killer, FVector projectileSpawnPoint, float killerLocalTime); // [0x5babbf0] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnSummonCooldownComplete
	// void OnSummonCooldownComplete();                                                                                      // [0x5babbd0] Final|Native|Private 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnConfirmButtonPressed
	// void OnConfirmButtonPressed(class ASlasherPlayer* killer);                                                            // [0x5baba70] Final|Native|Private 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummoned
	// void Multicast_OnK26CrowSummoned(class ASlasherPlayer* killer, int32_t remainingAmmo, int32_t maxAmmo);               // [0x5bab970] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummonAttemptAcknowledged
	// void Multicast_OnK26CrowSummonAttemptAcknowledged();                                                                  // [0x5bab950] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Local_OnGlobalCooldownDone
	// void Local_OnGlobalCooldownDone(class ADBDPlayer* Player);                                                            // [0x5bab8c0] Final|Native|Private 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.IsSummonOnCooldown
	// bool IsSummonOnCooldown();                                                                                            // [0x5bab890] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible
	// void Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible();                                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnFullyCharged
	// void Cosmetic_OnFullyCharged(class ADBDPlayer* Player);                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_LocalOnSummonCooldownComplete
	// void Cosmetic_LocalOnSummonCooldownComplete(int32_t amountOfAmmoLeft, bool isInteractionActive);                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrowOnceFullyCharged
	// bool CanSummonCrowOnceFullyCharged();                                                                                 // [0x5bab860] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrow
	// bool CanSummonCrow();                                                                                                 // [0x5bab830] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheK26.Overcome
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UOvercome : public UPerk
{ 
public:
	float                                              _exhaustionDuration;                                        // 0x03C8   (0x000C)  
	float                                              _injuredModifiedMovementSpeedBurstDurationWindow;           // 0x03D4   (0x0004)  
	class UClass*                                      _exhaustedEffectToImpose;                                   // 0x03D8   (0x0008)  
	class UClass*                                      _injuredModifiedMovementSpeedBurstStatusEffectToImpose;     // 0x03E0   (0x0008)  
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                           // 0x03E8   (0x0008)  
	class UStatusEffect*                               _injuredModifiedMovementSpeedBurstStatusEffect;             // 0x03F0   (0x0008)  


	/// Functions
	// Function /Script/TheK26.Overcome.GetExhaustionDurationAtLevel
	// float GetExhaustionDurationAtLevel();                                                                                 // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK26.RekindledTotem
/// Size: 0x0038 (0x000240 - 0x000278)
class ARekindledTotem : public AStaticMeshActor
{ 
public:
	FLinearColor                                       _auraColor;                                                 // 0x0240   (0x0010)  
	class USourceBasedOutlineUpdateStrategy*           _outlineStrategy;                                           // 0x0250   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0258   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0260   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheK26.RekindledTotem.RebuildTotem
	// void RebuildTotem(class ATotem* Totem);                                                                               // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.RekindledTotem.OnParentTotemEndPlay
	// void OnParentTotemEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                            // [0x5babb00] Final|Native|Private 
	// Function /Script/TheK26.RekindledTotem.Cosmetic_ShowShadowTotem
	// void Cosmetic_ShowShadowTotem(bool instant);                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.RekindledTotem.Cosmetic_HideShadowTotem
	// void Cosmetic_HideShadowTotem(bool instant);                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK26.RekindledTotem.CleanseTotem
	// void CleanseTotem(class ATotem* Totem, ETotemState oldTotemState);                                                    // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK26.RekindleTotemInteraction
/// Size: 0x0020 (0x000650 - 0x000670)
class URekindleTotemInteraction : public UInteractionDefinition
{ 
public:
	float                                              _slasherFacingTolerance;                                    // 0x0648   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x064C   (0x0004)  MISSED
	class UClass*                                      _rekindledTotemClass;                                       // 0x0650   (0x0008)  
	class ARekindledTotem*                             _rekindledTotem;                                            // 0x0658   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0660   (0x0010)  MISSED
};

/// Class /Script/TheK26.S29P03
/// Size: 0x0010 (0x000480 - 0x000490)
class US29P03 : public UBoonPerk
{ 
public:
	float                                              _recoverSpeedPercentage;                                    // 0x0480   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x048C   (0x0004)  MISSED
};

/// Struct /Script/TheK26.K26ProjectileStateDetails
/// Size: 0x0108 (0x000000 - 0x000108)
struct FK26ProjectileStateDetails
{ 
	FDBDTunableRowHandle                               VisualScaleX;                                               // 0x0000   (0x0028)  
	FDBDTunableRowHandle                               VisualScaleY;                                               // 0x0028   (0x0028)  
	FDBDTunableRowHandle                               VisualScaleZ;                                               // 0x0050   (0x0028)  
	FDBDTunableRowHandle                               HitboxScaleX;                                               // 0x0078   (0x0028)  
	FDBDTunableRowHandle                               HitboxScaleY;                                               // 0x00A0   (0x0028)  
	FDBDTunableRowHandle                               HitboxScaleZ;                                               // 0x00C8   (0x0028)  
	class UStaticMesh*                                 HitBoxStaticMesh;                                           // 0x00F0   (0x0008)  
	FLinearColor                                       DebugColor;                                                 // 0x00F8   (0x0010)  
};

/// Struct /Script/TheK26.ActorPairQueryCrowPair
/// Size: 0x0028 (0x000000 - 0x000028)
struct FActorPairQueryCrowPair
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	class AK26CrowProjectile*                          crowProjectile;                                             // 0x0020   (0x0008)  
};

