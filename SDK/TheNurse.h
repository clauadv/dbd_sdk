
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NetworkUtilities
/// dependency: StatSystem

/// Enum /Script/TheNurse.EBlinkPowerState
/// Size: 0x06
enum class EBlinkPowerState : uint8_t
{
	EBlinkPowerState__Ready                                                          = 0,
	EBlinkPowerState__ChainBlink                                                     = 1,
	EBlinkPowerState__AttackBlink                                                    = 2,
	EBlinkPowerState__AwaitingCooldown                                               = 3,
	EBlinkPowerState__Cooldown                                                       = 4,
	EBlinkPowerState__EBlinkPowerState_MAX                                           = 5
};

/// Class /Script/TheNurse.ActivateByBlinkAttackTimedEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UActivateByBlinkAttackTimedEffect : public UStatusEffect
{ 
public:
	float                                              _activationDuration;                                        // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0354   (0x0004)  MISSED
};

/// Class /Script/TheNurse.AnxiousGaspAddon
/// Size: 0x0090 (0x0002B8 - 0x000348)
class UAnxiousGaspAddon : public UItemAddon
{ 
public:
	class UAkAudioEvent*                               _screamSoundEvent;                                          // 0x02B8   (0x0008)  
	FGameplayTag                                       _scoreEventTag;                                             // 0x02C0   (0x000C)  
	float                                              _detectionCapsuleHalfHeight;                                // 0x02CC   (0x0004)  
	float                                              _detectionCapsuleRadius;                                    // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	class UCapsuleComponent*                           _survivorDetector;                                          // 0x02D8   (0x0008)  
	SDK_UNDEFINED(80,5174) /* TSet<AActor*> */         __um(_alreadyDetectedPlayers);                              // 0x02E0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0330   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheNurse.AnxiousGaspAddon.PlayScream
	// void PlayScream(class ACamperPlayer* Survivor);                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent|Const 
	// Function /Script/TheNurse.AnxiousGaspAddon.OnDetectorOverlapBegin
	// void OnDetectorOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5d9bf40] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheNurse.BaseInstantBlinkInteraction
/// Size: 0x0030 (0x000650 - 0x000680)
class UBaseInstantBlinkInteraction : public UInteractionDefinition
{ 
public:
	float                                              _blinkTimePercentage;                                       // 0x0648   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x064C   (0x0034)  MISSED
};

/// Class /Script/TheNurse.AutomaticBlinkInteraction
/// Size: 0x0030 (0x000680 - 0x0006B0)
class UAutomaticBlinkInteraction : public UBaseInstantBlinkInteraction
{ 
public:
	float                                              _blinkDistancePercent;                                      // 0x0678   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x067C   (0x0034)  MISSED
};

/// Class /Script/TheNurse.BadMansLastBreathAddon
/// Size: 0x0028 (0x0002B8 - 0x0002E0)
class UBadMansLastBreathAddon : public UItemAddon
{ 
public:
	float                                              _activationDuration;                                        // 0x02B8   (0x0004)  
	float                                              _cooldownDuration;                                          // 0x02BC   (0x0004)  
	class UClass*                                      _badMansLastBreathCooldownIndicatorStatusEffect;            // 0x02C0   (0x0008)  
	class UClass*                                      _badMansLastBreathUndetectableStatusEffect;                 // 0x02C8   (0x0008)  
	class UStatusEffect*                               _cooldownIndicator;                                         // 0x02D0   (0x0008)  
	class UStatusEffect*                               _undetectableEffect;                                        // 0x02D8   (0x0008)  
};

/// Class /Script/TheNurse.BalancedLanding
/// Size: 0x0080 (0x0003C8 - 0x000448)
class UBalancedLanding : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	class UClass*                                      _staggerReductionEffect;                                    // 0x03D0   (0x0008)  
	class UClass*                                      _activableExhaustedEffect;                                  // 0x03D8   (0x0008)  
	float                                              _sprintDuration;                                            // 0x03E0   (0x0004)  
	float                                              _exhaustionDurationPerLevel;                                // 0x03E4   (0x000C)  
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                           // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x03F8   (0x0050)  MISSED


	/// Functions
	// Function /Script/TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted
	// void Server_WarnBalancedLandingPredicted();                                                                           // [0x5905d40] Final|Net|NetReliableNative|Event|Private|NetServer|BlueprintCallable 
	// Function /Script/TheNurse.BalancedLanding.GetSprintDuration
	// float GetSprintDuration();                                                                                            // [0x5020cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BalancedLanding.GetExhaustionDurationAtLevel
	// float GetExhaustionDurationAtLevel();                                                                                 // [0x500a890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding
	// void Client_UnvalidateBalanceLanding();                                                                               // [0x501b910] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/TheNurse.BaseNursePerk
/// Size: 0x0000 (0x000480 - 0x000480)
class UBaseNursePerk : public USpawningEffectPerk
{ 
public:
};

/// Class /Script/TheNurse.BlinkAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UBlinkAttack : public UPounceAttack
{ 
public:
};

/// Class /Script/TheNurse.BlinkAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UBlinkAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheNurse.BlinkBackInteraction
/// Size: 0x0000 (0x000680 - 0x000680)
class UBlinkBackInteraction : public UBaseInstantBlinkInteraction
{ 
public:
};

/// Class /Script/TheNurse.BlinkIndicatorController
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UBlinkIndicatorController : public UActorComponent
{ 
public:
	class UClass*                                      _indicatorClass;                                            // 0x00B8   (0x0008)  
	FGameplayTag                                       _activationFlag;                                            // 0x00C0   (0x000C)  
	float                                              _indicatorMinimumVelocity;                                  // 0x00CC   (0x0004)  
	float                                              _indicatorVelocityEasingFactor;                             // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class AActor*                                      _indicator;                                                 // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x00E0   (0x0060)  MISSED
};

/// Class /Script/TheNurse.BlinkInteraction
/// Size: 0x0120 (0x000790 - 0x0008B0)
class UBlinkInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0790   (0x0058)  MISSED
	FStatProperty                                      _chargeTime;                                                // 0x07E8   (0x0088)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0870   (0x0040)  MISSED
};

/// Class /Script/TheNurse.BlinkPlayerComponent
/// Size: 0x0138 (0x0000B8 - 0x0001F0)
class UBlinkPlayerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FTunableStat                                       _maxBlinkDuration;                                          // 0x00D0   (0x0080)  
	FDBDTunableRowHandle                               _minBlinkDuration;                                          // 0x0150   (0x0028)  
	class UCurveFloat*                                 _blinkFOVCurve;                                             // 0x0178   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0180   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheNurse.BlinkPlayerComponent.Server_StartBlink
	// void Server_StartBlink(FBlinkParams Params);                                                                          // [0x5d9c220] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheNurse.BlinkPlayerComponent.Server_EndBlink
	// void Server_EndBlink();                                                                                               // [0x4db2a10] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheNurse.BlinkPlayerComponent.Multicast_StartBlink
	// void Multicast_StartBlink(FBlinkParams Params);                                                                       // [0x5d9bda0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheNurse.BlinkPlayerComponent.Multicast_EndBlink
	// void Multicast_EndBlink();                                                                                            // [0x4e01240] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheNurse.BlinkPlayerComponent.Local_OnMovementModeChanged
	// void Local_OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x5d9bc90] Final|Native|Private 
};

/// Class /Script/TheNurse.BlinkPowerDebugComponent
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UBlinkPowerDebugComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x00B8   (0x0070)  MISSED
};

/// Class /Script/TheNurse.BlinkPowerEventDispatcher
/// Size: 0x01E8 (0x0000B8 - 0x0002A0)
class UBlinkPowerEventDispatcher : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5175) /* FMulticastInlineDelegate */ __um(OnFinishPlaying);                                   // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,5176) /* FMulticastInlineDelegate */ __um(OnStartBlinkChargeEvent);                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,5177) /* FMulticastInlineDelegate */ __um(OnUpdateBlinkChargeEvent);                          // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,5178) /* FMulticastInlineDelegate */ __um(OnStopBlinkChargeEvent);                            // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,5179) /* FMulticastInlineDelegate */ __um(OnEnterBlinkEvent);                                 // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,5180) /* FMulticastInlineDelegate */ __um(OnUpdateBlinkEvent);                                // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,5181) /* FMulticastInlineDelegate */ __um(OnExitBlinkEvent);                                  // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,5182) /* FMulticastInlineDelegate */ __um(OnEnterChainBlinkEvent);                            // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,5183) /* FMulticastInlineDelegate */ __um(OnUpdateChainBlinkEvent);                           // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,5184) /* FMulticastInlineDelegate */ __um(OnExitChainBlinkEvent);                             // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,5185) /* FMulticastInlineDelegate */ __um(OnEnterCooldownEvent);                              // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,5186) /* FMulticastInlineDelegate */ __um(OnUpdateCooldownEvent);                             // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,5187) /* FMulticastInlineDelegate */ __um(OnExitCooldownEvent);                               // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,5188) /* FMulticastInlineDelegate */ __um(OnIsBlinkingChangedEvent);                          // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,5189) /* FMulticastInlineDelegate */ __um(OnIsChargingBlinkChangedEvent);                     // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,5190) /* FMulticastInlineDelegate */ __um(OnBlinkChargeFullEvent);                            // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,5191) /* FMulticastInlineDelegate */ __um(OnBlinkPowerStateChangedEvent);                     // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,5192) /* FMulticastInlineDelegate */ __um(OnBlinkChargesChangedEvent);                        // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC8];                                      // 0x01D8   (0x00C8)  MISSED
};

/// Class /Script/TheNurse.BlinkPowerItem
/// Size: 0x0028 (0x0004C8 - 0x0004F0)
class ABlinkPowerItem : public ACollectable
{ 
public:
	class UInteractor*                                 _powerInteractor;                                           // 0x04C8   (0x0008)  
	class UChargeableComponent*                        _blinkChargeable;                                           // 0x04D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x04D8   (0x0018)  MISSED
};

/// Class /Script/TheNurse.BlinkPowerPlayerComponent
/// Size: 0x0518 (0x0000B8 - 0x0005D0)
class UBlinkPowerPlayerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	FTunableStat                                       _maxBlinkCharges;                                           // 0x00E8   (0x0080)  
	FTunableStat                                       _rechargeDuration;                                          // 0x0168   (0x0080)  
	FTunableStat                                       _chainBlinkDuration;                                        // 0x01E8   (0x0080)  
	FGameplayTagContainer                              _allowedInteractionSemancticsDuringChainBlink;              // 0x0268   (0x0020)  
	FTunableStat                                       _fatigueDuration;                                           // 0x0288   (0x0080)  
	FTunableStat                                       _fatigueChainBlinkPenalty;                                  // 0x0308   (0x0080)  
	FTunableStat                                       _fatigueAttackPenalty;                                      // 0x0388   (0x0080)  
	FGameplayTag                                       _fatigueAttackMissPenaltyModifier;                          // 0x0408   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0414   (0x0004)  MISSED
	class UCurveFloat*                                 _fatigueSpeedCurve;                                         // 0x0418   (0x0008)  
	unsigned char                                      UnknownData02_5[0xAC];                                      // 0x0420   (0x00AC)  MISSED
	EBlinkPowerState                                   _powerState;                                                // 0x04CC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x04CD   (0x0003)  MISSED
	int32_t                                            _blinkCharges;                                              // 0x04D0   (0x0004)  
	bool                                               _wasCurrentChargeSetByRecharge;                             // 0x04D4   (0x0001)  
	unsigned char                                      UnknownData04_5[0xDB];                                      // 0x04D5   (0x00DB)  MISSED
	class UTimerObject*                                _chainBlinkTimer;                                           // 0x05B0   (0x0008)  
	class UTimerObject*                                _cooldownTimer;                                             // 0x05B8   (0x0008)  
	class UTimerObject*                                _rechargeTimer;                                             // 0x05C0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x05C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.Setup
	// void Setup(FBlinkPowerSetupParams& Params);                                                                           // [0x5d9c390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.Server_TriggerCooldown
	// void Server_TriggerCooldown(float Duration);                                                                          // [0x4e265c0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.Server_TriggerChainBlink
	// void Server_TriggerChainBlink(int32_t remainingBlinkCharges, float blinkTimeStamp);                                   // [0x5d9c2c0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.Server_SetState
	// void Server_SetState(EBlinkPowerState State);                                                                         // [0x5819020] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.Server_InterruptDuringChainBlink
	// void Server_InterruptDuringChainBlink(class AActor* interruptedPlayer);                                               // [0x58c5550] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkState
	// void OnRep_BlinkState(EBlinkPowerState oldState);                                                                     // [0x5d9c1a0] Final|Native|Private 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.OnRep_BlinkCharges
	// void OnRep_BlinkCharges();                                                                                            // [0x5d9c180] Final|Native|Private 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5d9c160] Final|Native|Private 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.OnAttackStarted
	// void OnAttackStarted(EAttackType attackType);                                                                         // [0x5d9bec0] Final|Native|Private 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.OnAttackFinished
	// void OnAttackFinished(EAttackType attackType);                                                                        // [0x5d9be40] Final|Native|Private 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.IsChargingBlink
	// bool IsChargingBlink();                                                                                               // [0x5d9bc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.IsChargeFull
	// bool IsChargeFull();                                                                                                  // [0x5d9bc30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.IsBlinking
	// bool IsBlinking();                                                                                                    // [0x5d9bc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetRechargeProgressPercent
	// float GetRechargeProgressPercent();                                                                                   // [0x5d9bbd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetPowerState
	// EBlinkPowerState GetPowerState();                                                                                     // [0x5d9bba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetCooldownTimerDuration
	// float GetCooldownTimerDuration();                                                                                     // [0x5d9bb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetCooldownRemainingTime
	// float GetCooldownRemainingTime();                                                                                     // [0x5d9bb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetCooldownProgressPercent
	// float GetCooldownProgressPercent();                                                                                   // [0x5d9bb10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetChainBlinkTimerDuration
	// float GetChainBlinkTimerDuration();                                                                                   // [0x5d9bae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetChainBlinkRemainingTime
	// float GetChainBlinkRemainingTime();                                                                                   // [0x5d9bab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetChainBlinkProgressPercent
	// float GetChainBlinkProgressPercent();                                                                                 // [0x5d9ba80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.BlinkPowerPlayerComponent.GetBlinkCharges
	// int32_t GetBlinkCharges();                                                                                            // [0x5d9ba50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheNurse.BlinkTargetFinder
/// Size: 0x0130 (0x0000B8 - 0x0001E8)
class UBlinkTargetFinder : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _minDistance;                                               // 0x00D0   (0x0028)  
	FTunableStat                                       _maxDistance;                                               // 0x00F8   (0x0080)  
	float                                              _floorRaycastStartZOffset;                                  // 0x0178   (0x0004)  
	float                                              _floorRaycastLength;                                        // 0x017C   (0x0004)  
	float                                              _locationClearStepHeight;                                   // 0x0180   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	TArray<float>                                      _horizontalSamplePercentages;                               // 0x0188   (0x0010)  
	float                                              _blinkBlockerSphereCastRadius;                              // 0x0198   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4C];                                      // 0x019C   (0x004C)  MISSED
};

/// Class /Script/TheNurse.DarkCinctureAddon
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class UDarkCinctureAddon : public UItemAddon
{ 
public:
	class UStatusEffect*                               _speedEffect;                                               // 0x02B8   (0x0008)  
	class UClass*                                      _speedEffectClass;                                          // 0x02C0   (0x0008)  
	float                                              _movementSpeedMultiplier;                                   // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/TheNurse.FragileWheezeAddon
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UFragileWheezeAddon : public UItemAddon
{ 
public:
	class UClass*                                      _mangledEffectClass;                                        // 0x02B8   (0x0008)  
};

/// Class /Script/TheNurse.IsChainBlinkingCondition
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UIsChainBlinkingCondition : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00F0   (0x0010)  MISSED
};

/// Class /Script/TheNurse.IsInChainBlinkWindowCondition
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UIsInChainBlinkWindowCondition : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00F0   (0x0028)  MISSED
};

/// Class /Script/TheNurse.K04AnimInstance
/// Size: 0x0060 (0x000610 - 0x000670)
class UK04AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isFullyCharged;                                            // 0x0610   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0611   (0x0003)  MISSED
	float                                              _blinkPlayRate;                                             // 0x0614   (0x0004)  
	float                                              _cooldownPlayRate;                                          // 0x0618   (0x0004)  
	bool                                               _isBlinking;                                                // 0x061C   (0x0001)  
	bool                                               _isBlinkReady;                                              // 0x061D   (0x0001)  
	bool                                               _isInCooldown;                                              // 0x061E   (0x0001)  
	bool                                               _isChargingBlink;                                           // 0x061F   (0x0001)  
	bool                                               _isChainBlinking;                                           // 0x0620   (0x0001)  
	bool                                               _isInterrupting;                                            // 0x0621   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0622   (0x0006)  MISSED
	class UAnimSequence*                               _blinkSequence;                                             // 0x0628   (0x0008)  
	class UAnimSequence*                               _cooldownSequence;                                          // 0x0630   (0x0008)  
	bool                                               _isChainBlinkAttacking;                                     // 0x0638   (0x0001)  
	unsigned char                                      UnknownData02_6[0x37];                                      // 0x0639   (0x0037)  MISSED


	/// Functions
	// Function /Script/TheNurse.K04AnimInstance.OnBlinkTriggered
	// void OnBlinkTriggered();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheNurse.KavanaghsLastBreathAddon
/// Size: 0x0020 (0x0002B8 - 0x0002D8)
class UKavanaghsLastBreathAddon : public UItemAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02B8   (0x0010)  MISSED
	class UClass*                                      _blindnessEffectClass;                                      // 0x02C8   (0x0008)  
	float                                              _maxBlindnessRange;                                         // 0x02D0   (0x0004)  
	float                                              _blindedEffectDuration;                                     // 0x02D4   (0x0004)  
};

/// Class /Script/TheNurse.MatchboxAddon
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UMatchboxAddon : public UItemAddon
{ 
public:
	float                                              _speedModifier;                                             // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	class UClass*                                      _speedOverrideEffectClass;                                  // 0x02C0   (0x0008)  
};

/// Class /Script/TheNurse.NurseAnimInstance
/// Size: 0x0080 (0x0002C0 - 0x000340)
class UNurseAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isBlinkReady;                                              // 0x02C0   (0x0001)  
	bool                                               _isChargingBlink;                                           // 0x02C1   (0x0001)  
	bool                                               _isFullyCharged;                                            // 0x02C2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x02C3   (0x0005)  MISSED
	class UAnimSequence*                               _blinkSequence;                                             // 0x02C8   (0x0008)  
	bool                                               _isChainBlinking;                                           // 0x02D0   (0x0001)  
	bool                                               _isBlinking;                                                // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x02D2   (0x0002)  MISSED
	float                                              _blinkPlayRate;                                             // 0x02D4   (0x0004)  
	class UAnimSequence*                               _cooldownSequence;                                          // 0x02D8   (0x0008)  
	bool                                               _isInCooldown;                                              // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02E1   (0x0003)  MISSED
	float                                              _cooldownPlayRate;                                          // 0x02E4   (0x0004)  
	bool                                               _isChainBlinkAttacking;                                     // 0x02E8   (0x0001)  
	bool                                               _isNurse;                                                   // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2E];                                      // 0x02EA   (0x002E)  MISSED
	class UAnimEffectHandler*                          _animEffectHandlerForSFX;                                   // 0x0318   (0x0008)  
	class UAnimEffectHandler*                          _animEffectHandlerForVFX;                                   // 0x0320   (0x0008)  
	class UClass*                                      _animEffectHandlerClassForSFX;                              // 0x0328   (0x0008)  
	class UClass*                                      _animEffectHandlerClassForVFX;                              // 0x0330   (0x0008)  
	class ASlasherPlayer*                              _mySlasher;                                                 // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/TheNurse.NurseAnimInstance.OnBlinkTriggered
	// void OnBlinkTriggered();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheNurse.NurseAttackPicker
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UNurseAttackPicker : public USlasherAttackPickerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheNurse.NurseFXInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UNurseFXInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheNurse.NurseFXInterface.Cosmetic_SpawnSpasmodicBreathVignette
	// void Cosmetic_SpawnSpasmodicBreathVignette();                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheNurse.NurseFXInterface.Cosmetic_OnSpasmodicBreathAddonEffectActive
	// void Cosmetic_OnSpasmodicBreathAddonEffectActive(bool activeValue);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheNurse.NurseHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UNurseHelper : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheNurse.NurseHelper.GetBlinkPowerItem
	// class ABlinkPowerItem* GetBlinkPowerItem(class ADBDPlayer* Player);                                                   // [0x5d9d2c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheNurse.SpasmodicBreathAddon
/// Size: 0x0040 (0x0002B8 - 0x0002F8)
class USpasmodicBreathAddon : public UItemAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x02B8   (0x0010)  MISSED
	class UClass*                                      _spasmodicBreathIndicatorStatusEffect;                      // 0x02C8   (0x0008)  
	class UClass*                                      _speedEffectClass;                                          // 0x02D0   (0x0008)  
	class UStatusEffect*                               _speedEffect;                                               // 0x02D8   (0x0008)  
	class UStatusEffect*                               _indicatorEffect;                                           // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02E8   (0x0004)  MISSED
	float                                              _speedModifier;                                             // 0x02EC   (0x0004)  
	float                                              _activationDuration;                                        // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02F4   (0x0004)  MISSED
};

/// Class /Script/TheNurse.SpeedOverrideEffect
/// Size: 0x0000 (0x000350 - 0x000350)
class USpeedOverrideEffect : public UStatusEffect
{ 
public:
};

/// Class /Script/TheNurse.StreetwiseEffect
/// Size: 0x0030 (0x0003B8 - 0x0003E8)
class UStreetwiseEffect : public UBaseLingeringStatusEffect
{ 
public:
	float                                              _range;                                                     // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x03BC   (0x002C)  MISSED


	/// Functions
	// Function /Script/TheNurse.StreetwiseEffect.Authority_OnInRangeChanged
	// void Authority_OnInRangeChanged(bool inRange);                                                                        // [0x5d9d1d0] Final|Native|Private 
};

/// Class /Script/TheNurse.ThanatophobiaEffect
/// Size: 0x0008 (0x000350 - 0x000358)
class UThanatophobiaEffect : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0350   (0x0008)  MISSED
};

/// Class /Script/TheNurse.ThanatophobiaPerk
/// Size: 0x0080 (0x000480 - 0x000500)
class UThanatophobiaPerk : public UBaseNursePerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0480   (0x0018)  MISSED
	float                                              _actionSpeedModifier;                                       // 0x0498   (0x000C)  
	float                                              _additionalActionSpeedModifier;                             // 0x04A4   (0x000C)  
	int32_t                                            _numSurvivorsForAdditionalSpeedModifier;                    // 0x04B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x04B4   (0x004C)  MISSED


	/// Functions
	// Function /Script/TheNurse.ThanatophobiaPerk.GetNumSurvivorsForAdditionalSpeedModifier
	// int32_t GetNumSurvivorsForAdditionalSpeedModifier();                                                                  // [0x5d9d350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.ThanatophobiaPerk.GetAdditionalActionSpeedModifierAtLevel
	// float GetAdditionalActionSpeedModifierAtLevel();                                                                      // [0x5d9d290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheNurse.ThanatophobiaPerk.GetActionSpeedModifierAtLevel
	// float GetActionSpeedModifierAtLevel();                                                                                // [0x5d9d260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TheNurse.BlinkParams
/// Size: 0x0014 (0x000000 - 0x000014)
struct FBlinkParams
{ 
	FVector                                            TargetTranslation;                                          // 0x0000   (0x000C)  
	float                                              Duration;                                                   // 0x000C   (0x0004)  
	float                                              Timestamp;                                                  // 0x0010   (0x0004)  
};

/// Struct /Script/TheNurse.BlinkPowerSetupParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBlinkPowerSetupParams
{ 
	class UTimerObject*                                ChainBlinkTimer;                                            // 0x0000   (0x0008)  
	class UTimerObject*                                CooldownTimer;                                              // 0x0008   (0x0008)  
	class UTimerObject*                                RechargeTimer;                                              // 0x0010   (0x0008)  
};

