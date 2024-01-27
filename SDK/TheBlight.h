
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
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NetworkUtilities
/// dependency: StatSystem

/// Enum /Script/TheBlight.EWallGrabState
/// Size: 0x11
enum class EWallGrabState : uint8_t
{
	EWallGrabState__None                                                             = 0,
	EWallGrabState__Charging                                                         = 1,
	EWallGrabState__Charged                                                          = 2,
	EWallGrabState__NonLethalCharge                                                  = 3,
	EWallGrabState__Adjusting                                                        = 4,
	EWallGrabState__Holding                                                          = 5,
	EWallGrabState__LethalCharge                                                     = 6,
	EWallGrabState__Cooldown                                                         = 7,
	EWallGrabState__Sliding                                                          = 8,
	EWallGrabState__Attacking                                                        = 9,
	EWallGrabState__EWallGrabState_MAX                                               = 10
};

/// Class /Script/TheBlight.ActivateBlightPower
/// Size: 0x0000 (0x000790 - 0x000790)
class UActivateBlightPower : public UChargeableInteractionDefinition
{ 
public:
};

/// Class /Script/TheBlight.Addon_TheBlight
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UAddon_TheBlight : public UItemAddon
{ 
public:
	float                                              _speedIncreasePerDash;                                      // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x02BC   (0x000C)  MISSED
};

/// Class /Script/TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UAddon_TheBlight_ConsecutiveDashSpeedBonus : public UItemAddon
{ 
public:
	float                                              _speedIncreasePerDash;                                      // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x02BC   (0x000C)  MISSED
};

/// Class /Script/TheBlight.Addon_TheBlight_SoulChemical
/// Size: 0x0060 (0x0002B8 - 0x000318)
class UAddon_TheBlight_SoulChemical : public UItemAddon
{ 
public:
	float                                              _triggerDistance;                                           // 0x02B8   (0x0004)  
	ESkillCheckCustomType                              _skillCheckType;                                            // 0x02BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02BD   (0x0003)  MISSED
	FGameplayTagContainer                              _interactionSemantics;                                      // 0x02C0   (0x0020)  
	FGameplayTagContainer                              _blightPowerStateTag;                                       // 0x02E0   (0x0020)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0300   (0x0018)  MISSED
};

/// Class /Script/TheBlight.BlightAnimInstance
/// Size: 0x0020 (0x000610 - 0x000630)
class UBlightAnimInstance : public UKillerAnimInstance
{ 
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                 // 0x0610   (0x0008)  
	EWallGrabState                                     _powerState;                                                // 0x0618   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0619   (0x0003)  MISSED
	float                                              _stateTimeRemaining;                                        // 0x061C   (0x0004)  
	float                                              _lookAngle;                                                 // 0x0620   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0624   (0x000C)  MISSED
};

/// Class /Script/TheBlight.BlightAttackPicker
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBlightAttackPicker : public USlasherAttackPickerComponent
{ 
public:
};

/// Class /Script/TheBlight.BlightDashAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UBlightDashAttack : public UPounceAttack
{ 
public:
};

/// Class /Script/TheBlight.BlightDashAttackOpenSubstate
/// Size: 0x0000 (0x000130 - 0x000130)
class UBlightDashAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
};

/// Class /Script/TheBlight.BlightDashAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UBlightDashAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheBlight.BlightDashAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UBlightDashAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheBlight.BlightDashAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UBlightDashAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheBlight.BlightPower
/// Size: 0x0158 (0x0004C8 - 0x000620)
class ABlightPower : public ACollectable
{ 
public:
	class UPowerChargeComponent*                       _blightPowerCharge;                                         // 0x04C8   (0x0008)  
	class UPowerToggleComponent*                       _blightPowerToggle;                                         // 0x04D0   (0x0008)  
	class UChargeableComponent*                        _blightPowerActivateChargeable;                             // 0x04D8   (0x0008)  
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                 // 0x04E0   (0x0008)  
	FDBDTunableRowHandle                               _blightPowerActivateMaxCharge;                              // 0x04E8   (0x0028)  
	FTunableStat                                       _blightPowerMaxCharge;                                      // 0x0510   (0x0080)  
	FDBDTunableRowHandle                               _blightPowerDechargeRate;                                   // 0x0590   (0x0028)  
	FDBDTunableRowHandle                               _blightPowerRechargeRate;                                   // 0x05B8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x05E0   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheBlight.BlightPower.OnPowerStateChanged
	// void OnPowerStateChanged(EWallGrabState previousState, EWallGrabState NewState);                                      // [0x5a16f20] Final|Native|Private 
};

/// Class /Script/TheBlight.BlightPowerEstimatedCollisionIndicator
/// Size: 0x0008 (0x000230 - 0x000238)
class ABlightPowerEstimatedCollisionIndicator : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0230   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic
	// void OnShowIndicator_Cosmetic();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic
	// void OnHideIndicator_Cosmetic();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheBlight.BlightPowerState
/// Size: 0x0150 (0x000030 - 0x000180)
class UBlightPowerState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UCurveFloat*                                 _stateSpeedCurve;                                           // 0x0040   (0x0008)  
	FTunableStat                                       _stateDuration;                                             // 0x0048   (0x0080)  
	FDBDTunableRowHandle                               _cameraPitchRecenterTime;                                   // 0x00C8   (0x0028)  
	FDBDTunableRowHandle                               _wallDashCollisionRadius;                                   // 0x00F0   (0x0028)  
	FDBDTunableRowHandle                               _wallDashCollisionHeight;                                   // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _wallDashCollisionRange;                                    // 0x0140   (0x0028)  
	bool                                               _playerCanCancelEarly;                                      // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0169   (0x000F)  MISSED
	bool                                               _displayCollisionIndicator;                                 // 0x0178   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0179   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheBlight.BlightPowerState.GetStateDuration
	// float GetStateDuration();                                                                                             // [0x5a16cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheBlight.BlightPowerStateAdjusting
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UBlightPowerStateAdjusting : public UBlightPowerState
{ 
public:
	bool                                               _adjustRotationOnCollision;                                 // 0x0180   (0x0001)  
	bool                                               _bounceAwayFromCollision;                                   // 0x0181   (0x0001)  
	bool                                               _allowNavigation;                                           // 0x0182   (0x0001)  
	bool                                               _smashBreakables;                                           // 0x0183   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FDBDTunableRowHandle                               _maxDistanceForSurvivorFacing;                              // 0x0188   (0x0028)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01B0   (0x0010)  MISSED
};

/// Class /Script/TheBlight.BlightPowerStateDash
/// Size: 0x00D0 (0x000180 - 0x000250)
class UBlightPowerStateDash : public UBlightPowerState
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0180   (0x0008)  MISSED
	FTunableStat                                       _vectorInterpToSpeed;                                       // 0x0188   (0x0080)  
	class UCurveFloat*                                 _noDashTimeLimitSpeedCurve;                                 // 0x0208   (0x0008)  
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                        // 0x0210   (0x0008)  
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                             // 0x0218   (0x0008)  
	class UCurveFloat*                                 _lookAngleToMaxTurnRateCurveMouse;                          // 0x0220   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0228   (0x0028)  MISSED
};

/// Class /Script/TheBlight.BlightPowerStateAttack
/// Size: 0x0028 (0x000250 - 0x000278)
class UBlightPowerStateAttack : public UBlightPowerStateDash
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0250   (0x0028)  MISSED
};

/// Class /Script/TheBlight.BlightPowerStateComponent
/// Size: 0x02A8 (0x0000B8 - 0x000360)
class UBlightPowerStateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,5060) /* FMulticastInlineDelegate */ __um(OnPowerCollided);                                   // 0x00D0   (0x0010)  
	TArray<class UClass*>                              _blightPowerStateClasses;                                   // 0x00E0   (0x0010)  
	FDBDTunableRowHandle                               _canDashCheckCollisionRadius;                               // 0x00F0   (0x0028)  
	FDBDTunableRowHandle                               _canDashCheckCollisionHeight;                               // 0x0118   (0x0028)  
	FDBDTunableRowHandle                               _canDashCheckCollisionRange;                                // 0x0140   (0x0028)  
	FGameplayTagContainer                              _canWallGrabPlayerTags;                                     // 0x0168   (0x0020)  
	FDBDTunableRowHandle                               _blightLethalDashDodgeRadius;                               // 0x0188   (0x0028)  
	class UInteractionDefinition*                      _powerInteractionDefinition;                                // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x01B8   (0x0018)  MISSED
	class UTimerObject*                                _stateTimer;                                                // 0x01D0   (0x0008)  
	TArray<class UBlightPowerState*>                   _blightPowerStates;                                         // 0x01D8   (0x0010)  
	class UBlightPowerState*                           _currentBlightPowerState;                                   // 0x01E8   (0x0008)  
	char                                               _dashTokens;                                                // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FTunableStat                                       _maximumDashTokens;                                         // 0x01F8   (0x0080)  
	FTunableStat                                       _tokenChargeRate;                                           // 0x0278   (0x0080)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x02F8   (0x0068)  MISSED


	/// Functions
	// Function /Script/TheBlight.BlightPowerStateComponent.Server_SetWallGrabState
	// void Server_SetWallGrabState(EWallGrabState NewState);                                                                // [0x5a17050] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/TheBlight.BlightPowerStateComponent.ResetDashTokens
	// void ResetDashTokens();                                                                                               // [0x5a17030] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheBlight.BlightPowerStateComponent.OnRep_StateTimer
	// void OnRep_StateTimer();                                                                                              // [0x5a17010] Final|Native|Private 
	// Function /Script/TheBlight.BlightPowerStateComponent.OnRep_DashTokens
	// void OnRep_DashTokens();                                                                                              // [0x5a16ff0] Final|Native|Private 
	// Function /Script/TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5a16f00] Final|Native|Private 
	// Function /Script/TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState
	// void Multicast_SetWallGrabState(EWallGrabState NewState);                                                             // [0x5a16db0] Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetStateTimeRemaining
	// float GetStateTimeRemaining();                                                                                        // [0x5a16d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetStateTimer
	// class UTimerObject* GetStateTimer();                                                                                  // [0x5a16d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetStateTimeElapsed
	// float GetStateTimeElapsed();                                                                                          // [0x5a16d20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetPowerStateByEnum
	// class UBlightPowerState* GetPowerStateByEnum(EWallGrabState StateEnum);                                               // [0x5a16c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetPowerState
	// EWallGrabState GetPowerState();                                                                                       // [0x5a16c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetLookAngleDegrees
	// float GetLookAngleDegrees();                                                                                          // [0x5a16ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetDashTokensRemaining
	// char GetDashTokensRemaining();                                                                                        // [0x5a16b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.GetCurrentPowerState
	// class UBlightPowerState* GetCurrentPowerState();                                                                      // [0x5a16b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BlightPowerStateComponent.CanDash
	// bool CanDash();                                                                                                       // [0x5a16b10] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheBlight.BlightPowerStateCooldown
/// Size: 0x0000 (0x000180 - 0x000180)
class UBlightPowerStateCooldown : public UBlightPowerState
{ 
public:
};

/// Class /Script/TheBlight.BlightPowerStateHolding
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UBlightPowerStateHolding : public UBlightPowerState
{ 
public:
	FSecondaryInteractionProperties                    _secondaryInteractionProperties;                            // 0x0180   (0x0038)  
	bool                                               _allowNavigation;                                           // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              _dashSpeedForProjection;                                    // 0x01BC   (0x0004)  
};

/// Class /Script/TheBlight.BlightPowerStateInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlightPowerStateInterface : public UInterface
{ 
public:
};

/// Class /Script/TheBlight.BlightPowerStateLethalDash
/// Size: 0x0040 (0x000250 - 0x000290)
class UBlightPowerStateLethalDash : public UBlightPowerStateDash
{ 
public:
	FSecondaryInteractionProperties                    _secondaryInteractionProperties;                            // 0x0250   (0x0038)  
	bool                                               _smashBreakables;                                           // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0289   (0x0007)  MISSED
};

/// Class /Script/TheBlight.BlightPowerStateNonLethalDash
/// Size: 0x0008 (0x000250 - 0x000258)
class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash
{ 
public:
	bool                                               _smashBreakables;                                           // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0251   (0x0007)  MISSED
};

/// Class /Script/TheBlight.BlightPowerStateReady
/// Size: 0x0000 (0x000180 - 0x000180)
class UBlightPowerStateReady : public UBlightPowerState
{ 
public:
};

/// Class /Script/TheBlight.BuiltToLast
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class UBuiltToLast : public UPerk
{ 
public:
	float                                              _refillPercentage;                                          // 0x03C8   (0x000C)  
	float                                              _hideDuration;                                              // 0x03D4   (0x000C)  
	char                                               _numberOfTimesPerkTriggered;                                // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x03E1   (0x000F)  MISSED


	/// Functions
	// Function /Script/TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic
	// void OnBuiltToLastTrigger_Cosmetic();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheBlight.BuiltToLast.GetRefillPercentageByLevel
	// float GetRefillPercentageByLevel();                                                                                   // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.BuiltToLast.GetHideDurationByLevel
	// float GetHideDurationByLevel();                                                                                       // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheBlight.DesperateMeasures
/// Size: 0x0010 (0x0003C8 - 0x0003D8)
class UDesperateMeasures : public UPerk
{ 
public:
	float                                              _healAndUnhookMultiplier;                                   // 0x03C8   (0x000C)  
	int32_t                                            _nbInjuredHookedOrDyingSurvivors;                           // 0x03D4   (0x0004)  
};

/// Class /Script/TheBlight.DragonsGrip
/// Size: 0x0060 (0x0003C8 - 0x000428)
class UDragonsGrip : public UPerk
{ 
public:
	class AGenerator*                                  _kickedGenerator;                                           // 0x03C8   (0x0008)  
	float                                              _activationDuration;                                        // 0x03D0   (0x000C)  
	float                                              _cooldownDuration;                                          // 0x03DC   (0x000C)  
	float                                              _exposedEffectDuration;                                     // 0x03E8   (0x000C)  
	bool                                               _onlyExposeFirstSurvivor;                                   // 0x03F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x03F5   (0x000B)  MISSED
	FDBDTunableRowHandle                               _loudNoiseRange;                                            // 0x0400   (0x0028)  


	/// Functions
	// Function /Script/TheBlight.DragonsGrip.OnRevealSurvivor
	// void OnRevealSurvivor(class ADBDPlayer* Instigator);                                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheBlight.DragonsGrip.Multicast_OnRevealSurvivor
	// void Multicast_OnRevealSurvivor(class ADBDPlayer* Survivor);                                                          // [0x501b930] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheBlight.DragonsGrip.GetExposedEffectDurationAtLevel
	// float GetExposedEffectDurationAtLevel();                                                                              // [0x500a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.DragonsGrip.GetCooldownDurationAtLevel
	// float GetCooldownDurationAtLevel();                                                                                   // [0x50230e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.DragonsGrip.GetActivationDurationAtLevel
	// float GetActivationDurationAtLevel();                                                                                 // [0x500a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheBlight.HexBloodFavor
/// Size: 0x0018 (0x000448 - 0x000460)
class UHexBloodFavor : public UHexPerk
{ 
public:
	float                                              _palletInRange;                                             // 0x0448   (0x000C)  
	float                                              _palletPulldownBlockTime;                                   // 0x0454   (0x000C)  


	/// Functions
	// Function /Script/TheBlight.HexBloodFavor.GetPalletPulldownBlockTimeAtLevel
	// float GetPalletPulldownBlockTimeAtLevel();                                                                            // [0x5a16bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.HexBloodFavor.GetPalletInRangeAtLevel
	// float GetPalletInRangeAtLevel();                                                                                      // [0x500f5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheBlight.HexUndying
/// Size: 0x0068 (0x000448 - 0x0004B0)
class UHexUndying : public UHexPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0448   (0x0058)  MISSED
	float                                              _revealAuraDistanceFromTotem;                               // 0x04A0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x04AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheBlight.HexUndying.GetRevealAuraDistanceFromTotemAtLevel
	// float GetRevealAuraDistanceFromTotemAtLevel();                                                                        // [0x5a16cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.HexUndying.Authority_UpdateHexPerkStatusView
	// void Authority_UpdateHexPerkStatusView(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable); // [0x5a16a40] Final|Native|Private 
	// Function /Script/TheBlight.HexUndying.Authority_OnSurvivorAdded
	// void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);                                                        // [0x5a169b0] Final|Native|Private 
	// Function /Script/TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk
	// void Authority_OnCamperCleansedHexPerk(FGameplayTag GameplayTag, FGameEventData& GameEventData);                      // [0x5a168a0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheBlight.Visionary
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UVisionary : public UPerk
{ 
public:
	float                                              _auraVisibilityRange;                                       // 0x03C8   (0x000C)  
	float                                              _cooldownDuration;                                          // 0x03D4   (0x000C)  


	/// Functions
	// Function /Script/TheBlight.Visionary.GetRangeAtLevel
	// float GetRangeAtLevel();                                                                                              // [0x500a800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheBlight.Visionary.GetCooldownAtLevel
	// float GetCooldownAtLevel();                                                                                           // [0x500a980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheBlight.WallGrabInteractionDefinition
/// Size: 0x0040 (0x000650 - 0x000690)
class UWallGrabInteractionDefinition : public UInteractionDefinition
{ 
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                 // 0x0648   (0x0008)  
	FDBDTunableRowHandle                               _wallDashAccelerationMultiplier;                            // 0x0650   (0x0028)  
	class ABlightPowerEstimatedCollisionIndicator*     _blightPowerCollisionIndicator;                             // 0x0678   (0x0008)  
	class UClass*                                      _collisionIndicatorActorClass;                              // 0x0680   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0688   (0x0008)  MISSED
};

