
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDAudio
/// dependency: DBDCompetence
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: Projectile
/// dependency: StatSystem

/// Enum /Script/TheGunslinger.EFireHarpoonRifleAimingInteractionSubState
/// Size: 0x05
enum class EFireHarpoonRifleAimingInteractionSubState : uint8_t
{
	EFireHarpoonRifleAimingInteractionSubState__None                                 = 0,
	EFireHarpoonRifleAimingInteractionSubState__Warmup                               = 1,
	EFireHarpoonRifleAimingInteractionSubState__ReadyToShoot                         = 2,
	EFireHarpoonRifleAimingInteractionSubState__Cooldown                             = 3,
	EFireHarpoonRifleAimingInteractionSubState__EFireHarpoonRifleAimingInteractionSubState_MAX = 4
};

/// Enum /Script/TheGunslinger.EFireHarpoonRifleInteractionState
/// Size: 0x08
enum class EFireHarpoonRifleInteractionState : uint8_t
{
	EFireHarpoonRifleInteractionState__None                                          = 0,
	EFireHarpoonRifleInteractionState__Aiming                                        = 1,
	EFireHarpoonRifleInteractionState__FirePhase                                     = 2,
	EFireHarpoonRifleInteractionState__MissPhase                                     = 3,
	EFireHarpoonRifleInteractionState__SuccessPhase                                  = 4,
	EFireHarpoonRifleInteractionState__EndResult                                     = 5,
	EFireHarpoonRifleInteractionState__CanceledAiming                                = 6,
	EFireHarpoonRifleInteractionState__EFireHarpoonRifleInteractionState_MAX         = 7
};

/// Enum /Script/TheGunslinger.ESkillCheckType
/// Size: 0x05
enum class ESkillCheckType : uint8_t
{
	ESkillCheckType__NONE                                                            = 0,
	ESkillCheckType__GOOD_SKILL_CHECK                                                = 1,
	ESkillCheckType__GREAT_SKILL_CHECK                                               = 2,
	ESkillCheckType__BOTH                                                            = 3,
	ESkillCheckType__ESkillCheckType_MAX                                             = 4
};

/// Enum /Script/TheGunslinger.EHarpoonPositionState
/// Size: 0x07
enum class EHarpoonPositionState : uint8_t
{
	EHarpoonPositionState__None                                                      = 0,
	EHarpoonPositionState__LoadedInRifle                                             = 1,
	EHarpoonPositionState__FollowingProjectile                                       = 2,
	EHarpoonPositionState__ReelBackToRifle                                           = 3,
	EHarpoonPositionState__AttachedToPlayer                                          = 4,
	EHarpoonPositionState__Animated                                                  = 5,
	EHarpoonPositionState__EHarpoonPositionState_MAX                                 = 6
};

/// Class /Script/TheGunslinger.ChainPlayerMovementStatusEffect
/// Size: 0x0058 (0x000350 - 0x0003A8)
class UChainPlayerMovementStatusEffect : public UStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _baseMovementSpeedMultiplier;                               // 0x0350   (0x0028)  
	FDBDTunableRowHandle                               _collisionMovementSpeedMultiplier;                          // 0x0378   (0x0028)  
	class ARifleChain*                                 _chain;                                                     // 0x03A0   (0x0008)  


	/// Functions
	// Function /Script/TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged
	// void OnIsChainCollidingChanged(bool IsColliding);                                                                     // [0x5aac480] Final|Native|Private 
};

/// Class /Script/TheGunslinger.ChainKillerMovementStatusEffect
/// Size: 0x0070 (0x0003A8 - 0x000418)
class UChainKillerMovementStatusEffect : public UChainPlayerMovementStatusEffect
{ 
public:
	FDBDTunableRowHandle                               _backwardMovementSpeedMultiplier;                           // 0x03A8   (0x0028)  
	FDBDTunableRowHandle                               _backwardMovementAngle;                                     // 0x03D0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x03F8   (0x0020)  MISSED
};

/// Class /Script/TheGunslinger.ChainLinkableComponent
/// Size: 0x00E0 (0x0000B8 - 0x000198)
class UChainLinkableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x00B8   (0x0020)  MISSED
	class UClass*                                      _cameraTargetingStrategyClass;                              // 0x00D8   (0x0008)  
	FName                                              _movementStatusEffectName;                                  // 0x00E0   (0x000C)  
	FName                                              _linkedStatusEffectName;                                    // 0x00EC   (0x000C)  
	class UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy;                              // 0x00F8   (0x0008)  
	class URiflePlayerLinker*                          _chainLink;                                                 // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0108   (0x0030)  MISSED
	FTagStateBool                                      _isLinkedLingering;                                         // 0x0138   (0x0030)  
	class UChainPlayerMovementStatusEffect*            _movementStatusEffect;                                      // 0x0168   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0170   (0x0008)  MISSED
	class UBaseCameraTargetingStrategy*                _cameraStrategy;                                            // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0180   (0x0018)  MISSED
};

/// Class /Script/TheGunslinger.DeadMansSwitch
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UDeadMansSwitch : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	float                                              _activationDurationByLevels;                                // 0x03D0   (0x000C)  
	bool                                               _anySurvivorLetGo;                                          // 0x03DC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03DD   (0x0003)  MISSED
	TArray<class AGenerator*>                          _blockedGenerators;                                         // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x03F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators
	// void OnRep_BlockedGenerators();                                                                                       // [0x5aac630] Final|Native|Private 
	// Function /Script/TheGunslinger.DeadMansSwitch.GetActivationDurationAtLevel
	// float GetActivationDurationAtLevel();                                                                                 // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheGunslinger.FireHarpoonRifleInteraction
/// Size: 0x0500 (0x000650 - 0x000B50)
class UFireHarpoonRifleInteraction : public UInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,5080) /* FMulticastInlineDelegate */ __um(OnFireHarpoon);                                     // 0x0648   (0x0010)  
	SDK_UNDEFINED(16,5081) /* FMulticastInlineDelegate */ __um(OnHitPlayer);                                       // 0x0658   (0x0010)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0668   (0x0001)  MISSED
	EFireHarpoonRifleAimingInteractionSubState         _aimingSubState;                                            // 0x0669   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x066A   (0x0006)  MISSED
	class AHarpoonProjectile*                          _harpoon;                                                   // 0x0670   (0x0008)  
	class ADBDPlayer*                                  _collector;                                                 // 0x0678   (0x0008)  
	FDBDTunableRowHandle                               _aimDownSightDuration;                                      // 0x0680   (0x0028)  
	FDBDTunableRowHandle                               _aimDownSightZoom;                                          // 0x06A8   (0x0028)  
	FDBDTunableRowHandle                               _aimDownSightMousePitchScaleMultiplier;                     // 0x06D0   (0x0028)  
	FDBDTunableRowHandle                               _aimDownSightMouseYawScaleMultiplier;                       // 0x06F8   (0x0028)  
	FDBDTunableRowHandle                               _aimDownSightGamepadPitchScaleMultiplier;                   // 0x0720   (0x0028)  
	FDBDTunableRowHandle                               _aimDownSightGamepadYawScaleMultiplier;                     // 0x0748   (0x0028)  
	class UCurveFloat*                                 _aimDownSightGamepadPitchCurve;                             // 0x0770   (0x0008)  
	class UCurveFloat*                                 _aimDownSightGamepadYawCurve;                               // 0x0778   (0x0008)  
	FDBDTunableRowHandle                               _aimDownSightRotationScaleAdjustmentTime;                   // 0x0780   (0x0028)  
	FTunableStat                                       _aimDownSightMovementSpeedMultiplier;                       // 0x07A8   (0x0080)  
	FDBDTunableRowHandle                               _fireDuration;                                              // 0x0828   (0x0028)  
	FDBDTunableRowHandle                               _fireRotationScaleMultiplier;                               // 0x0850   (0x0028)  
	FDBDTunableRowHandle                               _fireRotationScaleAdjustmentTime;                           // 0x0878   (0x0028)  
	FDBDTunableRowHandle                               _fireMovementSpeedMultiplier;                               // 0x08A0   (0x0028)  
	FDBDTunableRowHandle                               _longRangeShotMinDistance;                                  // 0x08C8   (0x0028)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x08F0   (0x0008)  MISSED
	FDBDTunableRowHandle                               _successMovementSpeedMultiplier;                            // 0x08F8   (0x0028)  
	FDBDTunableRowHandle                               _missMovementSpeedMultiplier;                               // 0x0920   (0x0028)  
	FTunableStat                                       _missShotCooldownDuration;                                  // 0x0948   (0x0080)  
	FDBDTunableRowHandle                               _nearMissShotMaxDistance;                                   // 0x09C8   (0x0028)  
	FDBDTunableRowHandle                               _successShotDuration;                                       // 0x09F0   (0x0028)  
	unsigned char                                      UnknownData03_6[0x138];                                     // 0x0A18   (0x0138)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.FireHarpoonRifleInteraction.Server_SetAimingSubstate
	// void Server_SetAimingSubstate(EFireHarpoonRifleAimingInteractionSubState NewState);                                   // [0x5aac750] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores
	// void Server_HandleMissShotScores(TArray<ADBDPlayer*> nearMissedPlayers);                                              // [0x5aac670] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature
	// void OnHitPlayer__DelegateSignature();                                                                                // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature
	// void OnFireHarpoon__DelegateSignature();                                                                              // [0x61c32d0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/TheGunslinger.ForThePeople
/// Size: 0x00C8 (0x0003C8 - 0x000490)
class UForThePeople : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x19];                                      // 0x03C8   (0x0019)  MISSED
	bool                                               _isHealStartedOnServer;                                     // 0x03E1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x03E2   (0x0002)  MISSED
	float                                              _brokenEffectDurations;                                     // 0x03E4   (0x000C)  
	class UClass*                                      _forThePeopleBrokenEffect;                                  // 0x03F0   (0x0008)  
	class UClass*                                      _forThePeopleObsessionEffect;                               // 0x03F8   (0x0008)  
	FSecondaryInteractionProperties                    _secondaryActionProperties;                                 // 0x0400   (0x0038)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0438   (0x0058)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.ForThePeople.Server_OnActionInputPressed
	// void Server_OnActionInputPressed();                                                                                   // [0x5aac730] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheGunslinger.ForThePeople.OnRep_SetIsHealStartedOnServer
	// void OnRep_SetIsHealStartedOnServer();                                                                                // [0x5aac650] Final|Native|Private|Const 
	// Function /Script/TheGunslinger.ForThePeople.OnHealingAbilityUsed
	// void OnHealingAbilityUsed(class ACamperPlayer* healingSurvivor, class ACamperPlayer* healedSurvivor);                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed
	// void Multicast_OnHealAbilityUsed(class ACamperPlayer* healer, class ACamperPlayer* healTarget, float amountHealed);   // [0x5aac2a0] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheGunslinger.ForThePeople.GetBrokenEffectDurationAtLevel
	// float GetBrokenEffectDurationAtLevel();                                                                               // [0x500a890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.ForThePeople.Client_OnActionInputPressedEnded
	// void Client_OnActionInputPressedEnded();                                                                              // [0x5905d40] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/TheGunslinger.Gearhead
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UGearhead : public UPerk
{ 
public:
	class UClass*                                      _timedRevealToKillerEffect;                                 // 0x03C8   (0x0008)  
	float                                              _surviorAuraDurations;                                      // 0x03D0   (0x000C)  
	float                                              _perkDuration;                                              // 0x03DC   (0x0004)  
	ESkillCheckType                                    _skillCheckType;                                            // 0x03E0   (0x0001)  
	bool                                               _basicAttack;                                               // 0x03E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x03E2   (0x0006)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.Gearhead.Authority_OnCamperRemoved
	// void Authority_OnCamperRemoved(class ACamperPlayer* removedPlayer);                                                   // [0x5aac130] Final|Native|Private 
	// Function /Script/TheGunslinger.Gearhead.Authority_OnCamperHealthStateChange
	// void Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);       // [0x5aac060] Final|Native|Private 
};

/// Class /Script/TheGunslinger.GunslingerAnimInstance
/// Size: 0x01E0 (0x000610 - 0x0007F0)
class UGunslingerAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isAiming;                                                  // 0x0610   (0x0001)  
	bool                                               _isAimingWarmup;                                            // 0x0611   (0x0001)  
	bool                                               _isAimingCooldown;                                          // 0x0612   (0x0001)  
	bool                                               _isAimingReadyToShoot;                                      // 0x0613   (0x0001)  
	bool                                               _isFiring;                                                  // 0x0614   (0x0001)  
	bool                                               _isInMissShotCooldown;                                      // 0x0615   (0x0001)  
	bool                                               _isInSuccessShot;                                           // 0x0616   (0x0001)  
	bool                                               _isLinked;                                                  // 0x0617   (0x0001)  
	bool                                               _isReeling;                                                 // 0x0618   (0x0001)  
	bool                                               _isInGunState;                                              // 0x0619   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x061A   (0x0002)  MISSED
	float                                              _idleToAimAnimPlayrate;                                     // 0x061C   (0x0004)  
	float                                              _aimToIdleAnimPlayrate;                                     // 0x0620   (0x0004)  
	float                                              _fireAnimPlayRate;                                          // 0x0624   (0x0004)  
	float                                              _missShotCooldownAnimPlayRate;                              // 0x0628   (0x0004)  
	float                                              _successShotAnimPlayRate;                                   // 0x062C   (0x0004)  
	class UAnimSequence*                               _idleToAimAnim;                                             // 0x0630   (0x0008)  
	class UAnimSequence*                               _aimToIdleAnim;                                             // 0x0638   (0x0008)  
	class UAnimSequence*                               _fireAnim;                                                  // 0x0640   (0x0008)  
	class UAnimSequence*                               _missShotCooldownAnim;                                      // 0x0648   (0x0008)  
	class UAnimSequence*                               _successShotAnim;                                           // 0x0650   (0x0008)  
	FDBDTunableRowHandle                               _idleToAimAnimDuration;                                     // 0x0658   (0x0028)  
	FDBDTunableRowHandle                               _aimToIdleAnimDuration;                                     // 0x0680   (0x0028)  
	FDBDTunableRowHandle                               _fireAnimDuration;                                          // 0x06A8   (0x0028)  
	FTunableStat                                       _missShotCooldownAnimDuration;                              // 0x06D0   (0x0080)  
	FDBDTunableRowHandle                               _successShotAnimDuration;                                   // 0x0750   (0x0028)  
	unsigned char                                      UnknownData01_6[0x78];                                      // 0x0778   (0x0078)  MISSED
};

/// Class /Script/TheGunslinger.GunslingerCameraTargetingStrategy
/// Size: 0x0018 (0x000050 - 0x000068)
class UGunslingerCameraTargetingStrategy : public UBaseCameraTargetingStrategy
{ 
public:
	FName                                              _cameraSocketName;                                          // 0x0050   (0x000C)  
	FName                                              _survivorHarpoonSocketName;                                 // 0x005C   (0x000C)  
};

/// Class /Script/TheGunslinger.GunslingerEffectsComponent
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UGunslingerEffectsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5082) /* FMulticastInlineDelegate */ __um(OnIsAimingChanged);                                 // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,5083) /* FMulticastInlineDelegate */ __um(PlayOutOfAmmoSound);                                // 0x00C8   (0x0010)  
	float                                              _minimumTimeBetweenBroadcast;                               // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	class AHarpoonRifle*                               _rifle;                                                     // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x00E8   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature
	// void PlayOutOfAmmoSound__DelegateSignature();                                                                         // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged
	// void OnItemUsedStateChanged(bool IsPressed);                                                                          // [0x5aac510] Final|Native|Private 
	// Function /Script/TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature
	// void OnIsAimingChanged__DelegateSignature(bool isAiming);                                                             // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound
	// void Multicast_PlayOutOfAmmoSound();                                                                                  // [0x4e01240] Final|Net|Native|Event|NetMulticast|Private 
};

/// Class /Script/TheGunslinger.GunslingerUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UGunslingerUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheGunslinger.GunslingerUtilities.GetHarpoonRifle
	// class AHarpoonRifle* GetHarpoonRifle(class ADBDPlayer* Player);                                                       // [0x5aac210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheGunslinger.HarpoonChainPositioner
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class UHarpoonChainPositioner : public UActorComponent
{ 
public:
	class UClass*                                      _harpoonPropClass;                                          // 0x00B8   (0x0008)  
	FName                                              _survivorAttachSocket;                                      // 0x00C0   (0x000C)  
	FName                                              _animationSocket;                                           // 0x00CC   (0x000C)  
	FDBDTunableRowHandle                               _reelBackToRifleSpeed;                                      // 0x00D8   (0x0028)  
	float                                              _harpoonMinimumSnapBackDistance;                            // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FDBDTunableRowHandle                               _harpoonMaximumSnapBackDistance;                            // 0x0108   (0x0028)  
	class AHarpoonProp*                                _harpoonProp;                                               // 0x0130   (0x0008)  
	class AHarpoonProjectile*                          _harpoonProjectile;                                         // 0x0138   (0x0008)  
	class ADBDPlayer*                                  _collector;                                                 // 0x0140   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0148   (0x0008)  MISSED
	class ARifleChain*                                 _chain;                                                     // 0x0150   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0158   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.HarpoonChainPositioner.OnOwnerCollected
	// void OnOwnerCollected(class ADBDPlayer* collector);                                                                   // [0x5aac5a0] Final|Native|Private 
	// Function /Script/TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged
	// void OnHarpoonTravelingChanged(bool isTravelling);                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle
	// void OnHarpoonLoadedOnRifle();                                                                                        // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged
	// void OnCurrentHarpoonChanged(class AActor* currentHarpoon);                                                           // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheGunslinger.HarpoonChainPositioner.AttachToRifle
	// void AttachToRifle();                                                                                                 // [0x5aac040] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket
	// void AttachToAnimSocket();                                                                                            // [0x5aac020] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheGunslinger.HarpoonedSurvivorSubAnimInstance
/// Size: 0x00B0 (0x000550 - 0x000600)
class UHarpoonedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	float                                              _linkedMaxSpeed;                                            // 0x0550   (0x0004)  
	float                                              _timeBeforeHarpoonHitReset;                                 // 0x0554   (0x0004)  
	FName                                              _hitHarpoonedEnterEvent;                                    // 0x0558   (0x000C)  
	FName                                              _chainBreakEnterEvent;                                      // 0x0564   (0x000C)  
	bool                                               _isChainLinked;                                             // 0x0570   (0x0001)  
	bool                                               _isBeingReeled;                                             // 0x0571   (0x0001)  
	bool                                               _hasLinkInput;                                              // 0x0572   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0573   (0x0001)  MISSED
	float                                              _linkInputX;                                                // 0x0574   (0x0004)  
	float                                              _linkInputY;                                                // 0x0578   (0x0004)  
	bool                                               _chainBreakTrigger;                                         // 0x057C   (0x0001)  
	bool                                               _triggerHarpoonHit;                                         // 0x057D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x057E   (0x0002)  MISSED
	float                                              _harpoonHitTurnAnimNormalizedStartTime;                     // 0x0580   (0x0004)  
	bool                                               _harpoonHitAnimTurnRight;                                   // 0x0584   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0585   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0586   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0587   (0x0001)  MISSED
	float                                              _walkAnimSpeed;                                             // 0x0588   (0x0004)  
	float                                              _yaw;                                                       // 0x058C   (0x0004)  
	float                                              _pitch;                                                     // 0x0590   (0x0004)  
	unsigned char                                      UnknownData03_6[0x6C];                                      // 0x0594   (0x006C)  MISSED
};

/// Class /Script/TheGunslinger.HarpoonLauncher
/// Size: 0x0058 (0x000190 - 0x0001E8)
class UHarpoonLauncher : public UKillerProjectileLauncher
{ 
public:
	FDBDTunableRowHandle                               _launchSpeed;                                               // 0x0190   (0x0028)  
	FDBDTunableRowHandle                               _launchDistanceFromCamera;                                  // 0x01B8   (0x0028)  
	float                                              _launchZOffset;                                             // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01E4   (0x0004)  MISSED
};

/// Class /Script/TheGunslinger.HarpoonProjectile
/// Size: 0x00D0 (0x000338 - 0x000408)
class AHarpoonProjectile : public AKillerProjectile
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0338   (0x0078)  MISSED
	FDBDTunableRowHandle                               _launchDistanceFromCamera;                                  // 0x03B0   (0x0028)  
	class UHarpoonProjectileMovementComponent*         _movement;                                                  // 0x03D8   (0x0008)  
	class UPrimitiveComponent*                         _environmentCollider;                                       // 0x03E0   (0x0008)  
	class UPrimitiveComponent*                         _targetCollider;                                            // 0x03E8   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMeshComponent;                                     // 0x03F0   (0x0008)  
	class UPoolableActorComponent*                     _poolableActorComponent;                                    // 0x03F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0400   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.HarpoonProjectile.OnHarpoonStop
	// void OnHarpoonStop(FHitResult& Result);                                                                               // [0x5aac3b0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheGunslinger.HarpoonProjectileMovementComponent
/// Size: 0x0030 (0x000260 - 0x000290)
class UHarpoonProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{ 
public:
	FDBDTunableRowHandle                               _maxTravelDistance;                                         // 0x0260   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Class /Script/TheGunslinger.HarpoonProp
/// Size: 0x0010 (0x000230 - 0x000240)
class AHarpoonProp : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMeshComponent;                                     // 0x0238   (0x0008)  
};

/// Class /Script/TheGunslinger.HarpoonProviderComponent
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UHarpoonProviderComponent : public USingleProjectileProviderComponent
{ 
public:
};

/// Class /Script/TheGunslinger.HarpoonRifle
/// Size: 0x00C0 (0x0004C8 - 0x000588)
class AHarpoonRifle : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x04C8   (0x0018)  MISSED
	class UClass*                                      _survivorLinkableClass;                                     // 0x04E0   (0x0008)  
	class UClass*                                      _killerLinkableClass;                                       // 0x04E8   (0x0008)  
	class UClass*                                      _chainClass;                                                // 0x04F0   (0x0008)  
	FName                                              _rifleMuzzleSocket;                                         // 0x04F8   (0x000C)  
	FName                                              _rifleHarpoonLoadingSocket;                                 // 0x0504   (0x000C)  
	FDBDTunableRowHandle                               _crowActiveRange;                                           // 0x0510   (0x0028)  
	class UHarpoonLauncher*                            _launcher;                                                  // 0x0538   (0x0008)  
	class UHarpoonProviderComponent*                   _harpoonProvider;                                           // 0x0540   (0x0008)  
	class ARifleChain*                                 _chain;                                                     // 0x0548   (0x0008)  
	class URifleChainTensionComponent*                 _chainTensionComponent;                                     // 0x0550   (0x0008)  
	class UChargeableComponent*                        _chainTensionChargeable;                                    // 0x0558   (0x0008)  
	class URiflePlayerLinker*                          _playerLinker;                                              // 0x0560   (0x0008)  
	class UHarpoonChainPositioner*                     _harpoonChainPositioner;                                    // 0x0568   (0x0008)  
	class UFireHarpoonRifleInteraction*                _fireInteraction;                                           // 0x0570   (0x0008)  
	class UTriggerableActivatorComponent*              _crowsActivatorComponent;                                   // 0x0578   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0580   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.HarpoonRifle.GetChain
	// class ARifleChain* GetChain();                                                                                        // [0x5aac1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon
	// void Authority_OnFireHarpoon();                                                                                       // [0x5aac1c0] Final|Native|Private 
};

/// Class /Script/TheGunslinger.HarpoonRifleAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UHarpoonRifleAnimInstance : public UAnimInstance
{ 
public:
	class ARifleChain*                                 _chain;                                                     // 0x02C0   (0x0008)  
	float                                              _chainUnwindingSpeed;                                       // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/TheGunslinger.HellshireIronAddon
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class UHellshireIronAddon : public UItemAddon
{ 
public:
	float                                              _undetectableDurationPostHarpoon;                           // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	class UClass*                                      _undetectableTimedEffectClass;                              // 0x02C0   (0x0008)  
	class UStatusEffect*                               _statusEffect;                                              // 0x02C8   (0x0008)  
};

/// Class /Script/TheGunslinger.HexRetribution
/// Size: 0x0018 (0x000448 - 0x000460)
class UHexRetribution : public UHexPerk
{ 
public:
	float                                              _obliviousDurationByLevels;                                 // 0x0448   (0x000C)  
	float                                              _auraRevealDuration;                                        // 0x0454   (0x0004)  
	class UClass*                                      _revealEffectClass;                                         // 0x0458   (0x0008)  
};

/// Class /Script/TheGunslinger.HoneyLocustThornsAddon
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UHoneyLocustThornsAddon : public UItemAddon
{ 
public:
};

/// Class /Script/TheGunslinger.GunslingerHarpoon
/// Size: 0x0000 (0x000030 - 0x000030)
class UGunslingerHarpoon : public UInterface
{ 
public:
};

/// Class /Script/TheGunslinger.IridescentCoinAddon
/// Size: 0x0030 (0x0002B8 - 0x0002E8)
class UIridescentCoinAddon : public UItemAddon
{ 
public:
	class UStatusEffect*                               _exposedStatusEffect;                                       // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x02C0   (0x0028)  MISSED
};

/// Class /Script/TheGunslinger.K19GameStateComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UK19GameStateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/TheGunslinger.K19Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK19Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheGunslinger.K19Utilities.K19ReleaseDecalSpawner
	// void K19ReleaseDecalSpawner(class UObject* WorldContextObject, FName decalSpawnerName);                               // [0x5aaf300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TheGunslinger.K19Utilities.K19CreateDecalSpawner
	// void K19CreateDecalSpawner(class UObject* WorldContextObject, FName decalSpawnerName, class UMaterialInterface* DecalMaterial, int32_t PoolSize, ESpawnerStrategyType spawnerStrategyType); // [0x5aaf160] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/TheGunslinger.KillerChainLinkableComponent
/// Size: 0x0018 (0x000198 - 0x0001B0)
class UKillerChainLinkableComponent : public UChainLinkableComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0198   (0x0018)  MISSED
};

/// Class /Script/TheGunslinger.OffTheRecord
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class UOffTheRecord : public UPerk
{ 
public:
	float                                              _activationDurationLevels;                                  // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _activatableEnduranceEffectClass;                           // 0x03D8   (0x0008)  
	class UActivatableEnduranceEffect*                 _activatableEnduranceEffect;                                // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/TheGunslinger.OffTheRecord.GetActivationDurationAtLevel
	// float GetActivationDurationAtLevel();                                                                                 // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheGunslinger.PlayerReelInputAccelerationConstraintStrategy
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UPlayerReelInputAccelerationConstraintStrategy : public UBaseInputAccelerationConstraintStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00B8   (0x0038)  MISSED
};

/// Class /Script/TheGunslinger.PrisonChainAddon
/// Size: 0x0030 (0x0002B8 - 0x0002E8)
class UPrisonChainAddon : public UItemAddon
{ 
public:
	FDBDTunableRowHandle                               _maxTensionCharge;                                          // 0x02B8   (0x0028)  
	float                                              _tensionChargeModifier;                                     // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02E4   (0x0004)  MISSED
};

/// Class /Script/TheGunslinger.RedHerring
/// Size: 0x00B0 (0x0003C8 - 0x000478)
class URedHerring : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x03C8   (0x0068)  MISSED
	class AGenerator*                                  _generatorBeingRepaired;                                    // 0x0430   (0x0008)  
	class AGenerator*                                  _markedGenerator;                                           // 0x0438   (0x0008)  
	float                                              _secondsToActivatePerk;                                     // 0x0440   (0x0004)  
	float                                              _loudNoiseTriggeredNotifyTime;                              // 0x0444   (0x0004)  
	float                                              _cooldownLevels;                                            // 0x0448   (0x000C)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x0454   (0x0024)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.RedHerring.OnRep_MarkedGenerator
	// void OnRep_MarkedGenerator(class AGenerator* oldMarkedGenerator);                                                     // [0x5aaf490] Final|Native|Private 
	// Function /Script/TheGunslinger.RedHerring.OnLoudNoiseTriggered
	// void OnLoudNoiseTriggered();                                                                                          // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheGunslinger.ReelChainInteraction
/// Size: 0x0040 (0x000650 - 0x000690)
class UReelChainInteraction : public UInteractionDefinition
{ 
public:
	float                                              _frontMovementAngle;                                        // 0x0648   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x064C   (0x0004)  MISSED
	float                                              _minimumFrontVelocity;                                      // 0x0650   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0654   (0x0004)  MISSED
	class ADBDPlayer*                                  _linkedPlayer;                                              // 0x0658   (0x0008)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0660   (0x0030)  MISSED
};

/// Class /Script/TheGunslinger.ReloadHarpoonRifleInteraction
/// Size: 0x00B0 (0x000790 - 0x000840)
class UReloadHarpoonRifleInteraction : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _reloadTime;                                                // 0x0788   (0x0028)  
	FDBDTunableRowHandle                               _movementSpeedMultiplier;                                   // 0x07B0   (0x0028)  
	FDBDTunableRowHandle                               _rotationScaleMultiplier;                                   // 0x07D8   (0x0028)  
	FDBDTunableRowHandle                               _rotationScaleAdjustmentTime;                               // 0x0800   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0828   (0x0018)  MISSED
};

/// Class /Script/TheGunslinger.RifleChain
/// Size: 0x01F0 (0x000230 - 0x000420)
class ARifleChain : public AActor
{ 
public:
	SDK_UNDEFINED(16,5084) /* FMulticastInlineDelegate */ __um(OnProjectileSet);                                   // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,5085) /* FMulticastInlineDelegate */ __um(OnIsCollidingChanged);                              // 0x0240   (0x0010)  
	class UAkComponent*                                _chainCenterAkComponent;                                    // 0x0250   (0x0008)  
	class UAkAudioEvent*                               _collisionLoopStartEvent;                                   // 0x0258   (0x0008)  
	class UAkAudioEvent*                               _collisionLoopEndEvent;                                     // 0x0260   (0x0008)  
	TArray<FAkSoundLoop>                               _collisionSoundLoops;                                       // 0x0268   (0x0010)  
	float                                              _sphereTraceRadius;                                         // 0x0278   (0x0004)  
	float                                              _timeBetweenTrace;                                          // 0x027C   (0x0004)  
	SDK_UNDEFINED(16,5086) /* TScriptInterface<Class> */ __um(_harpoon);                                           // 0x0280   (0x0010)  
	unsigned char                                      UnknownData00_6[0x190];                                     // 0x0290   (0x0190)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.RifleChain.UpdateChainMesh
	// void UpdateChainMesh(class UInstancedStaticMeshComponent* Mesh, class USplineComponent* spline, float alpha);         // [0x5aaf950] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheGunslinger.RifleChain.SpawnChainPoints
	// int32_t SpawnChainPoints(FVector Start, FVector Stop, class UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, class USplineComponent* spline); // [0x5aaf700] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/TheGunslinger.RifleChain.OnUnattachFromPlayer
	// void OnUnattachFromPlayer(class ADBDPlayer* Player);                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheGunslinger.RifleChain.OnReelBackToRifle
	// void OnReelBackToRifle();                                                                                             // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature
	// void OnProjectileSet__DelegateSignature(class AActor* Projectile);                                                    // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGunslinger.RifleChain.OnLaunch
	// void OnLaunch();                                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature
	// void OnIsCollidingChanged__DelegateSignature(bool IsColliding);                                                       // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGunslinger.RifleChain.OnAttachToPlayer
	// void OnAttachToPlayer(class ADBDPlayer* Player);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/TheGunslinger.RifleChain.IsColliding
	// bool IsColliding();                                                                                                   // [0x5aaf130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RifleChain.GetUnwindingSpeed
	// float GetUnwindingSpeed();                                                                                            // [0x5aaf100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RifleChain.GetRiflePlayerLinker
	// class URiflePlayerLinker* GetRiflePlayerLinker();                                                                     // [0x5aaf0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RifleChain.GetFirstAndLastCollisionHits
	// TArray<FHitResult> GetFirstAndLastCollisionHits();                                                                    // [0x5aaefb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RifleChain.GetChainTensionComponent
	// class URifleChainTensionComponent* GetChainTensionComponent();                                                        // [0x5aaef80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RifleChain.GetChainStart
	// FVector GetChainStart();                                                                                              // [0x5aaef40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RifleChain.GetChainEnd
	// FVector GetChainEnd();                                                                                                // [0x5aaef00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheGunslinger.RifleChainTensionComponent
/// Size: 0x01F0 (0x0000B8 - 0x0002A8)
class URifleChainTensionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,5087) /* FMulticastInlineDelegate */ __um(OnIsBuildingTensionChanged);                        // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00D0   (0x0018)  MISSED
	bool                                               _isBuildingTension;                                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class USurvivorChainLinkableComponent*             _targetlinkable;                                            // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x00F8   (0x0010)  MISSED
	FDBDTunableRowHandle                               _maxTensionCharge;                                          // 0x0108   (0x0028)  
	FDBDTunableRowHandle                               _baseTensionRate;                                           // 0x0130   (0x0028)  
	FDBDTunableRowHandle                               _collisionTensionRate;                                      // 0x0158   (0x0028)  
	FTunableStat                                       _survivorPullingTensionRate;                                // 0x0180   (0x0080)  
	FNonTunableStat                                    _currentTensionRate;                                        // 0x0200   (0x0060)  
	EProgressModifier                                  _progressModifierForSurvivors;                              // 0x0260   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0261   (0x0007)  MISSED
	SDK_UNDEFINED(24,5088) /* FText */                 __um(_chargeProgressDescriptionText);                       // 0x0268   (0x0018)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0280   (0x0018)  MISSED
	class ARifleChain*                                 _chain;                                                     // 0x0298   (0x0008)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x02A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged
	// void OnTensionChargeableCompletionChanged(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                 // [0x5aaf540] Final|Native|Private|HasOutParms 
	// Function /Script/TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension
	// void OnRep_IsBuildingTension();                                                                                       // [0x5aaf470] Final|Native|Private 
	// Function /Script/TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature
	// void OnIsBuildingTensionChanged__DelegateSignature(bool IsBuildingTension);                                           // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGunslinger.RifleChainTensionComponent.IsBuildingTension
	// bool IsBuildingTension();                                                                                             // [0x57dfcf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RifleChainTensionComponent.GetProgress
	// float GetProgress();                                                                                                  // [0x5aaf090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheGunslinger.RiflePlayerLinker
/// Size: 0x0168 (0x0000B8 - 0x000220)
class URiflePlayerLinker : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5089) /* FMulticastInlineDelegate */ __um(OnLinkedPlayerSet);                                 // 0x00B8   (0x0010)  
	class ADBDPlayer*                                  _linkedPlayer;                                              // 0x00C8   (0x0008)  
	class ADBDPlayer*                                  _linkedPlayerDuringAttack;                                  // 0x00D0   (0x0008)  
	class ADBDPlayer*                                  _linkOwner;                                                 // 0x00D8   (0x0008)  
	float                                              _desiredLinkLength;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x00E4   (0x003C)  MISSED
	FDBDTunableRowHandle                               _elasticLength;                                             // 0x0120   (0x0028)  
	FDBDTunableRowHandle                               _minimumLinkLength;                                         // 0x0148   (0x0028)  
	FDBDTunableRowHandle                               _breakFreeCloseRangeMaxDistance;                            // 0x0170   (0x0028)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0198   (0x0004)  MISSED
	float                                              _movementLinkReductionThreshold;                            // 0x019C   (0x0004)  
	float                                              _movementAccelerationTreshold;                              // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x7C];                                      // 0x01A4   (0x007C)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain
	// void Server_OnClientConfirmTensionBreakChain(class ADBDPlayer* Player);                                               // [0x5aaf640] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature
	// void OnLinkedPlayerSet__DelegateSignature(class ADBDPlayer* linkedPlayer);                                            // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGunslinger.RiflePlayerLinker.Multicast_Unlink
	// void Multicast_Unlink();                                                                                              // [0x4e01220] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheGunslinger.RiflePlayerLinker.Multicast_Link
	// void Multicast_Link(class ADBDPlayer* linkedPlayer);                                                                  // [0x57fd070] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/TheGunslinger.RiflePlayerLinker.GetLinkOwner
	// class ADBDPlayer* GetLinkOwner();                                                                                     // [0x5aaf030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RiflePlayerLinker.GetLinkedPlayer
	// class ADBDPlayer* GetLinkedPlayer();                                                                                  // [0x5aaf060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain
	// void Client_OnAuthorityTensionBreakChain(class ADBDPlayer* Player);                                                   // [0x57e0340] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/TheGunslinger.RustedSpikeAddon
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class URustedSpikeAddon : public UItemAddon
{ 
public:
};

/// Class /Script/TheGunslinger.SurvivorChainLinkableComponent
/// Size: 0x00E8 (0x000198 - 0x000280)
class USurvivorChainLinkableComponent : public UChainLinkableComponent
{ 
public:
	FDBDTunableRowHandle                               _pullbackAngle;                                             // 0x0198   (0x0028)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	FDBDTunableRowHandle                               _immobilizationDuration;                                    // 0x01C8   (0x0028)  
	FGameplayTagContainer                              _linkableInteractionTags;                                   // 0x01F0   (0x0020)  
	FGameplayTagContainer                              _cancelableInteractionTags;                                 // 0x0210   (0x0020)  
	class UClass*                                      _velocityAdditiveStrategyClass;                             // 0x0230   (0x0008)  
	FName                                              _immobilizationEffectName;                                  // 0x0238   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	FVector_NetQuantize10                              _linkedMoveInput;                                           // 0x0248   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	class UStatusEffect*                               _immobilizationEffect;                                      // 0x0258   (0x0008)  
	class USurvivorReelVelocityAdditiveStrategy*       _velocityAdditiveStrategy;                                  // 0x0260   (0x0008)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0268   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy
	// void OnRep_VelocityAdditiveStrategy();                                                                                // [0x5aaf520] Final|Native|Private 
};

/// Class /Script/TheGunslinger.SurvivorReelVelocityAdditiveStrategy
/// Size: 0x0128 (0x0000B8 - 0x0001E0)
class USurvivorReelVelocityAdditiveStrategy : public UBaseCharacterVelocityAdditiveStrategy
{ 
public:
	FTunableStat                                       _reelSpeed;                                                 // 0x00B8   (0x0080)  
	float                                              _minimumLinkLengthDelta;                                    // 0x0138   (0x0004)  
	float                                              _maximumVelocityAdditive;                                   // 0x013C   (0x0004)  
	FTagStateBool                                      _isBeingReeled;                                             // 0x0140   (0x0030)  
	FTagStateBool                                      _isBeingPulled;                                             // 0x0170   (0x0030)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x01A0   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet
	// void OnKillerSet(class ASlasherPlayer* killer);                                                                       // [0x5aaf3e0] Final|Native|Private 
};

/// Class /Script/TheGunslinger.TestOffTheRecord
/// Size: 0x0000 (0x0003E8 - 0x0003E8)
class UTestOffTheRecord : public UOffTheRecord
{ 
public:
};

