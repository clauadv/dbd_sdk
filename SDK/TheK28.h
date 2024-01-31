
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDBots
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: NetworkUtilities
/// dependency: StatSystem

/// Enum /Script/TheK28.EK28NightCycleState
/// Size: 0x06
enum class EK28NightCycleState : uint8_t
{
	EK28NightCycleState__Charging                                                    = 0,
	EK28NightCycleState__TransitioningToDischarging                                  = 1,
	EK28NightCycleState__Discharging                                                 = 2,
	EK28NightCycleState__TransitioningToCharging                                     = 3,
	EK28NightCycleState__None                                                        = 4,
	EK28NightCycleState__EK28NightCycleState_MAX                                     = 5
};

/// Enum /Script/TheK28.EK28ExitLockerCameraBehaviour
/// Size: 0x04
enum class EK28ExitLockerCameraBehaviour : uint8_t
{
	EK28ExitLockerCameraBehaviour__None                                              = 0,
	EK28ExitLockerCameraBehaviour__AttachCameraOnKillerEyesJoint                     = 1,
	EK28ExitLockerCameraBehaviour__SetKillerAsPlayerViewTarget                       = 2,
	EK28ExitLockerCameraBehaviour__EK28ExitLockerCameraBehaviour_MAX                 = 3
};

/// Enum /Script/TheK28.EK28LockbarState
/// Size: 0x04
enum class EK28LockbarState : uint8_t
{
	EK28LockbarState__Unlocked                                                       = 0,
	EK28LockbarState__Locked                                                         = 1,
	EK28LockbarState__Broken                                                         = 2,
	EK28LockbarState__EK28LockbarState_MAX                                           = 3
};

/// Enum /Script/TheK28.EK28RemnantState
/// Size: 0x05
enum class EK28RemnantState : uint8_t
{
	EK28RemnantState__Inactive                                                       = 0,
	EK28RemnantState__Active                                                         = 1,
	EK28RemnantState__Deactivating                                                   = 2,
	EK28RemnantState__IsKillerTarget                                                 = 3,
	EK28RemnantState__EK28RemnantState_MAX                                           = 4
};

/// Enum /Script/TheK28.EK28TeleportInteractionState
/// Size: 0x07
enum class EK28TeleportInteractionState : uint8_t
{
	EK28TeleportInteractionState__Idle                                               = 0,
	EK28TeleportInteractionState__ChargingTeleportation                              = 1,
	EK28TeleportInteractionState__ReadyToTeleport                                    = 2,
	EK28TeleportInteractionState__Teleporting                                        = 3,
	EK28TeleportInteractionState__TeleportationCompleted                             = 4,
	EK28TeleportInteractionState__TeleportationAborted                               = 5,
	EK28TeleportInteractionState__EK28TeleportInteractionState_MAX                   = 6
};

/// Class /Script/TheK28.Addon_K28Power_04
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UAddon_K28Power_04 : public UItemAddon
{ 
public:
};

/// Class /Script/TheK28.Addon_K28Power
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class UAddon_K28Power : public UOnEventBaseAddon
{ 
public:
	TArray<class UClass*>                              _survivorImposedEffectClasses;                              // 0x02C8   (0x0010)  
	float                                              _statusEffectTime;                                          // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02DC   (0x0004)  MISSED
};

/// Class /Script/TheK28.AISkill_FindInteractable_Lockbar
/// Size: 0x0138 (0x000198 - 0x0002D0)
class UAISkill_FindInteractable_Lockbar : public UAISkill_FindInteractable
{ 
public:
	float                                              LockerTopHeightDiffFromActorLocation;                       // 0x0198   (0x0004)  
	FAITunableParameter                                LockbarMaxDistanceFromCamper;                               // 0x019C   (0x0010)  
	FAITunableParameter                                LockbarMaxDistanceFromCamperTolerance;                      // 0x01AC   (0x0010)  
	FAITunableParameter                                MinLockbarWeight;                                           // 0x01BC   (0x0010)  
	FAITunableParameter                                MaxLockbarWeight;                                           // 0x01CC   (0x0010)  
	FAITunableParameter                                HighLockbarWeightLastSeconds;                               // 0x01DC   (0x0010)  
	FAITunableParameter                                MinDistanceToReachMaxLockbarWeight;                         // 0x01EC   (0x0010)  
	FAITunableParameter                                MaxDistanceToReachMinLockbarWeight;                         // 0x01FC   (0x0010)  
	FAITunableParameter                                MaxDistanceToReachMinLockbarWeightIfNearGenerator;          // 0x020C   (0x0010)  
	FAITunableParameter                                MaxHeightDifferenceFromGenerator;                           // 0x021C   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x022C   (0x00A4)  MISSED
};

/// Class /Script/TheK28.BTService_FindObject_K28Remnant
/// Size: 0x0008 (0x000208 - 0x000210)
class UBTService_FindObject_K28Remnant : public UBTService_FindObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Class /Script/TheK28.K28TeleportTarget
/// Size: 0x0000 (0x000030 - 0x000030)
class UK28TeleportTarget : public UInterface
{ 
public:
};

/// Class /Script/TheK28.IsInRangeOfK28UsedLocker
/// Size: 0x0038 (0x0000F8 - 0x000130)
class UIsInRangeOfK28UsedLocker : public URangeBasedCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00F8   (0x0038)  MISSED
};

/// Class /Script/TheK28.K28AnimInstance
/// Size: 0x0040 (0x000610 - 0x000650)
class UK28AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isInLocker;                                                // 0x0610   (0x0001)  
	bool                                               _isInChase;                                                 // 0x0611   (0x0001)  
	bool                                               _isChargingTeleportation;                                   // 0x0612   (0x0001)  
	bool                                               _hasTeleportationPowerCharged;                              // 0x0613   (0x0001)  
	bool                                               _hasTeleportationBeenCancelled;                             // 0x0614   (0x0001)  
	bool                                               _hideHandsInFPV;                                            // 0x0615   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0616   (0x0002)  MISSED
	class UClass*                                      _customizationAnimationSelectorClass;                       // 0x0618   (0x0008)  
	class UCustomizationAnimationSelector*             _customizationAnimationSelector;                            // 0x0620   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0628   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK28.K28AnimInstance.GetCustomAnimationTags
	// TArray<FName> GetCustomAnimationTags();                                                                               // [0x5be5060] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28AnimInstance.GetAnimationMappingIndex
	// int32_t GetAnimationMappingIndex();                                                                                   // [0x5be5030] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28AnimInstance.BP_OnCustomizationAnimationMappingIDChanged
	// void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK28.K28CheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK28CheatComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/TheK28.K28CheatComponent.DBD_K28UnlockAllLockbars
	// void DBD_K28UnlockAllLockbars();                                                                                      // [0x4592da0] Final|Exec|Native|Public 
	// Function /Script/TheK28.K28CheatComponent.DBD_K28TriggerNextNightCycle
	// void DBD_K28TriggerNextNightCycle();                                                                                  // [0x5be5010] Final|Exec|Native|Public 
	// Function /Script/TheK28.K28CheatComponent.DBD_K28SetPowerNoCooldown
	// void DBD_K28SetPowerNoCooldown(bool noCooldown);                                                                      // [0x581c030] Final|Exec|Native|Public 
	// Function /Script/TheK28.K28CheatComponent.DBD_K28LockAllLockbars
	// void DBD_K28LockAllLockbars();                                                                                        // [0x5be4ff0] Final|Exec|Native|Public 
	// Function /Script/TheK28.K28CheatComponent.DBD_K28DisplayLockerClusters
	// void DBD_K28DisplayLockerClusters(float secondsToDisplayDebugElements);                                               // [0x496cad0] Final|Exec|Native|Public 
	// Function /Script/TheK28.K28CheatComponent.DBD_K28DebugCosmetics
	// void DBD_K28DebugCosmetics(bool noCooldown);                                                                          // [0x581c030] Final|Exec|Native|Public 
	// Function /Script/TheK28.K28CheatComponent.DBD_K28BreakAllLocks
	// void DBD_K28BreakAllLocks();                                                                                          // [0x5be4fd0] Final|Exec|Native|Public 
};

/// Class /Script/TheK28.K28DayNightComponent
/// Size: 0x0570 (0x0000B8 - 0x000628)
class UK28DayNightComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	class UClass*                                      _killerK28ComponentClass;                                   // 0x0100   (0x0008)  
	class UClass*                                      _survivorK28ComponentClass;                                 // 0x0108   (0x0008)  
	FDBDTunableRowHandle                               _chargesRequiredForNightCharge;                             // 0x0110   (0x0028)  
	FDBDTunableRowHandle                               _transitionToNightDuration;                                 // 0x0138   (0x0028)  
	FDBDTunableRowHandle                               _transitiionToDayDuration;                                  // 0x0160   (0x0028)  
	FTunableStat                                       _chargesRequiredForNightDischarge;                          // 0x0188   (0x0080)  
	FTunableStat                                       _killerInjuresSurvivorChargeAmount;                         // 0x0208   (0x0080)  
	FTunableStat                                       _killerHookSurvivorChargeAmount;                            // 0x0288   (0x0080)  
	FDBDTunableRowHandle                               _killerTeleportsToRemnantChargeAmount;                      // 0x0308   (0x0028)  
	FTunableStat                                       _defaultNightChargeTime;                                    // 0x0330   (0x0080)  
	FTunableStat                                       _injuredSurvivorsChargeTime;                                // 0x03B0   (0x0080)  
	FTunableStat                                       _killerHidingInLockerChargeTime;                            // 0x0430   (0x0080)  
	FDBDTunableRowHandle                               _defaultNightTimeDischargeRate;                             // 0x04B0   (0x0028)  
	FDBDTunableRowHandle                               _survivorInLockerDischargeRate;                             // 0x04D8   (0x0028)  
	FDBDTunableRowHandle                               _nighttimeNearingActivationThresholdPercent;                // 0x0500   (0x0028)  
	FDBDTunableRowHandle                               _nightCycleNearingEndThresholdPercent;                      // 0x0528   (0x0028)  
	EK28NightCycleState                                _currentNightCycleState;                                    // 0x0550   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1F];                                      // 0x0551   (0x001F)  MISSED
	int32_t                                            _authority_numberInjuredSurvivors;                          // 0x0570   (0x0004)  
	float                                              _maxChargeAmount;                                           // 0x0574   (0x0004)  
	float                                              _currentChargeAmount;                                       // 0x0578   (0x0004)  
	unsigned char                                      UnknownData02_5[0x35];                                      // 0x057C   (0x0035)  MISSED
	bool                                               _nighttimeNearingActivationThresholdReached;                // 0x05B1   (0x0001)  
	bool                                               _hasReachedNightCycleNearEndThreshold;                      // 0x05B2   (0x0001)  
	unsigned char                                      UnknownData03_5[0x45];                                      // 0x05B3   (0x0045)  MISSED
	FTagStateBool                                      _killerIsAtNightfall;                                       // 0x05F8   (0x0030)  


	/// Functions
	// Function /Script/TheK28.K28DayNightComponent.OnRep_NighttimeNearingActivation
	// void OnRep_NighttimeNearingActivation();                                                                              // [0x5be5960] Final|Native|Private 
	// Function /Script/TheK28.K28DayNightComponent.OnRep_HasReachedNightCycleNearEndThreshold
	// void OnRep_HasReachedNightCycleNearEndThreshold();                                                                    // [0x5be5920] Final|Native|Private 
	// Function /Script/TheK28.K28DayNightComponent.OnRep_CurrentDayNightCycle
	// void OnRep_CurrentDayNightCycle();                                                                                    // [0x5be5900] Final|Native|Private 
	// Function /Script/TheK28.K28DayNightComponent.Cosmetic_OnNightCycleChanged
	// void Cosmetic_OnNightCycleChanged(class UAkComponent* AkComponent, EK28NightCycleState newNightCycleState);           // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28DayNightComponent.Cosmetic_OnIsInLastTwentySecondsOfNightCycle
	// void Cosmetic_OnIsInLastTwentySecondsOfNightCycle(class UAkComponent* AkComponent);                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28DayNightComponent.Authority_OnSurvivorDamageStateChanged
	// void Authority_OnSurvivorDamageStateChanged(ECamperDamageState PreviousDamageState, ECamperDamageState newDamageState); // [0x5be4f00] Final|Native|Private 
	// Function /Script/TheK28.K28DayNightComponent.Authority_OnIntroCompleted
	// void Authority_OnIntroCompleted();                                                                                    // [0x5be4e10] Final|Native|Private 
};

/// Class /Script/TheK28.K28FXInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UK28FXInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheK28.K28FXInterface.Cosmetic_TriggerFadeOut
	// void Cosmetic_TriggerFadeOut();                                                                                       // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_TriggerFadeIn
	// void Cosmetic_TriggerFadeIn();                                                                                        // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_SetDebugCosmetics
	// void Cosmetic_SetDebugCosmetics(bool isDebugCosmeticsActive);                                                         // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_SetBlackMaterialOnKiller
	// void Cosmetic_SetBlackMaterialOnKiller(bool blackMaterialApplied);                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnTeleportCooldownEnded
	// void Cosmetic_OnTeleportCooldownEnded();                                                                              // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnTeleportationToLockerStart
	// void Cosmetic_OnTeleportationToLockerStart(float teleportationDuration, bool isKillerAlreadyHidingInLocker);          // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnTeleportationToLockerEnd
	// void Cosmetic_OnTeleportationToLockerEnd();                                                                           // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnShowKiller
	// void Cosmetic_OnShowKiller(bool isInstantShow);                                                                       // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnLockerTeleportTargetHighlighted
	// void Cosmetic_OnLockerTeleportTargetHighlighted();                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnLocallyObservedChanged
	// void Cosmetic_OnLocallyObservedChanged();                                                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnKillerEnterLocker
	// void Cosmetic_OnKillerEnterLocker();                                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnIsKillingSurvivorWithMoriStateChanged
	// void Cosmetic_OnIsKillingSurvivorWithMoriStateChanged(bool isKillingSurvivorWithMori);                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnHideKiller
	// void Cosmetic_OnHideKiller();                                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnChargeTeleportStart
	// void Cosmetic_OnChargeTeleportStart();                                                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnChargeTeleportComplete
	// void Cosmetic_OnChargeTeleportComplete();                                                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28FXInterface.Cosmetic_OnChargeTeleportCancelled
	// void Cosmetic_OnChargeTeleportCancelled();                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK28.K28IsNightCycleState
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UK28IsNightCycleState : public UEventDrivenModifierCondition
{ 
public:
	EK28NightCycleState                                _nightCycleState;                                           // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00F1   (0x000F)  MISSED


	/// Functions
	// Function /Script/TheK28.K28IsNightCycleState.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5be5720] Final|Native|Private 
};

/// Class /Script/TheK28.K28PlayerComponent
/// Size: 0x00D0 (0x0000B8 - 0x000188)
class UK28PlayerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(8,4209) /* TWeakObjectPtr<UK28DayNightComponent*> */ __um(_dayNightComponent);                   // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00C0   (0x0008)  MISSED
	FDBDTunableRowHandle                               _nightEffectMinimumDistance;                                // 0x00C8   (0x0028)  
	FDBDTunableRowHandle                               _nightEffectMaximumDistance;                                // 0x00F0   (0x0028)  
	unsigned char                                      UnknownData01_5[0x60];                                      // 0x0118   (0x0060)  MISSED
	TArray<FGameplayTag>                               _stateTagsToDisableNightMode;                               // 0x0178   (0x0010)  


	/// Functions
	// Function /Script/TheK28.K28PlayerComponent.OnSurvivorInRangeChanged
	// void OnSurvivorInRangeChanged(bool inRange, class ACamperPlayer* Player);                                             // [0x5bea1c0] Final|Native|Private 
	// Function /Script/TheK28.K28PlayerComponent.OnRep_DayNightComponent
	// void OnRep_DayNightComponent();                                                                                       // [0x4dd4880] Native|Protected     
};

/// Class /Script/TheK28.K28KillerComponent
/// Size: 0x0008 (0x000188 - 0x000190)
class UK28KillerComponent : public UK28PlayerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0188   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK28.K28KillerComponent.Cosmetic_OnNighttimeNearingActivation
	// void Cosmetic_OnNighttimeNearingActivation(class ASlasherPlayer* killer);                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28KillerComponent.Cosmetic_OnNightCycleStateChanged
	// void Cosmetic_OnNightCycleStateChanged(class ASlasherPlayer* killer, EK28NightCycleState dayNightCycleState, bool instant); // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK28.K28KillerEnterLockerInteraction
/// Size: 0x0030 (0x000680 - 0x0006B0)
class UK28KillerEnterLockerInteraction : public UBaseLockerInteraction
{ 
public:
	float                                              _hideKillerTimePercentage;                                  // 0x0678   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x067C   (0x0034)  MISSED


	/// Functions
	// Function /Script/TheK28.K28KillerEnterLockerInteraction.IsKillerAllowedToEnterLocker
	// bool IsKillerAllowedToEnterLocker(class ADBDPlayer* Player);                                                          // [0x5be50e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK28.K28KillerExitLockerInteraction
/// Size: 0x00B0 (0x000680 - 0x000730)
class UK28KillerExitLockerInteraction : public UBaseLockerInteraction
{ 
public:
	EK28ExitLockerCameraBehaviour                      _cameraBehaviour;                                           // 0x0678   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0679   (0x0007)  MISSED
	FDBDTunableRowHandle                               _timeSearchLockerInteractionBlocked;                        // 0x0680   (0x0028)  
	float                                              _minDotProductFadeOutThreshold;                             // 0x06A8   (0x0004)  
	float                                              _rotationMaxTime;                                           // 0x06AC   (0x0004)  
	float                                              _fadeOutTime;                                               // 0x06B0   (0x0004)  
	float                                              _fovChangeTime;                                             // 0x06B4   (0x0004)  
	class UCurveFloat*                                 _fovChangeTeleportationCurve;                               // 0x06B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x06C0   (0x0070)  MISSED
};

/// Class /Script/TheK28.K28KillerExitLockedLockerInteraction
/// Size: 0x0050 (0x000730 - 0x000780)
class UK28KillerExitLockedLockerInteraction : public UK28KillerExitLockerInteraction
{ 
public:
	float                                              _lockbarBreakTimePercentage;                                // 0x0730   (0x0004)  
	float                                              _minInteractionTime;                                        // 0x0734   (0x0004)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0738   (0x0048)  MISSED
};

/// Class /Script/TheK28.K28KillerExitLockerWithSurvivorInteraction
/// Size: 0x00A0 (0x000730 - 0x0007D0)
class UK28KillerExitLockerWithSurvivorInteraction : public UK28KillerExitLockerInteraction
{ 
public:
	float                                              _waitTimeBeforeSettingIntoCarryState;                       // 0x0730   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0734   (0x000C)  MISSED
	FAnimationMontageDescriptor                        _montageFromTeleportation;                                  // 0x0740   (0x0020)  
	FAnimationMontageDescriptor                        _montageFromAbduction;                                      // 0x0760   (0x0020)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0780   (0x0050)  MISSED
};

/// Class /Script/TheK28.K28KillerInstinctEffect
/// Size: 0x00D8 (0x000350 - 0x000428)
class UK28KillerInstinctEffect : public UStatusEffect
{ 
public:
	FTunableStat                                       _secondsToLinger;                                           // 0x0350   (0x0080)  
	FDBDTunableRowHandle                               _maxDistanceToApplyRemnantTeleportKillerInstinct;           // 0x03D0   (0x0028)  
	class UClass*                                      _lingeringEffectClass;                                      // 0x03F8   (0x0008)  
	class UStatusEffect*                               _lingeringEffect;                                           // 0x0400   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0408   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK28.K28KillerInstinctEffect.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5be4ee0] Final|Native|Private 
	// Function /Script/TheK28.K28KillerInstinctEffect.Authority_OnKillerInstinctApplicableChanged
	// void Authority_OnKillerInstinctApplicableChanged(bool Active);                                                        // [0x5be4e30] Final|Native|Private 
};

/// Struct /Script/TheK28.K28KillerLockerState
/// Size: 0x0010 (0x000000 - 0x000010)
struct FK28KillerLockerState
{ 
	class UK28LockerComponent*                         _lockerUsedByKiller;                                        // 0x0000   (0x0008)  
	bool                                               _isTeleportingToLocker;                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/TheK28.K28KillerLockerComponent
/// Size: 0x0150 (0x0000B8 - 0x000208)
class UK28KillerLockerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FDBDTunableRowHandle                               _targetLockerFOV;                                           // 0x00D0   (0x0028)  
	class UCurveFloat*                                 _fovChangeTeleportationCurve;                               // 0x00F8   (0x0008)  
	float                                              _fovChangeTime;                                             // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FK28KillerLockerState                              _lockerState_replicated;                                    // 0x0108   (0x0010)  
	unsigned char                                      UnknownData02_5[0xA0];                                      // 0x0118   (0x00A0)  MISSED
	class UClass*                                      _extraArmsAnimationFollowerActorClass;                      // 0x01B8   (0x0008)  
	class AAnimationFollowerActor*                     _extraArmsAnimationFollowerActor;                           // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x01C8   (0x0008)  MISSED
	float                                              _timeBetweenAttemptTrigger;                                 // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x34];                                      // 0x01D4   (0x0034)  MISSED


	/// Functions
	// Function /Script/TheK28.K28KillerLockerComponent.OnRep_LockerState_Replicated
	// void OnRep_LockerState_Replicated();                                                                                  // [0x5be5940] Final|Native|Private 
	// Function /Script/TheK28.K28KillerLockerComponent.OnPlayerInLockerChanged
	// void OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker);          // [0x5be5830] Final|Native|Private 
};

/// Class /Script/TheK28.K28KillerPlayerViewComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UK28KillerPlayerViewComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00B8   (0x0028)  MISSED
};

/// Class /Script/TheK28.K28KillerTeleportationComponent
/// Size: 0x0248 (0x0000B8 - 0x000300)
class UK28KillerTeleportationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FTunableStat                                       _teleportationSpeed_DayCycle;                               // 0x00D0   (0x0080)  
	FDBDTunableRowHandle                               _teleportationSpeed_NightCycle;                             // 0x0150   (0x0028)  
	FDBDTunableRowHandle                               _teleportationTimeForSurvivorGrab;                          // 0x0178   (0x0028)  
	FAnimationMontageDescriptor                        _survivorPanicInLockerAnimationMontageDescriptor;           // 0x01A0   (0x0020)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x01C0   (0x0010)  MISSED
	FTagStateBool                                      _isTeleporting;                                             // 0x01D0   (0x0030)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0200   (0x0008)  MISSED
	class UCurveFloat*                                 _defaultTeleportationCurve;                                 // 0x0208   (0x0008)  
	class UCurveFloat*                                 _grabTeleportationCurve;                                    // 0x0210   (0x0008)  
	unsigned char                                      UnknownData03_5[0xD8];                                      // 0x0218   (0x00D8)  MISSED
	TArray<class AActor*>                              _actorsHiddenDuringTeleport;                                // 0x02F0   (0x0010)  


	/// Functions
	// Function /Script/TheK28.K28KillerTeleportationComponent.OnPlayerFinishedEnteringLocker
	// void OnPlayerFinishedEnteringLocker(class ADBDPlayer* playerThatWasInLocker, class ADBDPlayer* playerNowInLocker);    // [0x5be5760] Final|Native|Private 
	// Function /Script/TheK28.K28KillerTeleportationComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5be5740] Final|Native|Private 
	// Function /Script/TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerStart
	// void Multicast_TeleportToLockerStart(FK28SecondaryCameraMovementData cameraMovementData, class UK28LockerComponent* lockerBeingTeleportedTo, class ACamperPlayer* survivorToGrab); // [0x5be5500] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28KillerTeleportationComponent.Multicast_TeleportToLockerEnd
	// void Multicast_TeleportToLockerEnd(class UK28LockerComponent* lockerTeleportedTo, class ACamperPlayer* survivorInLocker); // [0x4d828a0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28KillerTeleportationComponent.Local_OnTeleportCollisionOverlapEnd
	// void Local_OnTeleportCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5be53a0] Final|Native|Private 
	// Function /Script/TheK28.K28KillerTeleportationComponent.Local_OnTeleportCollisionOverlapBegin
	// void Local_OnTeleportCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5be5180] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK28.K28LockAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UK28LockAnimInstance : public UAnimInstance
{ 
public:
	EK28LockbarState                                   _lockbarState;                                              // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02C1   (0x000F)  MISSED
};

/// Class /Script/TheK28.K28Lockbar
/// Size: 0x0078 (0x000248 - 0x0002C0)
class AK28Lockbar : public ABaseLockerItem
{ 
public:
	EK28LockbarState                                   _state;                                                     // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0249   (0x0007)  MISSED
	class UStaticMesh*                                 _lockbarStaticMesh;                                         // 0x0250   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMeshComponent;                                     // 0x0258   (0x0008)  
	class UStaticMeshComponent*                        _staticLockMesh;                                            // 0x0260   (0x0008)  
	class UBoxComponent*                               _boxComponent;                                              // 0x0268   (0x0008)  
	class UBaseActorAttackableComponent*               _lockAttackableComponent;                                   // 0x0270   (0x0008)  
	class UMontagePlayer*                              _montagePlayer;                                             // 0x0278   (0x0008)  
	class UAnimationMontageSlave*                      _animationMontageSlave;                                     // 0x0280   (0x0008)  
	FTagStateBool                                      _isLocked;                                                  // 0x0288   (0x0030)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK28.K28Lockbar.OnRep_State
	// void OnRep_State();                                                                                                   // [0x5bea180] Final|Native|Private 
	// Function /Script/TheK28.K28Lockbar.OnPlayerInLockerChanged
	// void OnPlayerInLockerChanged(class ADBDPlayer* previousPlayerInLocker, class ADBDPlayer* newPlayerInLocker);          // [0x5bea070] Final|Native|Private 
	// Function /Script/TheK28.K28Lockbar.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x5bea050] Final|Native|Private 
	// Function /Script/TheK28.K28Lockbar.GetMontagePlayer
	// class UMontagePlayer* GetMontagePlayer();                                                                             // [0x5be9af0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28Lockbar.Cosmetic_TriggerLockbarBreak
	// void Cosmetic_TriggerLockbarBreak();                                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/TheK28.K28Lockbar.Cosmetic_SetLockbarHighlightActivationState
	// void Cosmetic_SetLockbarHighlightActivationState(bool isHightlightActive);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28Lockbar.Cosmetic_OnStateChanged
	// void Cosmetic_OnStateChanged(EK28LockbarState NewState);                                                              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK28.K28LockerComponent
/// Size: 0x0250 (0x0000B8 - 0x000308)
class UK28LockerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	class AK28LockerCosmeticHelperActor*               _lockerCosmeticHelper;                                      // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	float                                              _aiWarningSoundTimeInterval;                                // 0x00E0   (0x0004)  
	float                                              _aiWarningSoundRange;                                       // 0x00E4   (0x0004)  
	FDBDTunableRowHandle                               _timeToTriggerWarningReveal;                                // 0x00E8   (0x0028)  
	FDBDTunableRowHandle                               _minDistanceFromHookedSurvivor;                             // 0x0110   (0x0028)  
	FDBDTunableRowHandle                               _minDistanceFromKillerForTeleportationEligibility;          // 0x0138   (0x0028)  
	FAnimationMontageDescriptor                        _lockerShakeTeleportAnimation;                              // 0x0160   (0x0020)  
	FAnimationMontageDescriptor                        _lockerTeleportCompletedAnimation;                          // 0x0180   (0x0020)  
	FAnimationMontageDescriptor                        _lockerTeleportationAbductionAnimation;                     // 0x01A0   (0x0020)  
	TArray<class UClass*>                              _lockerInteractionClasses;                                  // 0x01C0   (0x0010)  
	class UClass*                                      _lockerCosmeticHelperClass;                                 // 0x01D0   (0x0008)  
	class UClass*                                      _lockerGrabOverridingClass;                                 // 0x01D8   (0x0008)  
	TArray<class UClass*>                              _lockerInteractionClassesToOverride;                        // 0x01E0   (0x0010)  
	TArray<FCustomLockerOutlineOverride>               _lockedOutlineOverrides;                                    // 0x01F0   (0x0010)  
	float                                              _maxSqrtDistanceForCluster;                                 // 0x0200   (0x0004)  
	float                                              _minDotProductForCluster;                                   // 0x0204   (0x0004)  
	FVector                                            _lockerLineTraceOffset;                                     // 0x0208   (0x000C)  
	unsigned char                                      UnknownData02_5[0xD0];                                      // 0x0214   (0x00D0)  MISSED
	float                                              _abductionCameraOffset;                                     // 0x02E4   (0x0004)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x02E8   (0x0018)  MISSED
	class ASlasherPlayer*                              _killer;                                                    // 0x0300   (0x0008)  
};

/// Class /Script/TheK28.K28LockerCosmeticHelperActor
/// Size: 0x0020 (0x000230 - 0x000250)
class AK28LockerCosmeticHelperActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0230   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.OnAssociatedLockerActorSet
	// void OnAssociatedLockerActorSet();                                                                                    // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.GetSkeletalMesh
	// class USkeletalMeshComponent* GetSkeletalMesh();                                                                      // [0x5be9b20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.GetMaterialHelper
	// class UMaterialHelper* GetMaterialHelper();                                                                           // [0x5be9ac0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.GetLocker
	// class ALocker* GetLocker();                                                                                           // [0x50030a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockerGrabStateChanged
	// void Cosmetic_OnLockerGrabStateChanged(bool isLockerGrabOngoing);                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnLockedStateChanged
	// void Cosmetic_OnLockedStateChanged(bool isLockerLocked);                                                              // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerStart
	// void Cosmetic_OnKillerTeleportationToLockerStart();                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerTeleportationToLockerEnd
	// void Cosmetic_OnKillerTeleportationToLockerEnd();                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerInsideLockerRevealed
	// void Cosmetic_OnKillerInsideLockerRevealed();                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerExitLocker
	// void Cosmetic_OnKillerExitLocker();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28LockerCosmeticHelperActor.Cosmetic_OnKillerEnteredLocker
	// void Cosmetic_OnKillerEnteredLocker();                                                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK28.K28LockerEntitySpikesUpdateStrategy
/// Size: 0x0018 (0x0000E0 - 0x0000F8)
class UK28LockerEntitySpikesUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _outlineColor;                                              // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/TheK28.K28LockerTeleportSwapInteraction
/// Size: 0x0020 (0x000650 - 0x000670)
class UK28LockerTeleportSwapInteraction : public UInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0650   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK28.K28LockerTeleportSwapInteraction.Server_RequestTeleportToTarget
	// void Server_RequestTeleportToTarget(class ASlasherPlayer* killer, class UActorComponent* teleportTarget);             // [0x5bea290] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK28.K28LockerTeleportSwapInteraction.Multicast_RefuseTeleportationRequest
	// void Multicast_RefuseTeleportationRequest();                                                                          // [0x5be9ce0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28LockerTeleportSwapInteraction.Multicast_ConfirmTeleportationRequest
	// void Multicast_ConfirmTeleportationRequest(class ASlasherPlayer* killer, class UActorComponent* teleportTarget);      // [0x5be9c10] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28LockerTeleportSwapInteraction.Multicast_CompleteTeleportation
	// void Multicast_CompleteTeleportation();                                                                               // [0x5afca50] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK28.K28LockLockbarInteraction
/// Size: 0x0000 (0x000680 - 0x000680)
class UK28LockLockbarInteraction : public UBaseLockerInteraction
{ 
public:
};

/// Class /Script/TheK28.K28MenuAnimInstance
/// Size: 0x0010 (0x000300 - 0x000310)
class UK28MenuAnimInstance : public UBaseMenuAnimInstance
{ 
public:
	class UClass*                                      _customizationAnimationSelectorClass;                       // 0x02F8   (0x0008)  
	class UCustomizationAnimationSelector*             _customizationAnimationSelector;                            // 0x0300   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0308   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK28.K28MenuAnimInstance.GetAnimationMappingIndex
	// int32_t GetAnimationMappingIndex();                                                                                   // [0x5be9a20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28MenuAnimInstance.BP_OnCustomizationAnimationMappingIDChanged
	// void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK28.K28P01
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class UK28P01 : public UPerk
{ 
public:
	float                                              _perkActivationDuration;                                    // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _effectClass;                                               // 0x03D8   (0x0008)  
	float                                              _injuryTimerDuration;                                       // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	class UTimerObject*                                _injuryTimer;                                               // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x03F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK28.K28P01.GetPerkActivationDurationAtLevel
	// float GetPerkActivationDurationAtLevel();                                                                             // [0x4fe80b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28P01.GetInjuryTimerDuration
	// float GetInjuryTimerDuration();                                                                                       // [0x4ffe5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK28.K28P01Effect
/// Size: 0x0008 (0x000350 - 0x000358)
class UK28P01Effect : public UStatusEffect
{ 
public:
	class ADBDPlayer*                                  _playerOwner;                                               // 0x0350   (0x0008)  
};

/// Class /Script/TheK28.K28P02
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class UK28P02 : public UPerk
{ 
public:
	float                                              PerkActivationTime;                                         // 0x03C8   (0x0004)  
	float                                              LockerDetectionRadius;                                      // 0x03CC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x03D0   (0x0008)  MISSED
	class UClass*                                      _timedRevealToKillerEffectClass;                            // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/TheK28.K28P02.GetPerkActivationTime
	// float GetPerkActivationTime();                                                                                        // [0x4ff9160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28P02.GetLockerDetectionRadius
	// float GetLockerDetectionRadius();                                                                                     // [0x4fe82c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TheK28.K28InteractionPreventingTagsModification
/// Size: 0x0028 (0x000000 - 0x000028)
struct FK28InteractionPreventingTagsModification
{ 
	class UClass*                                      InteractionToAddPreventingTagTo;                            // 0x0000   (0x0008)  
	FGameplayTagContainer                              PreventingTags;                                             // 0x0008   (0x0020)  
};

/// Class /Script/TheK28.K28Power
/// Size: 0x0378 (0x0004C8 - 0x000840)
class AK28Power : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x04C8   (0x0010)  MISSED
	class UInteractor*                                 _interactor;                                                // 0x04D8   (0x0008)  
	class UPowerChargeComponent*                       _powerChargeComponent;                                      // 0x04E0   (0x0008)  
	class UK28PowerChargePresentationPowerFadeComponent* _k28PowerChargePresentationPowerFadeComponent;            // 0x04E8   (0x0008)  
	class UK28PowerPresentationItemProgressComponent*  _k28PowerPresentationItemProgressComponent;                 // 0x04F0   (0x0008)  
	class UClass*                                      _dayNightComponentClass;                                    // 0x04F8   (0x0008)  
	class UClass*                                      _teleportationStrategyComponentClass;                       // 0x0500   (0x0008)  
	class UClass*                                      _killerTeleportationComponentClass;                         // 0x0508   (0x0008)  
	class UClass*                                      _killerPlayerViewComponentClass;                            // 0x0510   (0x0008)  
	class UClass*                                      _killerLockerComponentClass;                                // 0x0518   (0x0008)  
	class UClass*                                      _secondaryCameraClass;                                      // 0x0520   (0x0008)  
	class UClass*                                      _k28RemnantClass;                                           // 0x0528   (0x0008)  
	class UClass*                                      _moriArmsAnimationFollowerActorClass;                       // 0x0530   (0x0008)  
	class AK28SecondaryCamera*                         _secondaryCamera;                                           // 0x0538   (0x0008)  
	class UK28KillerLockerComponent*                   _killerLockerComponent;                                     // 0x0540   (0x0008)  
	class AK28Remnant*                                 _k28Remnant;                                                // 0x0548   (0x0008)  
	TArray<class UClass*>                              _killerStatusEffects;                                       // 0x0550   (0x0010)  
	TArray<class UClass*>                              _survivorStatusEffects;                                     // 0x0560   (0x0010)  
	class UClass*                                      _survivorAbductionCameraBehaviourClass;                     // 0x0570   (0x0008)  
	class UK28DayNightComponent*                       _dayNightComponent;                                         // 0x0578   (0x0008)  
	class UK28TeleportationStrategyComponent*          _teleportationStrategyComponent;                            // 0x0580   (0x0008)  
	FTunableStat                                       _tokensWhenPowerIsFullyCharged;                             // 0x0588   (0x0080)  
	FTunableStat                                       _secondsRequiredToChargePowerStartOfMatch;                  // 0x0608   (0x0080)  
	FTunableStat                                       _secondsRequiredToChargePowerDayTime;                       // 0x0688   (0x0080)  
	FTunableStat                                       _secondsRequiredToChargePowerNightTime;                     // 0x0708   (0x0080)  
	FDBDTunableRowHandle                               _maxTrackedTimeSinceLockerOrRemnantExit;                    // 0x0788   (0x0028)  
	int32_t                                            _teleportTokens;                                            // 0x07B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x07B4   (0x0004)  MISSED
	TArray<FK28InteractionPreventingTagsModification>  _survivorInteractionsPreventingTagModifications;            // 0x07B8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x70];                                      // 0x07C8   (0x0070)  MISSED
	bool                                               _isTunableInit;                                             // 0x0838   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0839   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK28.K28Power.OnRep_TeleportTokens
	// void OnRep_TeleportTokens();                                                                                          // [0x5bea1a0] Final|Native|Private 
	// Function /Script/TheK28.K28Power.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x5bea010] Final|Native|Private 
};

/// Class /Script/TheK28.K28PowerChargePresentationPowerFadeComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK28PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{ 
public:
};

/// Class /Script/TheK28.K28PowerPresentationItemProgressComponent
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UK28PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	SDK_UNDEFINED(8,4210) /* TWeakObjectPtr<AK28Power*> */ __um(_k28Power);                                        // 0x00C0   (0x0008)  
};

/// Class /Script/TheK28.K28Remnant
/// Size: 0x01E0 (0x000230 - 0x000410)
class AK28Remnant : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0230   (0x0060)  MISSED
	class UCurveFloat*                                 _teleportToRemnantSpeedCurve_Normal;                        // 0x0290   (0x0008)  
	class UCurveFloat*                                 _teleportToRemnantSpeedCurve_Penalty;                       // 0x0298   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMesh;                                              // 0x02A0   (0x0008)  
	class UCapsuleComponent*                           _capsuleComponent;                                          // 0x02A8   (0x0008)  
	class UAnimationMontageSlave*                      _montageFollower;                                           // 0x02B0   (0x0008)  
	class UMontagePlayer*                              _montagePlayer;                                             // 0x02B8   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x02C0   (0x0008)  
	class UK28RemnantOutlineUpdateStrategy*            _remnantOutlineStrategy;                                    // 0x02C8   (0x0008)  
	FDBDTunableRowHandle                               _teleportationFadeInTime;                                   // 0x02D0   (0x0028)  
	FDBDTunableRowHandle                               _teleportationFadeOutTime;                                  // 0x02F8   (0x0028)  
	FDBDTunableRowHandle                               _minDistanceFromHookedSurvivor;                             // 0x0320   (0x0028)  
	float                                              _renmantDeactivationTime;                                   // 0x0348   (0x0004)  
	float                                              _remnantDestructionTime;                                    // 0x034C   (0x0004)  
	FAnimationMontageDescriptor                        _slowTeleportToRenmantAnimationMontage;                     // 0x0350   (0x0020)  
	FAnimationMontageDescriptor                        _fastTeleportToRenmantAnimationMontage;                     // 0x0370   (0x0020)  
	EK28RemnantState                                   _remnantState;                                              // 0x0390   (0x0001)  
	unsigned char                                      UnknownData01_5[0x77];                                      // 0x0391   (0x0077)  MISSED
	class UAIPerceptionStimuliSourceComponent*         _perceptionStimuliComponent;                                // 0x0408   (0x0008)  


	/// Functions
	// Function /Script/TheK28.K28Remnant.OnRep_RemnantState
	// void OnRep_RemnantState();                                                                                            // [0x5bea160] Final|Native|Private 
	// Function /Script/TheK28.K28Remnant.Multicast_TriggerTeleportStart
	// void Multicast_TriggerTeleportStart(class ASlasherPlayer* killer);                                                    // [0x5be9f80] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28Remnant.Multicast_TeleportToRemnant
	// void Multicast_TeleportToRemnant(class ASlasherPlayer* killer, FRotator teleportRotation, bool isAnimationSlowed);    // [0x5be9e70] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK28.K28Remnant.Multicast_SurvivorDestroyedRemnant
	// void Multicast_SurvivorDestroyedRemnant(class ACamperPlayer* Survivor);                                               // [0x5be9de0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28Remnant.Multicast_DeactivateRemnant
	// void Multicast_DeactivateRemnant();                                                                                   // [0x57ff130] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28Remnant.Multicast_ActivateRemnant
	// void Multicast_ActivateRemnant(FVector Location, FRotator Rotation);                                                  // [0x5be9b50] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/TheK28.K28Remnant.Cosmetic_SurvivorDestroyedRemnant
	// void Cosmetic_SurvivorDestroyedRemnant(class ACamperPlayer* Survivor);                                                // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28Remnant.Cosmetic_OnTeleportationStartVFX
	// void Cosmetic_OnTeleportationStartVFX(class ASlasherPlayer* killer);                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28Remnant.Cosmetic_OnTeleportationPerformedVFX
	// void Cosmetic_OnTeleportationPerformedVFX(class ASlasherPlayer* killer, bool isSlowTeleportation);                    // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28Remnant.Cosmetic_OnRemnantStateChanged
	// void Cosmetic_OnRemnantStateChanged(EK28RemnantState remnantState);                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28Remnant.Cosmetic_OnRemnantDeactivated
	// void Cosmetic_OnRemnantDeactivated();                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28Remnant.Cosmetic_OnRemnantActivated
	// void Cosmetic_OnRemnantActivated();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28Remnant.Authority_OnCollisionDetected
	// void Authority_OnCollisionDetected(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5be97d0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheK28.K28RemnantAnimInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UK28RemnantAnimInstance : public UAnimInstance
{ 
public:
	EK28RemnantState                                   _currentRemnantState;                                       // 0x02C0   (0x0001)  
	bool                                               _isTeleportingToRemnant;                                    // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E];                                      // 0x02C2   (0x001E)  MISSED


	/// Functions
	// Function /Script/TheK28.K28RemnantAnimInstance.ConsumeSurvivorWhoDestroyedRemnant
	// class ACamperPlayer* ConsumeSurvivorWhoDestroyedRemnant();                                                            // [0x5be99f0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheK28.K28RemnantOutlineUpdateStrategy
/// Size: 0x0018 (0x0000E0 - 0x0000F8)
class UK28RemnantOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _availableForTeleportSelectionColor;                        // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/TheK28.K28SecondaryCamera
/// Size: 0x0178 (0x000230 - 0x0003A8)
class AK28SecondaryCamera : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	class UBoxComponent*                               _teleportCollision;                                         // 0x0238   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0240   (0x0004)  MISSED
	float                                              _minimumCameraPitchOrientationAngle;                        // 0x0244   (0x0004)  
	float                                              _maximumCameraPitchOrientationAngle;                        // 0x0248   (0x0004)  
	float                                              _observerRotationSpeed;                                     // 0x024C   (0x0004)  
	float                                              _minTimeBetweenCameraRotationUpdateRPC;                     // 0x0250   (0x0004)  
	float                                              _survivorGrabTransition_CameraRotationEndPercentage;        // 0x0254   (0x0004)  
	float                                              _survivorGrabTransition_DistanceFromLocker;                 // 0x0258   (0x0004)  
	unsigned char                                      UnknownData02_5[0x134];                                     // 0x025C   (0x0134)  MISSED
	TArray<FGameplayTag>                               _stateTagsToDisableNightMode;                               // 0x0390   (0x0010)  
	bool                                               _isKillerPlayerViewTarget;                                  // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x03A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK28.K28SecondaryCamera.Server_SetIsKillerPlayerViewTarget
	// void Server_SetIsKillerPlayerViewTarget(bool isKillerPlayerViewTarget);                                               // [0x57e9c20] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK28.K28SecondaryCamera.Server_SetCameraOrientation
	// void Server_SetCameraOrientation(FRotator NewOrientation);                                                            // [0x5b78640] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/TheK28.K28SecondaryCamera.OnRep_IsKillerPlayerViewTarget
	// void OnRep_IsKillerPlayerViewTarget();                                                                                // [0x5bea140] Final|Native|Private 
	// Function /Script/TheK28.K28SecondaryCamera.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5bea030] Final|Native|Private 
	// Function /Script/TheK28.K28SecondaryCamera.Multicast_SetCameraOrientation
	// void Multicast_SetCameraOrientation(FRotator NewOrientation, bool isRelativeRotation);                                // [0x5be9d00] Net|Native|Event|NetMulticast|Public|HasDefaults 
	// Function /Script/TheK28.K28SecondaryCamera.GetIsKillerPlayerViewTarget
	// bool GetIsKillerPlayerViewTarget();                                                                                   // [0x5be9a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28SecondaryCamera.GetCameraWorldRotation
	// FRotator GetCameraWorldRotation();                                                                                    // [0x5be9a50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_UpdateDarknessPlaneVisibility
	// void Cosmetic_UpdateDarknessPlaneVisibility(bool IsVisible);                                                          // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportStartVisuals
	// void Cosmetic_TriggerTeleportStartVisuals();                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_TriggerTeleportEndVisuals
	// void Cosmetic_TriggerTeleportEndVisuals();                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeOut
	// void Cosmetic_TriggerFadeOut();                                                                                       // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_TriggerFadeIn
	// void Cosmetic_TriggerFadeIn();                                                                                        // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_OnNightCycleChanged
	// void Cosmetic_OnNightCycleChanged(EK28NightCycleState newNightCycleState);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_OnKillerExitLocker
	// void Cosmetic_OnKillerExitLocker();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_OnKillerEnterLocker
	// void Cosmetic_OnKillerEnterLocker();                                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_OnIsLocallyObservingKillerChanged
	// void Cosmetic_OnIsLocallyObservingKillerChanged(bool isLocallyObservingKiller);                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SecondaryCamera.Cosmetic_DisableAllEffects
	// void Cosmetic_DisableAllEffects();                                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK28.K28SurvivorAbductionCameraBehaviourComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UK28SurvivorAbductionCameraBehaviourComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	float                                              _targetSpringArmLength;                                     // 0x00C0   (0x0004)  
	float                                              _targetLockerOffsetForCameraView;                           // 0x00C4   (0x0004)  
	FVector2D                                          _cameraLocationOffset;                                      // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/TheK28.K28SurvivorComponent
/// Size: 0x0060 (0x000188 - 0x0001E8)
class UK28SurvivorComponent : public UK28PlayerComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0188   (0x0008)  MISSED
	FDBDTunableRowHandle                               _killerBlackMaterialDarknessEffect;                         // 0x0190   (0x0028)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x01B8   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheK28.K28SurvivorComponent.OnKillerInRangeChanged
	// void OnKillerInRangeChanged(bool inRange);                                                                            // [0x5bec270] Final|Native|Private 
};

/// Class /Script/TheK28.K28SurvivorCosmeticHelperActor
/// Size: 0x0038 (0x000270 - 0x0002A8)
class AK28SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0270   (0x0028)  MISSED
	TArray<FGameplayTag>                               _stateTagsToDisableNightMode;                               // 0x0298   (0x0010)  


	/// Functions
	// Function /Script/TheK28.K28SurvivorCosmeticHelperActor.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5bec300] Final|Native|Private 
	// Function /Script/TheK28.K28SurvivorCosmeticHelperActor.GetDarknessPlaneMesh
	// class UStaticMeshComponent* GetDarknessPlaneMesh();                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent|Const 
	// Function /Script/TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNighttimeNearingActivation
	// void Cosmetic_OnNighttimeNearingActivation();                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnNightCycleChanged
	// void Cosmetic_OnNightCycleChanged(EK28NightCycleState nightCycleState, bool instant);                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged
	// void Cosmetic_OnLocallyObservedChanged();                                                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_DeactivateNightGlowVFX
	// void Cosmetic_DeactivateNightGlowVFX();                                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK28.K28SurvivorCosmeticHelperActor.Cosmetic_ActivateNightGlowVFX
	// void Cosmetic_ActivateNightGlowVFX();                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK28.K28SurvivorLockerAbductionInteraction
/// Size: 0x0080 (0x000680 - 0x000700)
class UK28SurvivorLockerAbductionInteraction : public UBaseLockerInteraction
{ 
public:
	FAnimationMontageDescriptor                        _survivorPanicInLockerAnimationMontageDescriptor;           // 0x0678   (0x0020)  
	SDK_UNDEFINED(8,4211) /* TWeakObjectPtr<UBaseLockerInteraction*> */ __um(_overriddenInteractionInstance);      // 0x0698   (0x0008)  
	TArray<FGameplayTag>                               _overridingTags;                                            // 0x06A0   (0x0010)  
	float                                              _fadeOutTime;                                               // 0x06B0   (0x0004)  
	float                                              _minDotProductFadeOutThreshold;                             // 0x06B4   (0x0004)  
	float                                              _rotationMaxTime;                                           // 0x06B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x06BC   (0x0044)  MISSED


	/// Functions
	// Function /Script/TheK28.K28SurvivorLockerAbductionInteraction.OnRep_OverriddenInteractionInstance
	// void OnRep_OverriddenInteractionInstance();                                                                           // [0x5bec320] Final|Native|Private 
};

/// Struct /Script/TheK28.K28LockerCluster
/// Size: 0x0030 (0x000000 - 0x000030)
struct FK28LockerCluster
{ 
	TArray<class UK28LockerComponent*>                 _lockersInCluster;                                          // 0x0000   (0x0010)  
	FVector                                            _centerLocation;                                            // 0x0010   (0x000C)  
	FVector                                            _teleportIndicatorLocation;                                 // 0x001C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/TheK28.K28TeleportationStrategyComponent
/// Size: 0x00A8 (0x0000B8 - 0x000160)
class UK28TeleportationStrategyComponent : public UActorComponent
{ 
public:
	TArray<FK28LockerCluster>                          _lockerClusters;                                            // 0x00B8   (0x0010)  
	float                                              _minMovementSquaredDistanceForBestClusterRecalculation;     // 0x00C8   (0x0004)  
	float                                              _minDeltaSquaredDistanceForBestTargetRecalculation;         // 0x00CC   (0x0004)  
	float                                              _minDeltaDotProductForBestTargetRecalculation;              // 0x00D0   (0x0004)  
	float                                              _minDotProductToBeEligibleForBestCluster;                   // 0x00D4   (0x0004)  
	class UClass*                                      _lockerComponentClass;                                      // 0x00D8   (0x0008)  
	class UClass*                                      _teleportIndicatorClass;                                    // 0x00E0   (0x0008)  
	class ADBDActorIndicator*                          _teleportIndicator;                                         // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x00F0   (0x0070)  MISSED


	/// Functions
	// Function /Script/TheK28.K28TeleportationStrategyComponent.Server_UpdateBestTeleportTarget
	// void Server_UpdateBestTeleportTarget(int32_t bestTeleportTargetID);                                                   // [0x5bec410] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK28.K28TeleportationStrategyComponent.Multicast_UpdateBestTeleportTarget
	// void Multicast_UpdateBestTeleportTarget(int32_t bestTeleportTargetID);                                                // [0x5891be0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28TeleportationStrategyComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5bebed0] Final|Native|Private 
};

/// Class /Script/TheK28.K28TeleportInteraction
/// Size: 0x00F0 (0x000790 - 0x000880)
class UK28TeleportInteraction : public UChargeableInteractionDefinition
{ 
public:
	FSecondaryInteractionProperties                    _confirmTeleportationProperties;                            // 0x0790   (0x0038)  
	FSecondaryInteractionProperties                    _returnToRemnantProperties;                                 // 0x07C8   (0x0038)  
	EInputInteractionType                              _triggerTeleportInputType;                                  // 0x0800   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0801   (0x0007)  MISSED
	class UCurveFloat*                                 _chargingSpeedCurve;                                        // 0x0808   (0x0008)  
	class UCurveFloat*                                 _chargedSpeedCurve;                                         // 0x0810   (0x0008)  
	class UCurveFloat*                                 _cancelledSpeedCurve;                                       // 0x0818   (0x0008)  
	float                                              _releaseInputMaxTime;                                       // 0x0820   (0x0004)  
	float                                              _minimumChargePercentageToConsiderTeleportButtonPress;      // 0x0824   (0x0004)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0828   (0x0058)  MISSED


	/// Functions
	// Function /Script/TheK28.K28TeleportInteraction.Server_RequestTeleportToTarget
	// void Server_RequestTeleportToTarget(class ASlasherPlayer* killer, class UObject* teleportTarget);                     // [0x5bec340] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK28.K28TeleportInteraction.Multicast_RefuseTeleportationRequest
	// void Multicast_RefuseTeleportationRequest();                                                                          // [0x5af9850] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28TeleportInteraction.Multicast_ConfirmTeleportationRequest
	// void Multicast_ConfirmTeleportationRequest(class ASlasherPlayer* killer, class UObject* teleportTarget);              // [0x59c2180] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK28.K28TeleportInteraction.Multicast_CompleteTeleportation
	// void Multicast_CompleteTeleportation();                                                                               // [0x5bec250] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/TheK28.K28Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK28Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheK28.K28Utilities.IsLockerUsedByKillerLocked
	// bool IsLockerUsedByKillerLocked(class UObject* WorldContextObject);                                                   // [0x5bec1c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK28.K28Utilities.GetTeleportationStrategyComponent
	// class UK28TeleportationStrategyComponent* GetTeleportationStrategyComponent(class UObject* WorldContextObject);       // [0x5bec130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK28.K28Utilities.GetSecondaryCamera
	// class AK28SecondaryCamera* GetSecondaryCamera(class UObject* WorldContextObject);                                     // [0x5bec0a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK28.K28Utilities.GetRemnant
	// class AK28Remnant* GetRemnant(class UObject* WorldContextObject);                                                     // [0x5bec010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK28.K28Utilities.GetK28Power
	// class AK28Power* GetK28Power(class UObject* WorldContextObject);                                                      // [0x5bebf80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK28.K28Utilities.GetDayNightComponent
	// class UK28DayNightComponent* GetDayNightComponent(class UObject* WorldContextObject);                                 // [0x5bebef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheK28.S31P01
/// Size: 0x0020 (0x0003C8 - 0x0003E8)
class US31P01 : public UPerk
{ 
public:
	float                                              _loseHealthStateDetectionRadius;                            // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	float                                              _killerAuraRevealDuration;                                  // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _timedAuraReveal;                                           // 0x03E0   (0x0008)  


	/// Functions
	// Function /Script/TheK28.S31P01.GetKillerAuraRevealDuration
	// float GetKillerAuraRevealDuration();                                                                                  // [0x4fe8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK28.S31P02
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class US31P02 : public UPerk
{ 
public:
	float                                              _blindnessDurationPerLevel;                                 // 0x03C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UClass*                                      _blindnessEffect;                                           // 0x03D8   (0x0008)  
	FGameplayTag                                       _itemFlag;                                                  // 0x03E0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03EC   (0x0004)  MISSED
};

/// Class /Script/TheK28.S31P03
/// Size: 0x0030 (0x0003C8 - 0x0003F8)
class US31P03 : public UPerk
{ 
public:
	float                                              _genRepairSpeedBoostForDullTotem;                           // 0x03C8   (0x000C)  
	float                                              _genRepairSpeedBoostForHexTotem;                            // 0x03D4   (0x000C)  
	class UClass*                                      _effectClass;                                               // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x03E8   (0x0010)  MISSED
};

/// Struct /Script/TheK28.PreviousLockerWeightData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPreviousLockerWeightData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TheK28.SurvivorQueryPair
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSurvivorQueryPair
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/TheK28.K28SecondaryCameraMovementData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FK28SecondaryCameraMovementData
{ 
	FVector                                            InitialActorLocation;                                       // 0x0000   (0x000C)  
	FVector                                            TargetActorLocation;                                        // 0x000C   (0x000C)  
	bool                                               IsPerformingGrabRotation;                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRotator                                           InitialCameraRotation;                                      // 0x001C   (0x000C)  
	FRotator                                           TargetCameraRotation;                                       // 0x0028   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UCurveFloat*                                 TransitionCurve;                                            // 0x0038   (0x0008)  
	float                                              CameraMovementDuration;                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/TheK28.K28SecondaryCameraFOVData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FK28SecondaryCameraFOVData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              _fovChangeDuration;                                         // 0x0008   (0x0004)  
	float                                              _initialFovValue;                                           // 0x000C   (0x0004)  
	float                                              _targetFovValue;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UCurveFloat*                                 _fovCurve;                                                  // 0x0018   (0x0008)  
};

